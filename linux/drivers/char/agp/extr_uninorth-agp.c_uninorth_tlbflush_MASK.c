
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(struct agp_memory *VAR_8)
{
 u32 VAR_9 = VAR_3;

 if (VAR_6)
  VAR_9 |= VAR_0;
 FUNC_0(VAR_5->dev, VAR_2,
          VAR_9 | VAR_4);
 FUNC_0(VAR_5->dev, VAR_2, VAR_9);

 if (!VAR_8 && VAR_7 <= 0x30) {
  FUNC_0(VAR_5->dev, VAR_2,
           VAR_9 | VAR_1);
  FUNC_0(VAR_5->dev, VAR_2,
           VAR_9);
 }
}
