
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {char* name; int desc; int flags; int end; int start; } ;
struct nd_region_desc {struct resource* res; } ;
struct acpi_nfit_desc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,struct resource*) ;
 struct resource* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,struct resource*) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct resource*) ;

__attribute__((used)) static int FUNC_5(struct acpi_nfit_desc *VAR_7,
  struct nd_region_desc *VAR_8)
{
 struct resource *VAR_9, *VAR_10 = VAR_8->res;
 int VAR_11, VAR_12;


 VAR_11 = FUNC_3(VAR_10->start, FUNC_4(VAR_10),
    VAR_2, VAR_3);
 if (VAR_11 == VAR_4)
  return 0;

 VAR_9 = FUNC_1(VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->name = "Persistent Memory";
 VAR_9->start = VAR_10->start;
 VAR_9->end = VAR_10->end;
 VAR_9->flags = VAR_2;
 VAR_9->desc = VAR_3;

 VAR_12 = FUNC_2(&VAR_6, VAR_9);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_7->dev,
     VAR_5,
     VAR_9);
 if (VAR_12)
  return VAR_12;

 return 0;
}
