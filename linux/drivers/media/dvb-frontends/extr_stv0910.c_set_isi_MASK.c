
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv {scalar_t__ regoff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int) ;
 int VAR_6 ;
 int FUNC_1 (struct stv*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct stv *VAR_7, u32 VAR_8)
{
 if (VAR_8 == VAR_3)
  return;
 if (VAR_8 == 0x80000000) {
  FUNC_0(VAR_2, 1);
  FUNC_0(VAR_6, 1);
 } else {
  FUNC_0(VAR_1, 1);
  FUNC_1(VAR_7, VAR_5 + VAR_7->regoff,
     VAR_8 & 0xff);
  FUNC_1(VAR_7, VAR_4 + VAR_7->regoff, 0xff);
 }
 FUNC_0(VAR_0, 1);
 FUNC_0(VAR_0, 0);
}
