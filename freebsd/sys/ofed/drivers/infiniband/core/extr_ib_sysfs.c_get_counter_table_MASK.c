
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int dummy; } ;
struct ib_class_port_info {int capability_mask; } ;
struct attribute_group {int dummy; } ;
typedef int cpi ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ib_device*,int,int ,struct ib_class_port_info*,int,int) ;
 struct attribute_group VAR_3 ;
 struct attribute_group VAR_4 ;
 struct attribute_group VAR_5 ;

__attribute__((used)) static struct attribute_group *FUNC_1(struct ib_device *VAR_6,
       int VAR_7)
{
 struct ib_class_port_info VAR_8;

 if (FUNC_0(VAR_6, VAR_7, VAR_2,
    &VAR_8, 40, sizeof(VAR_8)) >= 0) {
  if (VAR_8.capability_mask & VAR_0)

   return &VAR_4;

  if (VAR_8.capability_mask & VAR_1)

   return &VAR_5;
 }


 return &VAR_3;
}
