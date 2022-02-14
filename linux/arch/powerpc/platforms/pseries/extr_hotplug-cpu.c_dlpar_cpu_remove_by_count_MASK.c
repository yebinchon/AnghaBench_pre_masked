
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (int,int,int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(u32 VAR_2)
{
 u32 *VAR_3;
 int VAR_4;
 int VAR_5 = 0;
 int VAR_6, VAR_7;

 FUNC_5("Attempting to hot-remove %d CPUs\n", VAR_2);

 VAR_3 = FUNC_3(VAR_2, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (VAR_4 <= VAR_2) {
  FUNC_4(VAR_3);
  return -VAR_0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_7 = FUNC_1(VAR_3[VAR_6]);
  if (VAR_7)
   break;

  VAR_5++;
 }

 if (VAR_5 != VAR_2) {
  FUNC_6("CPU hot-remove failed, adding back removed CPUs\n");

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   FUNC_0(VAR_3[VAR_6]);

  VAR_7 = -VAR_0;
 } else {
  VAR_7 = 0;
 }

 FUNC_4(VAR_3);
 return VAR_7;
}
