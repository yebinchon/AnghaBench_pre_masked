
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilly_endpoint {int lowest_minor; int num_channels; int dev; int major; int cdev; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct xilly_endpoint *VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_1->lowest_minor;
      VAR_2 < (VAR_1->lowest_minor + VAR_1->num_channels);
      VAR_2++)
  FUNC_3(VAR_0, FUNC_0(VAR_1->major, VAR_2));
 FUNC_1(&VAR_1->cdev);
 FUNC_4(FUNC_0(VAR_1->major,
           VAR_1->lowest_minor),
     VAR_1->num_channels);

 FUNC_2(VAR_1->dev, "Removed %d device files.\n",
   VAR_1->num_channels);
}
