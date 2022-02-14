
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct etmv4_drvdata {int cpu; TYPE_1__* csdev; scalar_t__ base; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(void *VAR_4)
{
 u32 VAR_5;
 struct etmv4_drvdata *VAR_6 = VAR_4;

 FUNC_1(VAR_6->base);


 VAR_5 = FUNC_6(VAR_6->base + VAR_0);
 VAR_5 &= ~VAR_1;
 FUNC_7(VAR_5, VAR_6->base + VAR_0);

 VAR_5 = FUNC_6(VAR_6->base + VAR_2);


 VAR_5 &= ~0x1;






 FUNC_4(VAR_3);
 FUNC_5();
 FUNC_7(VAR_5, VAR_6->base + VAR_2);

 FUNC_2(VAR_6->base);

 FUNC_0(VAR_6->base);

 FUNC_3(&VAR_6->csdev->dev,
  "cpu: %d disable smp call done\n", VAR_6->cpu);
}
