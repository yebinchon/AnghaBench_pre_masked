
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t u_int ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (int *,size_t*) ;
 int ** VAR_3 ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 size_t VAR_4 ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5)
{
 const uint32_t *VAR_6;
 size_t VAR_7;
 u_int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_5);

 if (VAR_8 >= VAR_1 || VAR_8 > VAR_4)
  return (VAR_0);
 FUNC_0(VAR_3[VAR_8] == ((void*)0), ("Already have cpu %u", VAR_8));

 VAR_6 = FUNC_1(VAR_5, &VAR_7);
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 if (VAR_2) {
  FUNC_3(VAR_5, "register <");
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   FUNC_4("%s%x", (VAR_9 == 0) ? "" : " ", VAR_6[VAR_9]);
  FUNC_4(">\n");
 }


 VAR_3[VAR_8] = VAR_5;

 return (0);
}
