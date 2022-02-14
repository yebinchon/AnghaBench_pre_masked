
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;


 int VAR_0 ;
 long FUNC_0 (unsigned long) ;

 int * VAR_1 ;
 unsigned long FUNC_1 (struct device*,int ) ;
 long FUNC_2 (struct device*,int ) ;
 int * VAR_2 ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, u32 VAR_4, int VAR_5,
         long *VAR_6)
{
 unsigned long VAR_7;
 long VAR_8;

 switch (VAR_4) {
 case 128:
  (void)FUNC_3(VAR_3);
  VAR_7 = FUNC_1(VAR_3, VAR_1[VAR_5]);
  VAR_8 = FUNC_2(VAR_3, VAR_2[VAR_5]);
  *VAR_6 = FUNC_0(VAR_7 * VAR_8);
  return 0;
 default:
  return -VAR_0;
 }
}
