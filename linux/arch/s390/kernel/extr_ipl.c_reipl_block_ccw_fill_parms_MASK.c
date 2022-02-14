
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int vm_flags; int vm_parm; int vm_parm_len; int flags; int loadparm; } ;
struct ipl_parameter_block {TYPE_2__ ccw; } ;
struct TYPE_5__ {int vm_flags; int * vm_parm; int vm_parm_len; } ;
struct TYPE_8__ {TYPE_1__ ccw; } ;
struct TYPE_7__ {int loadparm; scalar_t__ is_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int,int ) ;
 TYPE_3__ VAR_7 ;

__attribute__((used)) static void FUNC_2(struct ipl_parameter_block *VAR_8)
{


 if (VAR_7.is_valid)
  FUNC_0(VAR_8->ccw.loadparm, &VAR_7.loadparm, VAR_3);
 else

  FUNC_1(VAR_8->ccw.loadparm, 0x40, VAR_3);
 VAR_8->ccw.flags = VAR_2;


 if (VAR_4 && VAR_6 &&
     (VAR_5.ccw.vm_flags & VAR_1)) {

  VAR_8->ccw.vm_flags |= VAR_1;
  VAR_8->ccw.vm_parm_len = VAR_5.ccw.vm_parm_len;
  FUNC_0(VAR_8->ccw.vm_parm,
         VAR_5.ccw.vm_parm, VAR_0);
 }
}
