
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_cl_device {int dummy; } ;
struct ishtp_cl_data {int work_ishtp_reset; int work_fw_load; } ;
struct ishtp_cl {int dummy; } ;


 int FUNC_0 (int *) ;
 struct ishtp_cl_data* FUNC_1 (struct ishtp_cl*) ;
 struct ishtp_cl* FUNC_2 (struct ishtp_cl_device*) ;
 int FUNC_3 (struct ishtp_cl_device*) ;
 int FUNC_4 (struct ishtp_cl*) ;

__attribute__((used)) static int FUNC_5(struct ishtp_cl_device *VAR_0)
{
 struct ishtp_cl_data *VAR_1;
 struct ishtp_cl *VAR_2 = FUNC_2(VAR_0);

 VAR_1 = FUNC_1(VAR_2);







 FUNC_0(&VAR_1->work_fw_load);
 FUNC_0(&VAR_1->work_ishtp_reset);
 FUNC_4(VAR_2);
 FUNC_3(VAR_0);

 return 0;
}
