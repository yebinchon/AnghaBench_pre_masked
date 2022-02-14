
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_device {scalar_t__ transfer_path; } ;
struct ishtp_cl {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ishtp_device*,struct ishtp_cl*) ;
 int FUNC_1 (struct ishtp_device*,struct ishtp_cl*) ;

void FUNC_2(struct ishtp_device *VAR_1, struct ishtp_cl *VAR_2)
{
 if (VAR_1->transfer_path == VAR_0)
  FUNC_0(VAR_1, VAR_2);
 else
  FUNC_1(VAR_1, VAR_2);
}
