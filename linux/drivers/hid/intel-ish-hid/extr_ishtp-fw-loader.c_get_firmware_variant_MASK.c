
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_cl_data {int cl_device; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,char const**) ;
 struct device* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*,char const*) ;

__attribute__((used)) static int FUNC_4(struct ishtp_cl_data *VAR_1,
    char *VAR_2)
{
 int VAR_3;
 const char *VAR_4;
 struct device *VAR_5 = FUNC_2(VAR_1->cl_device);

 VAR_3 = FUNC_1(VAR_5, "firmware-name", &VAR_4);
 if (VAR_3 < 0) {
  FUNC_0(VAR_5,
   "Error: ISH firmware-name device property required\n");
  return VAR_3;
 }
 return FUNC_3(VAR_2, VAR_0, "intel/%s", VAR_4);
}
