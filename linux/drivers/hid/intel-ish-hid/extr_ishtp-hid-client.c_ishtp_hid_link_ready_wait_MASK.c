
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_cl_data {scalar_t__ suspended; int ishtp_resume_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ishtp_cl_data*,char*) ;
 int FUNC_1 (int ,int,int) ;

int FUNC_2(struct ishtp_cl_data *VAR_2)
{
 int VAR_3;

 if (VAR_2->suspended) {
  FUNC_0(VAR_2, "wait for link ready\n");
  VAR_3 = FUNC_1(
     VAR_2->ishtp_resume_wait,
     !VAR_2->suspended,
     5 * VAR_1);

  if (VAR_3 == 0) {
   FUNC_0(VAR_2, "link not ready\n");
   return -VAR_0;
  }
  FUNC_0(VAR_2, "link ready\n");
 }

 return 0;
}
