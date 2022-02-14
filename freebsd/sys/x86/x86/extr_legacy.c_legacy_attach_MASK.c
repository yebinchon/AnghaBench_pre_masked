
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;


 int * FUNC_0 (int *,int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_0)
{
 device_t VAR_1;

 FUNC_6(VAR_0);






 FUNC_2(VAR_0);
 FUNC_1(VAR_0);




 if (!FUNC_4(FUNC_3("isa"), 0)) {
  VAR_1 = FUNC_0(VAR_0, 0, "isa", 0);
  if (VAR_1 == ((void*)0))
   FUNC_7("legacy_attach isa");
  FUNC_5(VAR_1);
 }

 return 0;
}
