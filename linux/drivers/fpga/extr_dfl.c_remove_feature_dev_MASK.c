
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int id; } ;
struct device {int dummy; } ;
typedef enum dfl_id_type { ____Placeholder_dfl_id_type } dfl_id_type ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;
 struct platform_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, void *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_3(VAR_0);
 enum dfl_id_type VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = VAR_2->id;

 FUNC_2(VAR_2);

 FUNC_0(VAR_3, VAR_4);

 return 0;
}
