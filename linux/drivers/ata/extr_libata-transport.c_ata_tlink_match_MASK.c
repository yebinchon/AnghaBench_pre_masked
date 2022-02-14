
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct attribute_container {int dummy; } ;
struct TYPE_2__ {struct attribute_container ac; } ;
struct ata_internal {TYPE_1__ link_attr_cont; } ;


 int FUNC_0 (struct device*) ;
 int VAR_0 ;
 struct ata_internal* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct attribute_container *VAR_1,
      struct device *VAR_2)
{
 struct ata_internal* VAR_3 = FUNC_1(VAR_0);
 if (!FUNC_0(VAR_2))
  return 0;
 return &VAR_3->link_attr_cont.ac == VAR_1;
}
