
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie {int accepting; int shift; int depth; struct tree* links; } ;
struct tree {unsigned char label; struct trie* trie; struct tree* rlink; struct tree* llink; } ;
struct kwsmatch {int index; int* offset; int * size; } ;
struct kwset {size_t mind; unsigned char* delta; unsigned char* trans; int maxd; struct trie* trie; struct trie** next; } ;
typedef scalar_t__ kwset_t ;


 size_t FUNC_0 (char const) ;

__attribute__((used)) static size_t
FUNC_1 (kwset_t VAR_0, char const *VAR_1, size_t VAR_2, struct kwsmatch *VAR_3)
{
  struct kwset const *VAR_4;
  struct trie * const *VAR_5;
  struct trie const *VAR_6;
  struct trie const *VAR_7;
  char const *VAR_8, *VAR_9, *VAR_10, *VAR_11;
  register unsigned char VAR_12;
  register unsigned char const *VAR_13;
  register int VAR_14;
  register char const *VAR_15, *VAR_16;
  register struct tree const *VAR_17;
  register unsigned char const *VAR_18;

  VAR_7 = ((void*)0);


  VAR_4 = (struct kwset *) VAR_0;
  if (VAR_2 < VAR_4->mind)
    return -1;
  VAR_5 = VAR_4->next;
  VAR_13 = VAR_4->delta;
  VAR_18 = VAR_4->trans;
  VAR_9 = VAR_1 + VAR_2;
  VAR_15 = VAR_1;
  if ((VAR_14 = VAR_4->mind) != 0)
    VAR_10 = ((void*)0);
  else
    {
      VAR_10 = VAR_1, VAR_7 = VAR_4->trie;
      goto match;
    }

  if (VAR_2 >= 4 * VAR_4->mind)
    VAR_16 = VAR_9 - 4 * VAR_4->mind;
  else
    VAR_16 = ((void*)0);

  while (VAR_9 - VAR_15 >= VAR_14)
    {
      if (VAR_16 && VAR_15 <= VAR_16)
 {
   VAR_15 += VAR_14 - 1;
   while ((VAR_14 = VAR_13[VAR_12 = *VAR_15]) && VAR_15 < VAR_16)
     {
       VAR_15 += VAR_14;
       VAR_15 += VAR_13[FUNC_0(*VAR_15)];
       VAR_15 += VAR_13[FUNC_0(*VAR_15)];
     }
   ++VAR_15;
 }
      else
 VAR_14 = VAR_13[VAR_12 = (VAR_15 += VAR_14)[-1]];
      if (VAR_14)
 continue;
      VAR_8 = VAR_15 - 1;
      VAR_6 = VAR_5[VAR_12];
      if (VAR_6->accepting)
 {
   VAR_10 = VAR_8;
   VAR_7 = VAR_6;
 }
      VAR_14 = VAR_6->shift;
      while (VAR_8 > VAR_1)
 {
   VAR_12 = VAR_18 ? VAR_18[FUNC_0(*--VAR_8)] : *--VAR_8;
   VAR_17 = VAR_6->links;
   while (VAR_17 && VAR_12 != VAR_17->label)
     if (VAR_12 < VAR_17->label)
       VAR_17 = VAR_17->llink;
     else
       VAR_17 = VAR_17->rlink;
   if (VAR_17)
     {
       VAR_6 = VAR_17->trie;
       if (VAR_6->accepting)
  {
    VAR_10 = VAR_8;
    VAR_7 = VAR_6;
  }
     }
   else
     break;
   VAR_14 = VAR_6->shift;
 }
      if (VAR_10)
 goto match;
    }
  return -1;

 match:



  if (VAR_9 - VAR_10 > VAR_4->maxd)
    VAR_9 = VAR_10 + VAR_4->maxd;
  VAR_11 = ((void*)0);
  VAR_14 = 1;
  while (VAR_9 - VAR_15 >= VAR_14)
    {
      if ((VAR_14 = VAR_13[VAR_12 = (VAR_15 += VAR_14)[-1]]) != 0)
 continue;
      VAR_8 = VAR_15 - 1;
      if (!(VAR_6 = VAR_5[VAR_12]))
 {
   VAR_14 = 1;
   continue;
 }
      if (VAR_6->accepting && VAR_8 <= VAR_10)
 {
   VAR_11 = VAR_8;
   VAR_7 = VAR_6;
 }
      VAR_14 = VAR_6->shift;
      while (VAR_8 > VAR_1)
 {
   VAR_12 = VAR_18 ? VAR_18[FUNC_0(*--VAR_8)] : *--VAR_8;
   VAR_17 = VAR_6->links;
   while (VAR_17 && VAR_12 != VAR_17->label)
     if (VAR_12 < VAR_17->label)
       VAR_17 = VAR_17->llink;
     else
       VAR_17 = VAR_17->rlink;
   if (VAR_17)
     {
       VAR_6 = VAR_17->trie;
       if (VAR_6->accepting && VAR_8 <= VAR_10)
  {
    VAR_11 = VAR_8;
    VAR_7 = VAR_6;
  }
     }
   else
     break;
   VAR_14 = VAR_6->shift;
 }
      if (VAR_11)
 {
   VAR_10 = VAR_11;
   goto match;
 }
      if (!VAR_14)
 VAR_14 = 1;
    }

  if (VAR_3)
    {
      VAR_3->index = VAR_7->accepting / 2;
      VAR_3->offset[0] = VAR_10 - VAR_1;
      VAR_3->size[0] = VAR_7->depth;
    }
  return VAR_10 - VAR_1;
}
