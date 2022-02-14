
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct of_device_id {int compatible; } ;
typedef scalar_t__ resource_size_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct resource const*) ;
 int FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static bool FUNC_2(const struct resource *VAR_2,
      const struct of_device_id *VAR_3)
{
 resource_size_t VAR_4 = FUNC_0(VAR_2);
 const char *VAR_5 = "arm,mali-dp500";

 if (!FUNC_1(VAR_3->compatible, VAR_5,
       sizeof(VAR_3->compatible)))
  return VAR_4 >= VAR_1;
 else if (VAR_4 < VAR_0)
  return 0;
 return 1;
}
