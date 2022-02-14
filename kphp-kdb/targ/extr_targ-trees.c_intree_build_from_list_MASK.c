
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int treespace_t ;
typedef void* treeref_t ;
struct intree_node {int left; void* right; int z; int x; } ;


 unsigned int FUNC_0 (struct intree_node*,void*) ;
 struct intree_node* FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ) ;

treeref_t FUNC_4 (treespace_t VAR_0, int *VAR_1, int VAR_2) {
  if (!VAR_2) {
    return 0;
  }
  static treeref_t VAR_3[128];
  static unsigned VAR_4[128];
  int VAR_5 = 0, VAR_6, VAR_7 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
    FUNC_2 (*VAR_1 > VAR_7);
    VAR_7 = *VAR_1;
    treeref_t VAR_8 = FUNC_3 (VAR_0);
    struct intree_node *VAR_9 = FUNC_1 (VAR_8);
    VAR_9->x = *VAR_1++;
    VAR_9->z = *VAR_1++;
    unsigned VAR_10 = FUNC_0(VAR_9, VAR_8);
    int VAR_11 = 0;
    while (VAR_5) {
      if (VAR_10 <= VAR_4[VAR_5 - 1]) {
 struct intree_node *VAR_12 = FUNC_1 (VAR_3[VAR_5 - 1]);
 VAR_12->right = VAR_8;
 break;
      }
      VAR_11 = VAR_3[--VAR_5];
    }
    VAR_9->left = VAR_11;
    VAR_9->right = 0;
    VAR_3[VAR_5] = VAR_8;
    VAR_4[VAR_5] = VAR_10;
    FUNC_2 (++VAR_5 < 128);
  }

  return VAR_3[0];
}
