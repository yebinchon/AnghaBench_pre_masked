
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int tfm; } ;
struct chksum_desc_ctx {int crc; } ;
struct chksum_ctx {int key; } ;


 struct chksum_ctx* FUNC_0 (int ) ;
 struct chksum_desc_ctx* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_0)
{
 struct chksum_ctx *VAR_1 = FUNC_0(VAR_0->tfm);
 struct chksum_desc_ctx *VAR_2 = FUNC_1(VAR_0);

 VAR_2->crc = VAR_1->key;

 return 0;
}
