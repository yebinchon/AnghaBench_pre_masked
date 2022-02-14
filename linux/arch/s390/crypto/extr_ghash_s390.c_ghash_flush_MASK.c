
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ghash_desc_ctx {int bytes; int * buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ghash_desc_ctx*,int *,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ghash_desc_ctx *VAR_2)
{
 u8 *VAR_3 = VAR_2->buffer;

 if (VAR_2->bytes) {
  u8 *VAR_4 = VAR_3 + (VAR_1 - VAR_2->bytes);

  FUNC_1(VAR_4, 0, VAR_2->bytes);
  FUNC_0(VAR_0, VAR_2, VAR_3, VAR_1);
  VAR_2->bytes = 0;
 }

 return 0;
}
