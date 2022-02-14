
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* tail; size_t* children; } ;
typedef TYPE_1__ trie_node ;
typedef size_t node_index ;
struct TYPE_7__ {int min_length; scalar_t__ full; TYPE_1__* nodes; } ;
typedef TYPE_2__ git_oid_shorten ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,size_t,int,char const*) ;

int FUNC_3(git_oid_shorten *VAR_2, const char *VAR_3)
{
 int VAR_4;
 bool VAR_5;
 node_index VAR_6;

 if (VAR_2->full) {
  FUNC_1(VAR_0, "unable to shorten OID - OID set full");
  return -1;
 }

 if (VAR_3 == ((void*)0))
  return VAR_2->min_length;

 VAR_6 = 0;
 VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
  int VAR_7 = FUNC_0(VAR_3[VAR_4]);
  trie_node *VAR_8;

  if (VAR_7 == -1) {
   FUNC_1(VAR_0, "unable to shorten OID - invalid hex value");
   return -1;
  }

  VAR_8 = &VAR_2->nodes[VAR_6];

  if (VAR_5) {
   const char *VAR_9;

   VAR_9 = VAR_8->tail;
   VAR_8->tail = ((void*)0);

   VAR_8 = FUNC_2(VAR_2, VAR_6, FUNC_0(VAR_9[0]), &VAR_9[1]);
   if (VAR_8 == ((void*)0)) {
    if (VAR_2->full)
     FUNC_1(VAR_0, "unable to shorten OID - OID set full");
    return -1;
   }
  }

  if (VAR_8->children[VAR_7] == 0) {
   if (FUNC_2(VAR_2, VAR_6, VAR_7, &VAR_3[VAR_4 + 1]) == ((void*)0)) {
    if (VAR_2->full)
     FUNC_1(VAR_0, "unable to shorten OID - OID set full");
    return -1;
   }
   break;
  }

  VAR_6 = VAR_8->children[VAR_7];
  VAR_5 = 0;

  if (VAR_6 < 0) {
   VAR_8->children[VAR_7] = VAR_6 = -VAR_6;
   VAR_5 = 1;
  }
 }

 if (++VAR_4 > VAR_2->min_length)
  VAR_2->min_length = VAR_4;

 return VAR_2->min_length;
}
