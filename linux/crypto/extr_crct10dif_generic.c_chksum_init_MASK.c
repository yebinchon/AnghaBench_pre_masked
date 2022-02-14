
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct chksum_desc_ctx {scalar_t__ crc; } ;


 struct chksum_desc_ctx* FUNC_0 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_1(struct shash_desc *VAR_0)
{
 struct chksum_desc_ctx *VAR_1 = FUNC_0(VAR_0);

 VAR_1->crc = 0;

 return 0;
}
