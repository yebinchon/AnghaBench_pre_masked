
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgdt3306a_state {int dummy; } ;
typedef enum lgdt3306a_modulation { ____Placeholder_lgdt3306a_modulation } lgdt3306a_modulation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct lgdt3306a_state*,int,int*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static enum lgdt3306a_modulation
FUNC_3(struct lgdt3306a_state *VAR_4)
{
 u8 VAR_5 = 0;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, 0x0081, &VAR_5);
 if (VAR_6)
  goto err;

 if (VAR_5 & 0x80) {
  FUNC_0("VSB\n");
  return VAR_3;
 }
 if (VAR_5 & 0x08) {
  VAR_6 = FUNC_1(VAR_4, 0x00a6, &VAR_5);
  if (VAR_6)
   goto err;
  VAR_5 = VAR_5 >> 2;
  if (VAR_5 & 0x01) {
   FUNC_0("QAM256\n");
   return VAR_0;
  }
  FUNC_0("QAM64\n");
  return VAR_1;
 }
err:
 FUNC_2("UNKNOWN\n");
 return VAR_2;
}
