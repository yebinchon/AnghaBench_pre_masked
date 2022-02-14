
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; struct resource* resource; } ;
struct dfl_feature {size_t resource_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct resource*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_4,
    struct dfl_feature *VAR_5)
{
 struct resource *VAR_6 = &VAR_4->resource[VAR_5->resource_index];

 return FUNC_0(FUNC_1(&VAR_4->dev),
       VAR_0,
       FUNC_2(VAR_6), VAR_6->start,
       VAR_1 | VAR_2 |
       VAR_3);
}
