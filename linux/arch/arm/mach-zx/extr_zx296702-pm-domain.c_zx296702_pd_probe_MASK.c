
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct genpd_onecell_data {int num_domains; int * domains; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,struct resource*) ;
 struct genpd_onecell_data* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (int ,struct genpd_onecell_data*) ;
 int VAR_5 ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (int ,int *,int) ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_7)
{
 struct genpd_onecell_data *VAR_8;
 struct resource *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_4(&VAR_7->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->domains = VAR_6;
 VAR_8->num_domains = FUNC_0(VAR_6);

 VAR_9 = FUNC_6(VAR_7, VAR_4, 0);
 if (!VAR_9) {
  FUNC_2(&VAR_7->dev, "no memory resource defined\n");
  return -VAR_1;
 }

 VAR_5 = FUNC_3(&VAR_7->dev, VAR_9);
 if (FUNC_1(VAR_5)) {
  FUNC_2(&VAR_7->dev, "ioremap fail.\n");
  return -VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6); ++VAR_10)
  FUNC_7(VAR_6[VAR_10], ((void*)0), 0);

 FUNC_5(VAR_7->dev.of_node, VAR_8);
 return 0;
}
