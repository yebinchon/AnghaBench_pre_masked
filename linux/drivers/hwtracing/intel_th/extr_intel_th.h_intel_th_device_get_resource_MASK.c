
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct intel_th_device {int num_resources; struct resource* resource; } ;


 unsigned int FUNC_0 (struct resource*) ;

__attribute__((used)) static inline struct resource *
FUNC_1(struct intel_th_device *VAR_0, unsigned int VAR_1,
        unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_resources; VAR_3++)
  if (FUNC_0(&VAR_0->resource[VAR_3]) == VAR_1 && !VAR_2--)
   return &VAR_0->resource[VAR_3];

 return ((void*)0);
}
