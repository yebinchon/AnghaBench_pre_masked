
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv {int cur_scrambling_code; scalar_t__ regoff; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct stv*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct stv *VAR_3, u32 VAR_4)
{
 if (VAR_4 == VAR_3->cur_scrambling_code)
  return;


 FUNC_0(VAR_3, VAR_0 + VAR_3->regoff,
    VAR_4 & 0xff);
 FUNC_0(VAR_3, VAR_1 + VAR_3->regoff,
    (VAR_4 >> 8) & 0xff);
 FUNC_0(VAR_3, VAR_2 + VAR_3->regoff,
    0x04 | ((VAR_4 >> 16) & 0x03));
 VAR_3->cur_scrambling_code = VAR_4;
}
