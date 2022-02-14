
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct resource {int end; struct resource* sibling; } ;
typedef int resource_size_t ;
struct TYPE_2__ {struct resource* child; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

bool FUNC_3(int VAR_1)
{
 struct resource *VAR_2;
 resource_size_t VAR_3 = 0;
 if (FUNC_2())
  return 1;





 if (FUNC_1())
  return 1;

 for (VAR_2 = VAR_0.child; VAR_2; VAR_2 = VAR_2->sibling) {
  VAR_3 = FUNC_0(VAR_3, VAR_2->end);
 }

 return VAR_3 > ((u64)1 << VAR_1);
}
