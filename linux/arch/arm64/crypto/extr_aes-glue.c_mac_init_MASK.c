
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct mac_desc_ctx {scalar_t__ len; int dg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct mac_desc_ctx* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_1)
{
 struct mac_desc_ctx *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->dg, 0, VAR_0);
 VAR_2->len = 0;

 return 0;
}
