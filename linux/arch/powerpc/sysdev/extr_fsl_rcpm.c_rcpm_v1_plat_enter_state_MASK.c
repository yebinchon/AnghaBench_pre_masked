
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int powmgtcsr; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,int,int) ;

__attribute__((used)) static int FUNC_5(int VAR_4)
{
 u32 *VAR_5 = &VAR_3->powmgtcsr;
 int VAR_6 = 0;
 int VAR_7;

 switch (VAR_4) {
 case 128:
  FUNC_3(VAR_5, VAR_2);


  VAR_7 = FUNC_4(
    !(FUNC_0(VAR_5) & VAR_2), 10000, 10);
  if (!VAR_7) {
   FUNC_1("timeout waiting for SLP bit to be cleared\n");
   VAR_6 = -VAR_1;
  }
  break;
 default:
  FUNC_2("Unknown platform PM state (%d)", VAR_4);
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
