
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hfi1_devdata*) ;
 int FUNC_1 (struct hfi1_devdata*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct hfi1_devdata *VAR_8)
{
 unsigned long VAR_9;

 FUNC_4(&VAR_5);


 VAR_9 = VAR_7 + FUNC_2(40000);
 while (VAR_6 == VAR_3) {




  if (FUNC_6(VAR_7, VAR_9)) {

   FUNC_1(VAR_8, "Timeout waiting for firmware try");
   VAR_6 = VAR_2;
   VAR_4 = -VAR_0;
   break;
  }
  FUNC_5(&VAR_5);
  FUNC_3(20);
  FUNC_4(&VAR_5);
 }



 if (VAR_6 == VAR_1)
  FUNC_0(VAR_8);

 FUNC_5(&VAR_5);
 return VAR_4;
}
