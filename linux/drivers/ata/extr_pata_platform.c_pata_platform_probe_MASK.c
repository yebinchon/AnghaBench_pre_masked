
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int num_resources; int dev; } ;
struct pata_platform_info {int ioport_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct resource*,struct resource*,struct resource*,int ,int ,int *,int) ;
 int FUNC_1 (int *,char*) ;
 struct pata_platform_info* FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 struct resource* FUNC_3 (struct platform_device*,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_6)
{
 struct resource *VAR_7;
 struct resource *VAR_8;
 struct resource *VAR_9;
 struct pata_platform_info *VAR_10 = FUNC_2(&VAR_6->dev);




 if ((VAR_6->num_resources != 3) && (VAR_6->num_resources != 2)) {
  FUNC_1(&VAR_6->dev, "invalid number of resources\n");
  return -VAR_0;
 }




 VAR_7 = FUNC_3(VAR_6, VAR_1, 0);
 if (VAR_7 == ((void*)0)) {
  VAR_7 = FUNC_3(VAR_6, VAR_3, 0);
  if (FUNC_4(VAR_7 == ((void*)0)))
   return -VAR_0;
 }




 VAR_8 = FUNC_3(VAR_6, VAR_1, 1);
 if (VAR_8 == ((void*)0)) {
  VAR_8 = FUNC_3(VAR_6, VAR_3, 1);
  if (FUNC_4(VAR_8 == ((void*)0)))
   return -VAR_0;
 }




 VAR_9 = FUNC_3(VAR_6, VAR_2, 0);

 return FUNC_0(&VAR_6->dev, VAR_7, VAR_8, VAR_9,
         VAR_10 ? VAR_10->ioport_shift : 0,
         VAR_5, &VAR_4, 0);
}
