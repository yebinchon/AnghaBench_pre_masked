
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int ,int ) ;
 int FUNC_2 (int*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (char*,char*,int,int,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_5, struct device_attribute *VAR_6,
    char *VAR_7)
{
 uint8_t *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_8, VAR_2, VAR_4,
     0, 0, 0, 0, 0);
 if (VAR_9 < 0) {
  FUNC_0(VAR_8);
  return VAR_9;
 }

 VAR_9 = FUNC_3(VAR_7, "%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x\n",
   VAR_8[VAR_3 + 0],
   VAR_8[VAR_3 + 1],
   VAR_8[VAR_3 + 2],
   VAR_8[VAR_3 + 3],
   VAR_8[VAR_3 + 4],
   VAR_8[VAR_3 + 5],
   VAR_8[VAR_3 + 6],
   VAR_8[VAR_3 + 7],
   VAR_8[VAR_3 + 8],
   VAR_8[VAR_3 + 9],
   VAR_8[VAR_3 + 10],
   VAR_8[VAR_3 + 11]);

 FUNC_0(VAR_8);

 return VAR_9;
}
