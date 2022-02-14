
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum spu_cipher_type { ____Placeholder_spu_cipher_type } spu_cipher_type ;
typedef enum spu2_hash_type { ____Placeholder_spu2_hash_type } spu2_hash_type ;
typedef enum spu2_hash_mode { ____Placeholder_spu2_hash_mode } spu2_hash_mode ;
typedef enum hash_type { ____Placeholder_hash_type } hash_type ;
typedef enum hash_mode { ____Placeholder_hash_mode } hash_mode ;
typedef enum hash_alg { ____Placeholder_hash_alg } hash_alg ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int,int*) ;

__attribute__((used)) static int
FUNC_2(enum hash_alg VAR_15, enum hash_mode VAR_16,
  enum hash_type VAR_17, enum spu_cipher_type VAR_18,
  enum spu2_hash_type *VAR_19, enum spu2_hash_mode *VAR_20)
{
 int VAR_21;

 VAR_21 = FUNC_1(VAR_16, VAR_20);
 if (VAR_21) {
  FUNC_0("Invalid hash mode %d\n", VAR_16);
  return VAR_21;
 }

 switch (VAR_15) {
 case 137:
  *VAR_19 = VAR_5;
  break;
 case 138:
  *VAR_19 = VAR_4;
  break;
 case 136:
  *VAR_19 = VAR_6;
  break;
 case 135:
  *VAR_19 = VAR_7;
  break;
 case 134:
  *VAR_19 = VAR_8;
  break;
 case 133:
  *VAR_19 = VAR_9;
  break;
 case 128:
  *VAR_19 = VAR_14;
  break;
 case 140:
  switch (VAR_18) {
  case 143:
   *VAR_19 = VAR_1;
   break;
  case 142:
   *VAR_19 = VAR_2;
   break;
  case 141:
   *VAR_19 = VAR_3;
   break;
  default:
   VAR_21 = -VAR_0;
  }
  break;
 case 132:
  *VAR_19 = VAR_10;
  break;
 case 131:
  *VAR_19 = VAR_11;
  break;
 case 130:
  *VAR_19 = VAR_12;
  break;
 case 129:
  *VAR_19 = VAR_13;
  break;
 case 139:
 default:
  VAR_21 = -VAR_0;
  break;
 }

 if (VAR_21)
  FUNC_0("Invalid hash alg %d or type %d\n",
    VAR_15, VAR_17);
 return VAR_21;
}
