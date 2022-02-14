
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct aper_size_info_8 {int size_value; } ;
struct TYPE_2__ {int dev; int previous_size; } ;


 struct aper_size_info_8* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(void)
{
 u8 VAR_3;
 struct aper_size_info_8 *VAR_4;

 VAR_4 = FUNC_0(VAR_2->previous_size);
 FUNC_1(VAR_2->dev, VAR_1, &VAR_3);
 FUNC_2(VAR_2->dev, VAR_1,
   VAR_3 & ~(1 << 1));
 FUNC_2(VAR_2->dev, VAR_0,
   VAR_4->size_value);
}
