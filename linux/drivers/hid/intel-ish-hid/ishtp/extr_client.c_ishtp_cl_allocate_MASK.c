
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_cl_device {int ishtp_dev; } ;
struct ishtp_cl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ishtp_cl*,int ) ;
 struct ishtp_cl* FUNC_1 (int,int ) ;

struct ishtp_cl *FUNC_2(struct ishtp_cl_device *VAR_1)
{
 struct ishtp_cl *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct ishtp_cl), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(VAR_2, VAR_1->ishtp_dev);
 return VAR_2;
}
