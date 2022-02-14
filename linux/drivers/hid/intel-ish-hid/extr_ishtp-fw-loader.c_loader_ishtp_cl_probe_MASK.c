
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ishtp_cl_device {int dummy; } ;
struct TYPE_2__ {int wait_queue; } ;
struct ishtp_cl_data {int work_fw_load; scalar_t__ retry_count; int work_ishtp_reset; TYPE_1__ response; struct ishtp_cl_device* cl_device; struct ishtp_cl* loader_ishtp_cl; } ;
struct ishtp_cl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct ishtp_cl_data* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *) ;
 struct ishtp_cl* FUNC_3 (struct ishtp_cl_device*) ;
 int FUNC_4 (struct ishtp_cl*) ;
 int FUNC_5 (struct ishtp_cl_device*) ;
 int FUNC_6 (struct ishtp_cl_device*) ;
 int FUNC_7 (struct ishtp_cl*,struct ishtp_cl_data*) ;
 int FUNC_8 (struct ishtp_cl_device*,struct ishtp_cl*) ;
 int VAR_2 ;
 int FUNC_9 (struct ishtp_cl*,int ) ;
 int VAR_3 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct ishtp_cl_device *VAR_4)
{
 struct ishtp_cl *VAR_5;
 struct ishtp_cl_data *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(FUNC_5(VAR_4),
       sizeof(*VAR_6),
       VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_4);
 if (!VAR_5)
  return -VAR_0;

 FUNC_8(VAR_4, VAR_5);
 FUNC_7(VAR_5, VAR_6);
 VAR_6->loader_ishtp_cl = VAR_5;
 VAR_6->cl_device = VAR_4;

 FUNC_2(&VAR_6->response.wait_queue);

 FUNC_0(&VAR_6->work_ishtp_reset,
    VAR_3);
 FUNC_0(&VAR_6->work_fw_load,
    VAR_2);

 VAR_7 = FUNC_9(VAR_5, 0);
 if (VAR_7 < 0) {
  FUNC_4(VAR_5);
  return VAR_7;
 }
 FUNC_6(VAR_4);

 VAR_6->retry_count = 0;


 FUNC_10(&VAR_6->work_fw_load);

 return 0;
}
