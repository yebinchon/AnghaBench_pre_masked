
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum spu2_hash_mode { ____Placeholder_spu2_hash_mode } spu2_hash_mode ;
typedef enum hash_mode { ____Placeholder_hash_mode } hash_mode ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(enum hash_mode VAR_6,
    enum spu2_hash_mode *VAR_7)
{
 switch (VAR_6) {
 case 128:
  *VAR_7 = VAR_5;
  break;
 case 131:
  *VAR_7 = VAR_2;
  break;
 case 129:
  *VAR_7 = VAR_4;
  break;
 case 132:
  *VAR_7 = VAR_1;
  break;
 case 130:
  *VAR_7 = VAR_3;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
