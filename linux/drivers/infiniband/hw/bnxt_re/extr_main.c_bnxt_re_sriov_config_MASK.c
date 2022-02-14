
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_re_dev {int num_vfs; int qplib_ctx; int rcfw; int qplib_res; } ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (struct bnxt_re_dev*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, int VAR_1)
{
 struct bnxt_re_dev *VAR_2 = VAR_0;

 if (!VAR_2)
  return;

 VAR_2->num_vfs = VAR_1;
 FUNC_1(VAR_2);
 FUNC_0(&VAR_2->qplib_res, &VAR_2->rcfw,
          &VAR_2->qplib_ctx);
}
