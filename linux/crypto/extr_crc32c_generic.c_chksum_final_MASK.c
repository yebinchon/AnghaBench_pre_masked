
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct chksum_desc_ctx {int crc; } ;


 int FUNC_0 (int ,int *) ;
 struct chksum_desc_ctx* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_0, u8 *VAR_1)
{
 struct chksum_desc_ctx *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(~VAR_2->crc, VAR_1);
 return 0;
}
