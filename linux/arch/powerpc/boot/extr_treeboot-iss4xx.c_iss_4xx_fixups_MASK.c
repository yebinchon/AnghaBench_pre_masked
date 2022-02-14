
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int reg ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (void*,char*,scalar_t__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 void *VAR_1;
 u32 VAR_2[3];

 VAR_1 = FUNC_1("/memory");
 if (!VAR_1)
  FUNC_0("Can't find memory node\n");

 FUNC_2(VAR_1, "reg", VAR_2, sizeof(VAR_2));
 if (VAR_2[2])

  VAR_0 = VAR_2[1];
 else

  FUNC_3();
}
