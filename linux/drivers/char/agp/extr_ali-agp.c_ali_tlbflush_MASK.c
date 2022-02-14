
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct agp_memory {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct agp_memory *VAR_3)
{
 u32 VAR_4;

 FUNC_0(VAR_2->dev, VAR_1, &VAR_4);
 VAR_4 &= 0xfffffff0;
 VAR_4 |= (1<<0 | 1<<1);
 FUNC_1(VAR_2->dev, VAR_0, VAR_4);
}
