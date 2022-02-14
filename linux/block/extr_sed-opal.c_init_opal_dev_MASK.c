
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_dev {int * send_recv; void* data; int dev_lock; int unlk_lst; } ;
typedef int sec_send_recv ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct opal_dev*) ;
 int FUNC_2 (struct opal_dev*) ;
 struct opal_dev* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

struct opal_dev *FUNC_6(void *VAR_1, sec_send_recv *VAR_2)
{
 struct opal_dev *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_3->unlk_lst);
 FUNC_4(&VAR_3->dev_lock);
 VAR_3->data = VAR_1;
 VAR_3->send_recv = VAR_2;
 if (FUNC_1(VAR_3) != 0) {
  FUNC_5("Opal is not supported on this device\n");
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
