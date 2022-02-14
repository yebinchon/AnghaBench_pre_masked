
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_device {int cl_list_lock; } ;
struct ishtp_cl {struct ishtp_device* dev; } ;


 int FUNC_0 (struct ishtp_cl*) ;
 int FUNC_1 (struct ishtp_cl*) ;
 int FUNC_2 (struct ishtp_cl*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct ishtp_cl *VAR_0)
{
 struct ishtp_device *VAR_1;
 unsigned long VAR_2;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->dev;
 if (!VAR_1)
  return;

 FUNC_3(&VAR_1->cl_list_lock, VAR_2);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 FUNC_4(&VAR_1->cl_list_lock, VAR_2);
}
