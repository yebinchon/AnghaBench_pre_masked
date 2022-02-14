
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int name; } ;
struct wf_fcu_fan {int min; int max; TYPE_1__ ctrl; } ;
struct mpu_data {int processor_part_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int**,int ,int) ;
 int FUNC_3 (int,int) ;
 struct mpu_data* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct wf_fcu_fan *VAR_2)
{
 const struct mpu_data *VAR_3 = FUNC_4(0);
 u16 VAR_4 = 0, VAR_5 = 0xffff;
 u16 VAR_6[4];


 if (VAR_3) {
  FUNC_2(&VAR_6, VAR_3->processor_part_num, 8);
  if (VAR_6[0] != 0xffff && VAR_6[1] != 0xffff) {
   VAR_4 = FUNC_1(VAR_4, VAR_6[0]);
   VAR_5 = FUNC_3(VAR_5, VAR_6[1]);
  }
  if (VAR_6[2] != 0xffff && VAR_6[3] != 0xffff) {
   VAR_4 = FUNC_1(VAR_4, VAR_6[2]);
   VAR_5 = FUNC_3(VAR_5, VAR_6[3]);
  }
 }





 if (VAR_4 == VAR_5 || VAR_4 == 0 || VAR_5 == 0xffff) {
  VAR_4 = VAR_1;
  VAR_5 = VAR_0;
 }

 VAR_2->min = VAR_4;
 VAR_2->max = VAR_5;

 FUNC_0("wf_fcu: pump min/max for %s set to: [%d..%d] RPM\n",
     VAR_2->ctrl.name, VAR_4, VAR_5);
}
