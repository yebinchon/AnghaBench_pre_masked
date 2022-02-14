
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct caam_drv_private {int era; TYPE_3__* ctrl; } ;
struct TYPE_10__ {int cra_driver_name; } ;
struct TYPE_11__ {TYPE_4__ base; } ;
struct TYPE_12__ {int registered; TYPE_5__ akcipher; } ;
struct TYPE_8__ {int pkha; } ;
struct TYPE_7__ {int cha_num_ls; } ;
struct TYPE_9__ {TYPE_2__ vreg; TYPE_1__ perfmon; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__ VAR_7 ;
 int FUNC_0 (TYPE_5__*) ;
 struct caam_drv_private* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int ) ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int *) ;
 int VAR_9 ;

int FUNC_7(struct device *VAR_10)
{
 struct caam_drv_private *VAR_11 = FUNC_1(VAR_10);
 u32 VAR_12;
 int VAR_13;
 VAR_8 = 0;


 if (VAR_11->era < 10)
  VAR_12 = (FUNC_6(&VAR_11->ctrl->perfmon.cha_num_ls) &
      VAR_1) >> VAR_2;
 else
  VAR_12 = FUNC_6(&VAR_11->ctrl->vreg.pkha) & VAR_3;


 if (!VAR_12)
  return 0;


 VAR_9 = FUNC_5(VAR_0 - 1, VAR_5 |
         VAR_6);
 if (!VAR_9)
  return -VAR_4;

 VAR_13 = FUNC_0(&VAR_7.akcipher);

 if (VAR_13) {
  FUNC_4(VAR_9);
  FUNC_3(VAR_10, "%s alg registration failed\n",
    VAR_7.akcipher.base.cra_driver_name);
 } else {
  VAR_8 = 1;
  VAR_7.registered = 1;
  FUNC_2(VAR_10, "caam pkc algorithms registered in /proc/crypto\n");
 }

 return VAR_13;
}
