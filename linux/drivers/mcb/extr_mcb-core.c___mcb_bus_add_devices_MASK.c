
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcb_device {int is_added; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*) ;
 struct mcb_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void *VAR_1)
{
 struct mcb_device *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 if (VAR_2->is_added)
  return 0;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 < 0)
  FUNC_0(VAR_0, "Error adding device (%d)\n", VAR_3);

 VAR_2->is_added = 1;

 return 0;
}
