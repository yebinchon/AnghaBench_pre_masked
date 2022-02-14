
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_bat {int batl; int batu; } ;


 struct ppc_bat** VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_3;

 if (FUNC_0(VAR_1)) {
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
   struct ppc_bat *VAR_4 = VAR_0[VAR_3];

   if (!(VAR_4[0].batl & 0x40))
    return VAR_3;
  }
 } else {
  int VAR_5 = FUNC_1(VAR_2) ? 8 : 4;

  for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
   struct ppc_bat *VAR_6 = VAR_0[VAR_3];

   if (!(VAR_6[1].batu & 3))
    return VAR_3;
  }
 }
 return -1;
}
