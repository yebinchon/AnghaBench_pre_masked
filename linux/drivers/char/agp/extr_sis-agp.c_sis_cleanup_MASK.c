
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aper_size_info_8 {int size_value; } ;
struct TYPE_2__ {int dev; int previous_size; } ;


 struct aper_size_info_8* FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct aper_size_info_8 *VAR_2;

 VAR_2 = FUNC_0(VAR_1->previous_size);
 FUNC_1(VAR_1->dev, VAR_0,
         (VAR_2->size_value & ~(0x03)));
}
