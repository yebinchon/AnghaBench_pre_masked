
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct cpuinfo_x86 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpuinfo_x86*,int,struct device*) ;
 scalar_t__ FUNC_1 (struct cpuinfo_x86*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*,int) ;
 int VAR_1 ;
 int FUNC_5 (int,int ,int*,int*) ;

__attribute__((used)) static int FUNC_6(struct cpuinfo_x86 *VAR_2, u32 VAR_3, struct device *VAR_4)
{
 int VAR_5;
 u32 VAR_6, VAR_7;
 u32 VAR_8;





 VAR_5 = FUNC_5(VAR_3, VAR_0, &VAR_6, &VAR_7);
 if (VAR_5) {
  if (FUNC_1(VAR_2))
   FUNC_4(VAR_4, "Unable to read TjMax from CPU %u\n", VAR_3);
 } else {
  VAR_8 = (VAR_6 >> 16) & 0xff;




  if (VAR_8) {
   FUNC_2(VAR_4, "TjMax is %d degrees C\n", VAR_8);
   return VAR_8 * 1000;
  }
 }

 if (VAR_1) {
  FUNC_3(VAR_4, "TjMax forced to %d degrees C by user\n",
      VAR_1);
  return VAR_1 * 1000;
 }





 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
