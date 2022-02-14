
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a6xx_gmu {int uncached_iova_base; int * domain; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct a6xx_gmu *VAR_2)
{
 int VAR_3;






 VAR_2->uncached_iova_base = 0x60000000;


 VAR_2->domain = FUNC_1(&VAR_1);
 if (!VAR_2->domain)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2->domain, VAR_2->dev);

 if (VAR_3) {
  FUNC_2(VAR_2->domain);
  VAR_2->domain = ((void*)0);
 }

 return VAR_3;
}
