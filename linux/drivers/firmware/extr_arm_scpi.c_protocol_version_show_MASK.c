
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scpi_drvinfo {int protocol_version; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct scpi_drvinfo* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
         struct device_attribute *VAR_3, char *VAR_4)
{
 struct scpi_drvinfo *VAR_5 = FUNC_1(VAR_2);

 return FUNC_2(VAR_4, "%lu.%lu\n",
  FUNC_0(VAR_0, VAR_5->protocol_version),
  FUNC_0(VAR_1, VAR_5->protocol_version));
}
