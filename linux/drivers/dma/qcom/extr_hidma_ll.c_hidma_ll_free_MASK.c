
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct hidma_tre {int allocated; } ;
struct hidma_lldev {size_t nr_tres; int dev; struct hidma_tre* trepool; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*,size_t) ;

void FUNC_3(struct hidma_lldev *VAR_0, u32 VAR_1)
{
 struct hidma_tre *VAR_2;

 if (VAR_1 >= VAR_0->nr_tres) {
  FUNC_2(VAR_0->dev, "invalid TRE number in free:%d", VAR_1);
  return;
 }

 VAR_2 = &VAR_0->trepool[VAR_1];
 if (FUNC_0(&VAR_2->allocated) != 1) {
  FUNC_2(VAR_0->dev, "trying to free an unused TRE:%d", VAR_1);
  return;
 }

 FUNC_1(&VAR_2->allocated, 0);
}
