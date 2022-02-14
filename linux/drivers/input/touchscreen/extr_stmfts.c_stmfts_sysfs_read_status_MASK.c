
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stmfts_data {int client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int status ;
typedef int ssize_t ;


 int VAR_0 ;
 struct stmfts_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int,int*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct stmfts_data *VAR_4 = FUNC_0(VAR_1);
 u8 VAR_5[4];
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4->client, VAR_0,
         sizeof(VAR_5), VAR_5);
 if (VAR_6)
  return VAR_6;

 return FUNC_2(VAR_3, "%#02x\n", VAR_5[0]);
}
