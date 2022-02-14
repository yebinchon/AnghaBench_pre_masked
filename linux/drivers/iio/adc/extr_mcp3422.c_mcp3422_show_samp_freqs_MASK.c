
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp3422 {int id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*) ;
 struct mcp3422* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct mcp3422 *VAR_3 = FUNC_1(FUNC_0(VAR_0));

 if (VAR_3->id > 4)
  return FUNC_2(VAR_2, "240 60 15\n");

 return FUNC_2(VAR_2, "240 60 15 3\n");
}
