
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_int8_t ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(u_int8_t *VAR_0, int VAR_1, int VAR_2)
{

    static unsigned VAR_3[] =
  { 0xb0, 0x100, 0xe8, 0x100, 0x100, 0x30, 0xe4, 0x200 };
    int VAR_4, VAR_5, VAR_6;
    for (VAR_4 = 0x60; VAR_4 < 0x180; VAR_4++) {
 if (VAR_0[VAR_4] != VAR_3[0])
     continue;
 for (VAR_5=0;; VAR_5++) {
     if (VAR_3[VAR_5] == 0x200) {
  VAR_6 = VAR_0[VAR_4+1];
  if (!VAR_2)
      VAR_0[VAR_4+1] = VAR_6 = VAR_1;
  else
      FUNC_0("  bell=%c (0x%x)",
   (VAR_6 >= ' ' && VAR_6 < 0x7f) ? VAR_6 : ' ', VAR_6);
  return VAR_6;
     }
     if (VAR_3[VAR_5] != 0x100 && VAR_3[VAR_5] != VAR_0[VAR_4+VAR_5])
  break;
 }
    }
    FUNC_1("bell not found");
    return -1;
}
