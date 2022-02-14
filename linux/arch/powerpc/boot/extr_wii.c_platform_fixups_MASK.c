
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int reg ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (void*,char*,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (void*,char*,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_6(void)
{
 void *VAR_2;
 u32 VAR_3[4];
 u32 VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_2 = FUNC_1("/memory");
 if (!VAR_2)
  FUNC_0("Can't find memory node\n");


 VAR_5 = FUNC_2(VAR_2, "reg", VAR_3, sizeof(VAR_3));
 if (VAR_5 != sizeof(VAR_3)) {

  goto out;
 }


 VAR_6 = FUNC_3(&VAR_4);
 if (VAR_6) {

  VAR_4 = VAR_1 - VAR_0;
 }

 if (VAR_4 > VAR_3[2] && VAR_4 < VAR_3[2] + VAR_3[3]) {
  VAR_3[3] = VAR_4 - VAR_3[2];
  FUNC_4("top of MEM2 @ %08X\n", VAR_3[2] + VAR_3[3]);
  FUNC_5(VAR_2, "reg", VAR_3, sizeof(VAR_3));
 }

out:
 return;
}
