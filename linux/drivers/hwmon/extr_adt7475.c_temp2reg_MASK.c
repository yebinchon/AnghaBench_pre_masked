
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct adt7475_data {int config5; } ;


 int VAR_0 ;
 long FUNC_0 (long,int,int) ;

__attribute__((used)) static inline u16 FUNC_1(struct adt7475_data *VAR_1, long VAR_2)
{
 u16 VAR_3;

 if (!(VAR_1->config5 & VAR_0)) {
  VAR_2 = FUNC_0(VAR_2, -64000, 191000);
  VAR_3 = (VAR_2 + 64500) / 1000;
 } else {
  VAR_2 = FUNC_0(VAR_2, -128000, 127000);
  if (VAR_2 < -500)
   VAR_3 = (256500 + VAR_2) / 1000;
  else
   VAR_3 = (VAR_2 + 500) / 1000;
 }

 return VAR_3 << 2;
}
