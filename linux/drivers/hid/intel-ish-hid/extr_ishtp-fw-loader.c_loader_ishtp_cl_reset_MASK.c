
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_cl_device {int dummy; } ;
struct ishtp_cl_data {int work_ishtp_reset; } ;
struct ishtp_cl {int dummy; } ;


 struct ishtp_cl_data* FUNC_0 (struct ishtp_cl*) ;
 struct ishtp_cl* FUNC_1 (struct ishtp_cl_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ishtp_cl_device *VAR_0)
{
 struct ishtp_cl_data *VAR_1;
 struct ishtp_cl *VAR_2 = FUNC_1(VAR_0);

 VAR_1 = FUNC_0(VAR_2);

 FUNC_2(&VAR_1->work_ishtp_reset);

 return 0;
}
