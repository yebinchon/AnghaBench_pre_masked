
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* topmsg_tree; } ;
typedef TYPE_1__ user_t ;
struct TYPE_9__ {int x; struct TYPE_9__* right; int data; struct TYPE_9__* left; } ;
typedef TYPE_2__ tree_t ;
struct TYPE_10__ {int N; int* A; int last_A; int root; } ;
typedef TYPE_3__ listree_t ;
struct TYPE_11__ {int extra_offset; } ;


 int VAR_0 ;
 TYPE_7__* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 () ;
 void* FUNC_3 (void*,int,int ,int) ;

int *FUNC_4 (tree_t *VAR_2, int *VAR_3, int *VAR_4, int VAR_5, user_t *VAR_6, char *VAR_7) {
  int VAR_8;
  listree_t VAR_9;
  if (VAR_2) {
    VAR_3 = FUNC_4 (VAR_2->left, VAR_3, VAR_4, VAR_2->x - 1, VAR_6, VAR_7);
    VAR_8 = VAR_2->x;
    VAR_9.root = VAR_2->data;
    if (VAR_3 < VAR_4 && VAR_3[1] == VAR_2->x) {
      VAR_9.N = ((VAR_3[2] - VAR_3[0]) >> 2);
      FUNC_0 (VAR_3[0] >= 0 && VAR_3[0] <= VAR_3[2] && VAR_3[2] <= VAR_1->extra_offset);
      VAR_9.A = (int *) (VAR_7 + VAR_3[0]);
      VAR_9.last_A = (VAR_9.N ? VAR_9.A[VAR_9.N-1] : 0);
      VAR_3 += 2;
    } else {
      VAR_9.N = 0;
      VAR_9.A = 0;
      VAR_9.last_A = 0;
    }
    int VAR_10 = FUNC_1 (&VAR_9, 0);
    if (VAR_10 != -1) {
      FUNC_0 (VAR_10 > 0);
      VAR_6->topmsg_tree = FUNC_3 (VAR_6->topmsg_tree, VAR_10, FUNC_2(), VAR_8);
    }
    VAR_3 = FUNC_4 (VAR_2->right, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  }
  while (VAR_3 < VAR_4 && VAR_3[1] <= VAR_5) {
    VAR_8 = VAR_3[1];
    VAR_9.root = VAR_0;
    VAR_9.N = ((VAR_3[2] - VAR_3[0]) >> 2);
    FUNC_0 (VAR_3[0] >= 0 && VAR_3[0] <= VAR_3[2] && VAR_3[2] <= VAR_1->extra_offset);
    VAR_9.A = (int *) (VAR_7 + VAR_3[0]);
    VAR_9.last_A = (VAR_9.N ? VAR_9.A[VAR_9.N-1] : 0);
    VAR_3 += 2;
    int VAR_11 = FUNC_1 (&VAR_9, 0);
    if (VAR_11 != -1) {
      FUNC_0 (VAR_11 > 0);
      VAR_6->topmsg_tree = FUNC_3 (VAR_6->topmsg_tree, VAR_11, FUNC_2(), VAR_8);
    }
  }
  return VAR_3;
}
