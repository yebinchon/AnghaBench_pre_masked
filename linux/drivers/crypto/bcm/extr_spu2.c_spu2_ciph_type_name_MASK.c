
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum spu2_cipher_type { ____Placeholder_spu2_cipher_type } spu2_cipher_type ;


 int VAR_0 ;
 char** VAR_1 ;

__attribute__((used)) static char *FUNC_0(enum spu2_cipher_type VAR_2)
{
 if (VAR_2 >= VAR_0)
  return "Reserved";
 return VAR_1[VAR_2];
}
