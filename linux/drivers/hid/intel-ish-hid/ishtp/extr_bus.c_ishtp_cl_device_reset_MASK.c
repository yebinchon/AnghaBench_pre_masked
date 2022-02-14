
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ishtp_cl_driver {int (* reset ) (struct ishtp_cl_device*) ;} ;
struct TYPE_2__ {int driver; } ;
struct ishtp_cl_device {TYPE_1__ dev; int event_work; int * event_cb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ishtp_cl_device*) ;
 struct ishtp_cl_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ishtp_cl_device *VAR_0)
{
 struct ishtp_cl_driver *VAR_1;
 int VAR_2 = 0;

 VAR_0->event_cb = ((void*)0);
 FUNC_0(&VAR_0->event_work);

 VAR_1 = FUNC_2(VAR_0->dev.driver);
 if (VAR_1 && VAR_1->reset)
  VAR_2 = VAR_1->reset(VAR_0);

 return VAR_2;
}
