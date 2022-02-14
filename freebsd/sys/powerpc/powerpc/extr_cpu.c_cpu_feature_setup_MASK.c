
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct cputab {int version; int features2; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cputab const* VAR_2 ;
 int FUNC_0 () ;
 struct cputab* VAR_3 ;

void
FUNC_1()
{
 u_int VAR_4;
 uint16_t VAR_5;
 const struct cputab *VAR_6;

 VAR_4 = FUNC_0();
 VAR_5 = VAR_4 >> 16;
 for (VAR_6 = VAR_3; VAR_6->version != 0; VAR_6++) {
  if (VAR_6->version == VAR_5)
   break;
 }

 VAR_2 = VAR_6;
 VAR_0 |= VAR_6->features;
 VAR_1 |= VAR_6->features2;
}
