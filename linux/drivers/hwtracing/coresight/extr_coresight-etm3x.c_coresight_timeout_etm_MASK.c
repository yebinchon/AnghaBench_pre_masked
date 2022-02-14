
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etm_drvdata {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct etm_drvdata*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct etm_drvdata *VAR_2, u32 VAR_3,
      int VAR_4, int VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 for (VAR_6 = VAR_1; VAR_6 > 0; VAR_6--) {
  VAR_7 = FUNC_1(VAR_2, VAR_3);

  if (VAR_5) {
   if (VAR_7 & FUNC_0(VAR_4))
    return 0;

  } else {
   if (!(VAR_7 & FUNC_0(VAR_4)))
    return 0;
  }






  if (VAR_6 - 1)
   FUNC_2(1);
 }

 return -VAR_0;
}
