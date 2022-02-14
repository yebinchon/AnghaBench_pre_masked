
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_cl_driver {int (* remove ) (struct ishtp_cl_device*) ;} ;
struct ishtp_cl_device {int event_work; int * event_cb; } ;
struct device {int * driver; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ishtp_cl_device*) ;
 struct ishtp_cl_device* FUNC_2 (struct device*) ;
 struct ishtp_cl_driver* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct ishtp_cl_device *VAR_1 = FUNC_2(VAR_0);
 struct ishtp_cl_driver *VAR_2;

 if (!VAR_1 || !VAR_0->driver)
  return 0;

 if (VAR_1->event_cb) {
  VAR_1->event_cb = ((void*)0);
  FUNC_0(&VAR_1->event_work);
 }

 VAR_2 = FUNC_3(VAR_0->driver);
 if (!VAR_2->remove) {
  VAR_0->driver = ((void*)0);

  return 0;
 }

 return VAR_2->remove(VAR_1);
}
