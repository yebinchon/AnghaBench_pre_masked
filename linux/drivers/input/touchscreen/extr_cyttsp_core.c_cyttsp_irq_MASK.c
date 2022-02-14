
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cyttsp_xydata {int dummy; } ;
struct TYPE_2__ {int tt_mode; } ;
struct cyttsp {scalar_t__ state; int dev; TYPE_1__ xy_data; int bl_ready; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cyttsp*) ;
 int FUNC_3 (struct cyttsp*) ;
 int FUNC_4 (struct cyttsp*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct cyttsp*,int ,int,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_4, void *VAR_5)
{
 struct cyttsp *VAR_6 = VAR_5;
 int VAR_7;

 if (FUNC_7(VAR_6->state == VAR_0)) {
  FUNC_1(&VAR_6->bl_ready);
  goto out;
 }


 VAR_7 = FUNC_6(VAR_6, VAR_2,
     sizeof(struct cyttsp_xydata), &VAR_6->xy_data);
 if (VAR_7)
  goto out;


 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  goto out;

 if (FUNC_7(VAR_6->state == VAR_1))
  goto out;

 if (FUNC_0(VAR_6->xy_data.tt_mode)) {




  VAR_7 = FUNC_2(VAR_6);
  if (VAR_7) {
   FUNC_5(VAR_6->dev,
    "Could not return to operational mode, err: %d\n",
    VAR_7);
   VAR_6->state = VAR_1;
  }
 } else {
  FUNC_4(VAR_6);
 }

out:
 return VAR_3;
}
