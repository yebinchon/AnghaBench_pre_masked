
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_6__ {struct device dev; } ;
struct macio_dev {TYPE_3__ ofdev; struct resource* resource; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct macio_chip {struct device_node* of_node; TYPE_2__ lbus; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {struct resource* resource; struct device dev; } ;


 struct resource VAR_0 ;
 struct macio_dev* FUNC_0 (struct macio_chip*,struct device*,struct device_node*,struct macio_dev*,struct resource*) ;
 scalar_t__ FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*) ;
 scalar_t__ FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct device_node*) ;

__attribute__((used)) static void FUNC_6(struct macio_chip *VAR_1)
{
 struct device_node *VAR_2, *VAR_3;
 struct macio_dev *VAR_4, *VAR_5, *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 struct device *VAR_8 = ((void*)0);
 struct resource *VAR_9 = &VAR_0;
 VAR_3 = FUNC_3(VAR_1->of_node);
 if (VAR_3 == ((void*)0))
  return;


 VAR_4 = FUNC_0(VAR_1, VAR_8, VAR_3, ((void*)0), VAR_9);
 if (VAR_4 == ((void*)0))
  return;
 VAR_9 = &VAR_4->resource[0];


 for (VAR_2 = ((void*)0); (VAR_2 = FUNC_2(VAR_3, VAR_2)) != ((void*)0);) {
  if (FUNC_1(VAR_2))
   continue;
  FUNC_3(VAR_2);
  VAR_5 = FUNC_0(VAR_1, &VAR_4->ofdev.dev, VAR_2, ((void*)0),
         VAR_9);
  if (VAR_5 == ((void*)0))
   FUNC_5(VAR_2);
  else if (FUNC_4(VAR_2, "media-bay"))
   VAR_6 = VAR_5;
  else if (FUNC_4(VAR_2, "escc"))
   VAR_7 = VAR_5;
 }


 if (VAR_6) {
  VAR_3 = VAR_6->ofdev.dev.of_node;
  for (VAR_2 = ((void*)0); (VAR_2 = FUNC_2(VAR_3, VAR_2)) != ((void*)0);) {
   if (FUNC_1(VAR_2))
    continue;
   FUNC_3(VAR_2);
   if (FUNC_0(VAR_1, &VAR_6->ofdev.dev, VAR_2,
       VAR_6, VAR_9) == ((void*)0))
    FUNC_5(VAR_2);
  }
 }


 if (VAR_7) {
  VAR_3 = VAR_7->ofdev.dev.of_node;
  for (VAR_2 = ((void*)0); (VAR_2 = FUNC_2(VAR_3, VAR_2)) != ((void*)0);) {
   if (FUNC_1(VAR_2))
    continue;
   FUNC_3(VAR_2);
   if (FUNC_0(VAR_1, &VAR_7->ofdev.dev, VAR_2,
       ((void*)0), VAR_9) == ((void*)0))
    FUNC_5(VAR_2);
  }
 }
}
