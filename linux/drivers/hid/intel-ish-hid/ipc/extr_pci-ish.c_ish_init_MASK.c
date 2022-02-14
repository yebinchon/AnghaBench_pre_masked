
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_device {int devc; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ishtp_device*) ;
 int FUNC_2 (struct ishtp_device*) ;

__attribute__((used)) static int FUNC_3(struct ishtp_device *VAR_0)
{
 int VAR_1;


 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_0->devc, "ISH: hw start failed.\n");
  return VAR_1;
 }


 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_0->devc, "ISHTP: Protocol init failed.\n");
  return VAR_1;
 }

 return 0;
}
