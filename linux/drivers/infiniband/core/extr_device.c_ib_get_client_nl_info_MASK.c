
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int dummy; } ;
struct ib_client_nl_info {int cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ib_device*,char const*,struct ib_client_nl_info*) ;
 int FUNC_2 (char const*,struct ib_client_nl_info*) ;
 int FUNC_3 (char*,char const*) ;

int FUNC_4(struct ib_device *VAR_3, const char *VAR_4,
     struct ib_client_nl_info *VAR_5)
{
 int VAR_6;

 if (VAR_3)
  VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
 else
  VAR_6 = FUNC_2(VAR_4, VAR_5);
 if (VAR_6) {
  if (VAR_6 == -VAR_1)
   return -VAR_2;
  return VAR_6;
 }

 if (FUNC_0(!VAR_5->cdev))
  return -VAR_0;
 return 0;
}
