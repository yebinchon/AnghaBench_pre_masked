
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct camellia_ctx {unsigned int key_length; int key_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const*,int ) ;
 int FUNC_1 (unsigned char const*,int ) ;
 int FUNC_2 (unsigned char const*,int ) ;

int FUNC_3(struct camellia_ctx *VAR_2, const unsigned char *VAR_3,
        unsigned int VAR_4, u32 *VAR_5)
{
 if (VAR_4 != 16 && VAR_4 != 24 && VAR_4 != 32) {
  *VAR_5 |= VAR_0;
  return -VAR_1;
 }

 VAR_2->key_length = VAR_4;

 switch (VAR_4) {
 case 16:
  FUNC_0(VAR_3, VAR_2->key_table);
  break;
 case 24:
  FUNC_1(VAR_3, VAR_2->key_table);
  break;
 case 32:
  FUNC_2(VAR_3, VAR_2->key_table);
  break;
 }

 return 0;
}
