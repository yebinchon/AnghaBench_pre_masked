
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vm_parm_len; int vm_flags; int vm_parm; } ;
struct ipl_parameter_block {TYPE_1__ ccw; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (int ,char const*,int) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct ipl_parameter_block *VAR_3,
       size_t VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 int VAR_7, VAR_8;


 VAR_8 = VAR_6;
 if ((VAR_6 > 0) && (VAR_5[VAR_6 - 1] == '\n'))
  VAR_8--;

 if (VAR_8 > VAR_4)
  return -VAR_1;


 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  if (!(FUNC_1(VAR_5[VAR_7]) || FUNC_2(VAR_5[VAR_7]) || FUNC_3(VAR_5[VAR_7])))
   return -VAR_1;

 FUNC_5(VAR_3->ccw.vm_parm, 0, VAR_0);
 VAR_3->ccw.vm_parm_len = VAR_8;
 if (VAR_8 > 0) {
  VAR_3->ccw.vm_flags |= VAR_2;
  FUNC_4(VAR_3->ccw.vm_parm, VAR_5, VAR_8);
  FUNC_0(VAR_3->ccw.vm_parm, VAR_8);
 } else {
  VAR_3->ccw.vm_flags &= ~VAR_2;
 }

 return VAR_6;
}
