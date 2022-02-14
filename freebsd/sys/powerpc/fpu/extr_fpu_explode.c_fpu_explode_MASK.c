
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int u_int ;
struct fpn {int fp_sign; int* fp_mant; int fp_class; scalar_t__ fp_sticky; } ;
struct fpemu {int fe_cx; TYPE_2__* fe_fpstate; } ;
struct TYPE_4__ {TYPE_1__* fpr; } ;
struct TYPE_3__ {int fpr; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct fpn*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_2 (struct fpn*,int,int) ;
 int FUNC_3 (struct fpn*,int) ;
 int FUNC_4 (struct fpn*,int) ;
 int FUNC_5 (struct fpn*,int ) ;
 int FUNC_6 (char*,...) ;

void
FUNC_7(struct fpemu *VAR_5, struct fpn *VAR_6, int VAR_7, int VAR_8)
{
 u_int VAR_9, *VAR_10;
 u_int64_t VAR_11, *VAR_12;

 VAR_12 = (u_int64_t *)&VAR_5->fe_fpstate->fpr[VAR_8].fpr;
 VAR_11 = VAR_12[0];
 VAR_10 = (u_int *)&VAR_5->fe_fpstate->fpr[VAR_8].fpr;
 VAR_9 = VAR_10[0];
 VAR_6->fp_sign = VAR_9 >> 31;
 VAR_6->fp_sticky = 0;
 switch (VAR_7) {

 case 129:
  VAR_9 = FUNC_5(VAR_6, VAR_11);
  break;

 case 130:
  VAR_9 = FUNC_3(VAR_6, VAR_10[1]);
  break;

 case 128:
  VAR_9 = FUNC_4(VAR_6, VAR_9);
  break;

 case 131:
  VAR_9 = FUNC_2(VAR_6, VAR_9, VAR_10[1]);
  break;

 default:
  FUNC_6("fpu_explode");
  FUNC_6("fpu_explode: invalid type %d", VAR_7);
 }

 if (VAR_9 == VAR_0 && (VAR_6->fp_mant[0] & VAR_4) == 0) {







  VAR_6->fp_mant[0] |= VAR_4;
  VAR_5->fe_cx = VAR_3;
  VAR_9 = VAR_1;
 }
 VAR_6->fp_class = VAR_9;
 FUNC_0(VAR_2, ("fpu_explode: %%%c%d => ", (VAR_7 == 129) ? 'x' :
  ((VAR_7 == 130) ? 'i' :
   ((VAR_7 == 128) ? 's' :
    ((VAR_7 == 131) ? 'd' : '?'))),
  VAR_8));
 FUNC_1(VAR_2, VAR_6);
 FUNC_0(VAR_2, ("\n"));
}
