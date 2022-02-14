
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sharpsl_param_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ comadj_keyword; int comadj; scalar_t__ phad_keyword; int phadadj; scalar_t__ uuid_keyword; int* uuid; scalar_t__ touch_keyword; int touch_xp; scalar_t__ adadj_keyword; int adadj; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_6 ;

void FUNC_2(void)
{
 FUNC_0(&VAR_6, FUNC_1(VAR_2), sizeof(struct sharpsl_param_info));

 if (VAR_6.comadj_keyword != VAR_1)
  VAR_6.comadj=-1;

 if (VAR_6.phad_keyword != VAR_3)
  VAR_6.phadadj=-1;

 if (VAR_6.uuid_keyword != VAR_5)
  VAR_6.uuid[0]=-1;

 if (VAR_6.touch_keyword != VAR_4)
  VAR_6.touch_xp=-1;

 if (VAR_6.adadj_keyword != VAR_0)
  VAR_6.adadj=-1;
}
