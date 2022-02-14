
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum spu_cipher_type { ____Placeholder_spu_cipher_type } spu_cipher_type ;
typedef enum spu_cipher_mode { ____Placeholder_spu_cipher_mode } spu_cipher_mode ;
typedef enum spu_cipher_alg { ____Placeholder_spu_cipher_alg } spu_cipher_alg ;
typedef enum spu2_cipher_type { ____Placeholder_spu2_cipher_type } spu2_cipher_type ;
typedef enum spu2_cipher_mode { ____Placeholder_spu2_cipher_mode } spu2_cipher_mode ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int,int*) ;

__attribute__((used)) static int FUNC_2(enum spu_cipher_alg VAR_7,
        enum spu_cipher_mode VAR_8,
        enum spu_cipher_type VAR_9,
        enum spu2_cipher_type *VAR_10,
        enum spu2_cipher_mode *VAR_11)
{
 int VAR_12;

 VAR_12 = FUNC_1(VAR_8, VAR_11);
 if (VAR_12) {
  FUNC_0("Invalid cipher mode %d\n", VAR_8);
  return VAR_12;
 }

 switch (VAR_7) {
 case 132:
  *VAR_10 = VAR_6;
  break;
 case 131:

  VAR_12 = -VAR_0;
  *VAR_10 = VAR_6;
  break;
 case 134:
  *VAR_10 = VAR_5;
  break;
 case 136:
  *VAR_10 = VAR_1;
  break;
 case 135:
  switch (VAR_9) {
  case 130:
   *VAR_10 = VAR_2;
   break;
  case 129:
   *VAR_10 = VAR_3;
   break;
  case 128:
   *VAR_10 = VAR_4;
   break;
  default:
   VAR_12 = -VAR_0;
  }
  break;
 case 133:
 default:
  VAR_12 = -VAR_0;
  break;
 }

 if (VAR_12)
  FUNC_0("Invalid cipher alg %d or type %d\n",
    VAR_7, VAR_9);
 return VAR_12;
}
