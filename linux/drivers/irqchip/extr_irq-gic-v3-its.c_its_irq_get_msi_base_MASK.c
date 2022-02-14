
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct its_node {scalar_t__ phys_base; } ;
struct its_device {struct its_node* its; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u64 FUNC_0(struct its_device *VAR_1)
{
 struct its_node *VAR_2 = VAR_1->its;

 return VAR_2->phys_base + VAR_0;
}
