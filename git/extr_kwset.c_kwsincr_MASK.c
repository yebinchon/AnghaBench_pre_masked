
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie {int accepting; scalar_t__ depth; scalar_t__ shift; int * fail; int * next; struct trie* parent; struct tree* links; } ;
struct tree {unsigned char label; int balance; struct trie* trie; struct tree* rlink; struct tree* llink; } ;
struct kwset {char const* trans; int words; scalar_t__ mind; scalar_t__ maxd; int obstack; struct trie* trie; } ;
typedef scalar_t__ kwset_t ;


 int VAR_0 ;
 size_t FUNC_0 (char const) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct tree*) ;

const char *
FUNC_4 (kwset_t VAR_1, char const *VAR_2, size_t VAR_3)
{
  struct kwset *VAR_4;
  register struct trie *VAR_5;
  register unsigned char VAR_6;
  register struct tree *VAR_7;
  register int VAR_8;
  struct tree *VAR_9[VAR_0];
  enum { L, R } VAR_10[VAR_0];
  struct tree *VAR_11, *VAR_12, *VAR_13, *VAR_14, *VAR_15;

  VAR_4 = (struct kwset *) VAR_1;
  VAR_5 = VAR_4->trie;
  VAR_2 += VAR_3;



  while (VAR_3--)
    {
      VAR_6 = VAR_4->trans ? VAR_4->trans[FUNC_0(*--VAR_2)] : *--VAR_2;




      VAR_7 = VAR_5->links;
      VAR_9[0] = (struct tree *) &VAR_5->links;
      VAR_10[0] = L;
      VAR_8 = 1;

      while (VAR_7 && VAR_6 != VAR_7->label)
 {
   VAR_9[VAR_8] = VAR_7;
   if (VAR_6 < VAR_7->label)
     VAR_10[VAR_8++] = L, VAR_7 = VAR_7->llink;
   else
     VAR_10[VAR_8++] = R, VAR_7 = VAR_7->rlink;
 }




      if (!VAR_7)
 {
   VAR_7 = (struct tree *) FUNC_2(&VAR_4->obstack,
            sizeof (struct tree));
   if (!VAR_7)
     return "memory exhausted";
   VAR_7->llink = ((void*)0);
   VAR_7->rlink = ((void*)0);
   VAR_7->trie = (struct trie *) FUNC_2(&VAR_4->obstack,
           sizeof (struct trie));
   if (!VAR_7->trie)
     {
       FUNC_3(&VAR_4->obstack, VAR_7);
       return "memory exhausted";
     }
   VAR_7->trie->accepting = 0;
   VAR_7->trie->links = ((void*)0);
   VAR_7->trie->parent = VAR_5;
   VAR_7->trie->next = ((void*)0);
   VAR_7->trie->fail = ((void*)0);
   VAR_7->trie->depth = VAR_5->depth + 1;
   VAR_7->trie->shift = 0;
   VAR_7->label = VAR_6;
   VAR_7->balance = 0;


   if (VAR_10[--VAR_8] == L)
     VAR_9[VAR_8]->llink = VAR_7;
   else
     VAR_9[VAR_8]->rlink = VAR_7;


   while (VAR_8 && !VAR_9[VAR_8]->balance)
     {
       if (VAR_10[VAR_8] == L)
  --VAR_9[VAR_8]->balance;
       else
  ++VAR_9[VAR_8]->balance;
       --VAR_8;
     }


   if (VAR_8 && ((VAR_10[VAR_8] == L && --VAR_9[VAR_8]->balance)
   || (VAR_10[VAR_8] == R && ++VAR_9[VAR_8]->balance)))
     {
       switch (VAR_9[VAR_8]->balance)
  {
  case (char) -2:
    switch (VAR_10[VAR_8 + 1])
      {
      case L:
        VAR_12 = VAR_9[VAR_8], VAR_11 = VAR_12->llink, VAR_14 = VAR_11->rlink;
        VAR_11->rlink = VAR_12, VAR_12->llink = VAR_14;
        VAR_11->balance = VAR_12->balance = 0;
        break;
      case R:
        VAR_12 = VAR_9[VAR_8], VAR_13 = VAR_12->llink, VAR_11 = VAR_13->rlink;
        VAR_14 = VAR_11->rlink, VAR_15 = VAR_11->llink;
        VAR_11->llink = VAR_13, VAR_13->rlink = VAR_15, VAR_11->rlink = VAR_12, VAR_12->llink = VAR_14;
        VAR_13->balance = VAR_11->balance != 1 ? 0 : -1;
        VAR_12->balance = VAR_11->balance != (char) -1 ? 0 : 1;
        VAR_11->balance = 0;
        break;
      default:
        FUNC_1 ();
      }
    break;
  case 2:
    switch (VAR_10[VAR_8 + 1])
      {
      case R:
        VAR_13 = VAR_9[VAR_8], VAR_11 = VAR_13->rlink, VAR_15 = VAR_11->llink;
        VAR_11->llink = VAR_13, VAR_13->rlink = VAR_15;
        VAR_11->balance = VAR_13->balance = 0;
        break;
      case L:
        VAR_13 = VAR_9[VAR_8], VAR_12 = VAR_13->rlink, VAR_11 = VAR_12->llink;
        VAR_15 = VAR_11->llink, VAR_14 = VAR_11->rlink;
        VAR_11->llink = VAR_13, VAR_13->rlink = VAR_15, VAR_11->rlink = VAR_12, VAR_12->llink = VAR_14;
        VAR_13->balance = VAR_11->balance != 1 ? 0 : -1;
        VAR_12->balance = VAR_11->balance != (char) -1 ? 0 : 1;
        VAR_11->balance = 0;
        break;
      default:
        FUNC_1 ();
      }
    break;
  default:
    FUNC_1 ();
  }

       if (VAR_10[VAR_8 - 1] == L)
  VAR_9[VAR_8 - 1]->llink = VAR_11;
       else
  VAR_9[VAR_8 - 1]->rlink = VAR_11;
     }
 }

      VAR_5 = VAR_7->trie;
    }



  if (!VAR_5->accepting)
    VAR_5->accepting = 1 + 2 * VAR_4->words;
  ++VAR_4->words;


  if (VAR_5->depth < VAR_4->mind)
    VAR_4->mind = VAR_5->depth;
  if (VAR_5->depth > VAR_4->maxd)
    VAR_4->maxd = VAR_5->depth;

  return ((void*)0);
}
