
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_device {int dummy; } ;
struct ishtp_cl {struct ishtp_device* dev; } ;



struct ishtp_device *FUNC_0(struct ishtp_cl *VAR_0)
{
 return VAR_0->dev;
}
