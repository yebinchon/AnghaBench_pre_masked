
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int core_id; int proc_id; } ;






 int VAR_0 ;
 TYPE_1__ FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int VAR_1, int VAR_2)
{
 int VAR_3;

 switch (VAR_2) {
 case 128:
  VAR_3 = 0;
  break;
 case 130:
  VAR_3 = FUNC_1(VAR_1);
  break;
 case 131:
  VAR_3 = FUNC_0(VAR_1).core_id;
  break;
 case 129:
  VAR_3 = FUNC_0(VAR_1).proc_id;
  break;
 default:
  VAR_3 = -VAR_0;
 }
 return VAR_3;
}
