
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_cl_device {void (* event_cb ) (struct ishtp_cl_device*) ;int event_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;

int FUNC_1(struct ishtp_cl_device *VAR_2,
 void (*VAR_3)(struct ishtp_cl_device *))
{
 if (VAR_2->event_cb)
  return -VAR_0;

 VAR_2->event_cb = VAR_3;
 FUNC_0(&VAR_2->event_work, VAR_1);

 return 0;
}
