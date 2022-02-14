
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct page {int dummy; } ;
struct agp_bridge_data {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 struct page* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static struct page *FUNC_4(struct agp_bridge_data *VAR_4)
{
 struct page *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6;

 if (!VAR_5)
  return ((void*)0);

 FUNC_2(VAR_3->dev, VAR_1, &VAR_6);
 FUNC_3(VAR_3->dev, VAR_1,
   (((VAR_6 & VAR_0) |
     FUNC_1(VAR_5)) | VAR_2 ));
 return VAR_5;
}
