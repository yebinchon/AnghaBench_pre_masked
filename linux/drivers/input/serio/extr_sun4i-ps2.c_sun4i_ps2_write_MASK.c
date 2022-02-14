
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_ps2data {scalar_t__ reg_base; } ;
struct serio {struct sun4i_ps2data* port_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct serio *VAR_5, unsigned char VAR_6)
{
 unsigned long VAR_7 = VAR_4 + FUNC_0(10000);
 struct sun4i_ps2data *VAR_8 = VAR_5->port_data;

 do {
  if (FUNC_1(VAR_8->reg_base + VAR_2) & VAR_0) {
   FUNC_3(VAR_6, VAR_8->reg_base + VAR_1);
   return 0;
  }
 } while (FUNC_2(VAR_4, VAR_7));

 return VAR_3;
}
