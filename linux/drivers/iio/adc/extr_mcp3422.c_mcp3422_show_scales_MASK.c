
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mcp3422 {int config; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 struct mcp3422* FUNC_2 (int ) ;
 int** VAR_0 ;
 int FUNC_3 (char*,char*,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct mcp3422 *VAR_4 = FUNC_2(FUNC_1(VAR_1));
 u8 VAR_5 = FUNC_0(VAR_4->config);

 return FUNC_3(VAR_3, "0.%09u 0.%09u 0.%09u 0.%09u\n",
  VAR_0[VAR_5][0],
  VAR_0[VAR_5][1],
  VAR_0[VAR_5][2],
  VAR_0[VAR_5][3]);
}
