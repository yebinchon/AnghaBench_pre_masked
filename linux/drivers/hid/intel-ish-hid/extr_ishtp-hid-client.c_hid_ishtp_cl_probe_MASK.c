
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_cl_device {int dummy; } ;
struct ishtp_cl_data {int work; int ishtp_resume_wait; int init_wait; struct ishtp_cl_device* cl_device; struct ishtp_cl* hid_ishtp_cl; } ;
struct ishtp_cl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 struct ishtp_cl_data* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct ishtp_cl*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 struct ishtp_cl* FUNC_4 (struct ishtp_cl_device*) ;
 int FUNC_5 (struct ishtp_cl*) ;
 int FUNC_6 (struct ishtp_cl_device*) ;
 int FUNC_7 (struct ishtp_cl_device*) ;
 int FUNC_8 (struct ishtp_cl*,struct ishtp_cl_data*) ;
 int FUNC_9 (struct ishtp_cl_device*,struct ishtp_cl*) ;
 int FUNC_10 (struct ishtp_cl_device*) ;

__attribute__((used)) static int FUNC_11(struct ishtp_cl_device *VAR_5)
{
 struct ishtp_cl *VAR_6;
 struct ishtp_cl_data *VAR_7;
 int VAR_8;

 if (!VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_1(FUNC_6(VAR_5),
       sizeof(*VAR_7),
       VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_6 = FUNC_4(VAR_5);
 if (!VAR_6)
  return -VAR_1;

 FUNC_9(VAR_5, VAR_6);
 FUNC_8(VAR_6, VAR_7);
 VAR_7->hid_ishtp_cl = VAR_6;
 VAR_7->cl_device = VAR_5;

 FUNC_3(&VAR_7->init_wait);
 FUNC_3(&VAR_7->ishtp_resume_wait);

 FUNC_0(&VAR_7->work, VAR_3);

 VAR_4 = FUNC_10(VAR_5);

 VAR_8 = FUNC_2(VAR_6, 0);
 if (VAR_8) {
  FUNC_5(VAR_6);
  return VAR_8;
 }
 FUNC_7(VAR_5);

 return 0;
}
