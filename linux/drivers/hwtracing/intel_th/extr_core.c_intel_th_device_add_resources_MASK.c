
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct intel_th_device {int num_resources; struct resource* resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_0 (struct resource*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct intel_th_device *VAR_2,
      struct resource *VAR_3, int VAR_4)
{
 struct resource *VAR_5;

 VAR_5 = FUNC_0(VAR_3, sizeof(*VAR_3) * VAR_4, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_2->resource = VAR_5;
 VAR_2->num_resources = VAR_4;

 return 0;
}
