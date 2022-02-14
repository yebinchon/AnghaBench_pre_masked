
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {scalar_t__ icode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct hfi1_devdata*,char*,...) ;
 int FUNC_1 (struct hfi1_devdata*,char*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct hfi1_devdata*,int ) ;
 int FUNC_3 (struct hfi1_devdata*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hfi1_devdata *VAR_10)
{
 FUNC_1(VAR_10, "Entering loopback mode\n");


 FUNC_3(VAR_10, VAR_0,
    (FUNC_2(VAR_10, VAR_0) | VAR_1));







 if ((VAR_10->icode == VAR_4) &&
     (VAR_8 == VAR_7 || VAR_8 == VAR_6 ||
      VAR_8 == VAR_5)) {
  VAR_8 = VAR_6;
  VAR_9 = 1;
  return 0;
 }




 if (VAR_8 == VAR_7)
  return 0;


 if (VAR_8 == VAR_6) {
  VAR_9 = 1;


  if (VAR_10->icode == VAR_3) {
   FUNC_0(VAR_10,
       "LCB loopback not supported in emulation\n");
   return -VAR_2;
  }
  return 0;
 }


 if (VAR_8 == VAR_5)
  return 0;

 FUNC_0(VAR_10, "Invalid loopback mode %d\n", VAR_8);
 return -VAR_2;
}
