
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int * type; } ;
struct bmc_device {int usecount; int guid; scalar_t__ dyn_guid_set; } ;
typedef int guid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *) ;
 struct bmc_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, const void *VAR_2)
{
 const guid_t *VAR_3 = VAR_2;
 struct bmc_device *VAR_4;
 int VAR_5;

 if (VAR_1->type != &VAR_0)
  return 0;

 VAR_4 = FUNC_2(VAR_1);
 VAR_5 = VAR_4->dyn_guid_set && FUNC_0(&VAR_4->guid, VAR_3);
 if (VAR_5)
  VAR_5 = FUNC_1(&VAR_4->usecount);
 return VAR_5;
}
