
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct shash_desc {int dummy; } ;
struct poly1305_desc_ctx {int buflen; int* buf; int* s; int h; int sset; } ;
typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int ,scalar_t__) ;
 int FUNC_2 (struct poly1305_desc_ctx*,int*,scalar_t__,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int,int *) ;
 struct poly1305_desc_ctx* FUNC_5 (struct shash_desc*) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct shash_desc *VAR_2, u8 *VAR_3)
{
 struct poly1305_desc_ctx *VAR_4 = FUNC_5(VAR_2);
 __le32 VAR_5[4];
 u64 VAR_6 = 0;

 if (FUNC_6(!VAR_4->sset))
  return -VAR_0;

 if (FUNC_6(VAR_4->buflen)) {
  VAR_4->buf[VAR_4->buflen++] = 1;
  FUNC_1(VAR_4->buf + VAR_4->buflen, 0,
         VAR_1 - VAR_4->buflen);
  FUNC_2(VAR_4, VAR_4->buf, VAR_1, 0);
 }

 FUNC_3(&VAR_4->h, VAR_5);


 VAR_6 = (VAR_6 >> 32) + FUNC_0(VAR_5[0]) + VAR_4->s[0];
 FUNC_4(VAR_6, VAR_3 + 0);
 VAR_6 = (VAR_6 >> 32) + FUNC_0(VAR_5[1]) + VAR_4->s[1];
 FUNC_4(VAR_6, VAR_3 + 4);
 VAR_6 = (VAR_6 >> 32) + FUNC_0(VAR_5[2]) + VAR_4->s[2];
 FUNC_4(VAR_6, VAR_3 + 8);
 VAR_6 = (VAR_6 >> 32) + FUNC_0(VAR_5[3]) + VAR_4->s[3];
 FUNC_4(VAR_6, VAR_3 + 12);

 return 0;
}
