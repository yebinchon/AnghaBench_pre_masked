
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (struct device*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_4, int VAR_5)
{
 if (VAR_5 >= VAR_3 &&
     VAR_5 <= VAR_2) {
  FUNC_0(VAR_4, "PECI error code - err 0x%04x.\n",
   VAR_5);

  return -VAR_0;
 }

 switch (VAR_5) {
 case 128:
  FUNC_0(VAR_4, "PECI transaction failed - err 0x%04x.\n",
   VAR_5);
  return -VAR_0;
 case 131:
  FUNC_0(VAR_4, "Polling disabled - err 0x%04x.\n", VAR_5);
  return -VAR_1;
 case 130:
  FUNC_0(VAR_4, "First poll not completed on startup - err 0x%04x.\n",
   VAR_5);
  return -VAR_0;
 case 129:
  FUNC_0(VAR_4, "Resource is disabled - err 0x%04x.\n", VAR_5);
  return -VAR_1;
 case 132:
  FUNC_0(VAR_4, "No alert active - err 0x%04x.\n", VAR_5);
  return -VAR_1;
 default:
  return 0;
 }
}
