
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct agp_memory {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct agp_memory *VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_1->dev, VAR_0, &VAR_3);
 FUNC_1(VAR_1->dev, VAR_0, VAR_3 & ~(1<<7));
 FUNC_1(VAR_1->dev, VAR_0, VAR_3);
}
