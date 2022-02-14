
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct chksum_desc_ctx {int crc; } ;
typedef int __u16 ;


 struct chksum_desc_ctx* FUNC_0 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_1(struct shash_desc *VAR_0, u8 *VAR_1)
{
 struct chksum_desc_ctx *VAR_2 = FUNC_0(VAR_0);

 *(__u16 *)VAR_1 = VAR_2->crc;
 return 0;
}
