
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_cl_driver {int (* probe ) (struct ishtp_cl_device*) ;} ;
struct ishtp_cl_device {int dummy; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int FUNC_0 (struct ishtp_cl_device*) ;
 struct ishtp_cl_device* FUNC_1 (struct device*) ;
 struct ishtp_cl_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 struct ishtp_cl_device *VAR_2 = FUNC_1(VAR_1);
 struct ishtp_cl_driver *VAR_3;

 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_2(VAR_1->driver);
 if (!VAR_3 || !VAR_3->probe)
  return -VAR_0;

 return VAR_3->probe(VAR_2);
}
