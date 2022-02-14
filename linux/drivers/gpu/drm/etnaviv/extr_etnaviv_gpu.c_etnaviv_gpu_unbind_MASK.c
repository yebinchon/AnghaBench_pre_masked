
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_gpu {int initialized; int * cooling; int fence_idr; int * drm; int buffer; int dev; int wq; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct etnaviv_gpu* FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct etnaviv_gpu*) ;
 int FUNC_7 (struct etnaviv_gpu*) ;
 int FUNC_8 (struct etnaviv_gpu*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct device *VAR_1, struct device *VAR_2,
 void *VAR_3)
{
 struct etnaviv_gpu *VAR_4 = FUNC_3(VAR_1);

 FUNC_0("%s", FUNC_4(VAR_4->dev));

 FUNC_9(VAR_4->wq);
 FUNC_2(VAR_4->wq);

 FUNC_8(VAR_4);





 FUNC_6(VAR_4);


 if (VAR_4->initialized) {
  FUNC_5(&VAR_4->buffer);
  FUNC_7(VAR_4);
  VAR_4->initialized = 0;
 }

 VAR_4->drm = ((void*)0);
 FUNC_10(&VAR_4->fence_idr);

 if (FUNC_1(VAR_0))
  FUNC_13(VAR_4->cooling);
 VAR_4->cooling = ((void*)0);
}
