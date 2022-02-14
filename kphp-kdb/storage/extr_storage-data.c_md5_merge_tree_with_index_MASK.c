
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int idx_docs; unsigned long long* Md5_Pos; int * Md5_Docs; } ;
typedef TYPE_1__ volume_t ;
struct TYPE_6__ {unsigned long long offset; struct TYPE_6__* right; int * x; struct TYPE_6__* left; } ;
typedef TYPE_2__ md5_tree_t ;


 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (unsigned char*,int *,int) ;

__attribute__((used)) static void FUNC_2 (volume_t *VAR_0, unsigned char *VAR_1, unsigned long long *VAR_2, int *VAR_3, int *VAR_4, md5_tree_t *VAR_5) {
  if (VAR_5->left) {
    FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5->left);
  }
  while ( (*VAR_4) < VAR_0->idx_docs && FUNC_0 (&VAR_0->Md5_Docs[(*VAR_4)<<4], &VAR_5->x[0], 16) < 0) {
    FUNC_1 (&VAR_1[(*VAR_3)<<4], &VAR_0->Md5_Docs[(*VAR_4)<<4], 16);
    VAR_2[(*VAR_3)] = VAR_0->Md5_Pos[*VAR_4];
    (*VAR_3)++;
    (*VAR_4)++;
  }

  FUNC_1 (&VAR_1[(*VAR_3)<<4], &VAR_5->x[0], 16);
  VAR_2[(*VAR_3)] = VAR_5->offset;
  (*VAR_3)++;

  if (VAR_5->right) {
    FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5->right);
  }
}
