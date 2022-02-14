
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_gpu {int dev; int sched; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;

int FUNC_3(struct etnaviv_gpu *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_3->sched, &VAR_2,
        VAR_0, VAR_1,
        FUNC_2(500), FUNC_0(VAR_3->dev));
 if (VAR_4)
  return VAR_4;

 return 0;
}
