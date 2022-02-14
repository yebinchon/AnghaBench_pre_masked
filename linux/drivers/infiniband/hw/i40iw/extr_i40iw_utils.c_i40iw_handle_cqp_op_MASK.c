
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_sc_dev {int dummy; } ;
struct i40iw_device {int cqp; scalar_t__ reset; struct i40iw_sc_dev sc_dev; } ;
struct cqp_commands_info {int cqp_cmd; } ;
struct i40iw_cqp_request {scalar_t__ waiting; struct cqp_commands_info info; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i40iw_cqp_request*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct i40iw_sc_dev*,struct cqp_commands_info*) ;
 int FUNC_3 (struct i40iw_device*,struct i40iw_cqp_request*) ;

enum i40iw_status_code FUNC_4(struct i40iw_device *VAR_1,
        struct i40iw_cqp_request
        *VAR_2)
{
 struct i40iw_sc_dev *VAR_3 = &VAR_1->sc_dev;
 enum i40iw_status_code VAR_4;
 struct cqp_commands_info *VAR_5 = &VAR_2->info;
 int VAR_6 = 0;

 if (VAR_1->reset) {
  FUNC_0(&VAR_1->cqp, VAR_2);
  return VAR_0;
 }

 VAR_4 = FUNC_2(VAR_3, VAR_5);
 if (VAR_4) {
  FUNC_1("error cqp command 0x%x failed\n", VAR_5->cqp_cmd);
  FUNC_0(&VAR_1->cqp, VAR_2);
  return VAR_4;
 }
 if (VAR_2->waiting)
  VAR_6 = FUNC_3(VAR_1, VAR_2);
 if (VAR_6)
  VAR_4 = VAR_0;
 return VAR_4;
}
