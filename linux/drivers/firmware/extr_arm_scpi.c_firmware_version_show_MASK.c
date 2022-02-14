
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scpi_drvinfo {int firmware_version; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct scpi_drvinfo* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int ,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
         struct device_attribute *VAR_4, char *VAR_5)
{
 struct scpi_drvinfo *VAR_6 = FUNC_1(VAR_3);

 return FUNC_2(VAR_5, "%lu.%lu.%lu\n",
  FUNC_0(VAR_0, VAR_6->firmware_version),
  FUNC_0(VAR_1, VAR_6->firmware_version),
  FUNC_0(VAR_2, VAR_6->firmware_version));
}
