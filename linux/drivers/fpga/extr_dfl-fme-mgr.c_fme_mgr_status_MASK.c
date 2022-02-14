
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fpga_manager {struct fme_mgr_priv* priv; } ;
struct fme_mgr_priv {int pr_error; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u64 FUNC_1(struct fpga_manager *VAR_0)
{
 struct fme_mgr_priv *VAR_1 = VAR_0->priv;

 return FUNC_0(VAR_1->pr_error);
}
