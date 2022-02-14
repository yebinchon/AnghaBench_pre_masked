
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pm_message_t ;
typedef int ktime_t ;
struct TYPE_2__ {int failed_prepare; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 TYPE_1__ VAR_1 ;

int FUNC_5(pm_message_t VAR_2)
{
 ktime_t VAR_3 = FUNC_4();
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4) {
  VAR_1.failed_prepare++;
  FUNC_1(VAR_0);
 } else
  VAR_4 = FUNC_3(VAR_2);
 FUNC_2(VAR_3, VAR_2, VAR_4, "start");
 return VAR_4;
}
