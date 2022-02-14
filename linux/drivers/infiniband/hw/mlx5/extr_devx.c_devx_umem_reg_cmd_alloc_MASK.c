
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int dummy; } ;
struct devx_umem_reg_cmd {int inlen; int in; } ;
struct devx_umem {int ncont; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct uverbs_attr_bundle*,int) ;

__attribute__((used)) static int FUNC_3(struct uverbs_attr_bundle *VAR_2,
       struct devx_umem *VAR_3,
       struct devx_umem_reg_cmd *VAR_4)
{
 VAR_4->inlen = FUNC_0(VAR_0) +
      (FUNC_0(VAR_1) * VAR_3->ncont);
 VAR_4->in = FUNC_2(VAR_2, VAR_4->inlen);
 return FUNC_1(VAR_4->in);
}
