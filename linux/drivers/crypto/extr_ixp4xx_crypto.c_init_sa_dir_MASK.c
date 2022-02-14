
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ix_sa_dir {int npe_ctx; int npe_ctx_phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct ix_sa_dir*) ;

__attribute__((used)) static int FUNC_2(struct ix_sa_dir *VAR_3)
{
 VAR_3->npe_ctx = FUNC_0(VAR_2, VAR_1, &VAR_3->npe_ctx_phys);
 if (!VAR_3->npe_ctx) {
  return -VAR_0;
 }
 FUNC_1(VAR_3);
 return 0;
}
