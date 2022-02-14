
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tboot_size; int tboot_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int FUNC_3 (char*,int,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_4(void)
{
 u32 VAR_2, VAR_3;


 VAR_2 = FUNC_0(VAR_1->tboot_base);
 VAR_3 = FUNC_1(VAR_1->tboot_size);
 if (FUNC_2(VAR_2 << VAR_0, VAR_2, VAR_3))
  FUNC_3("tboot: Error mapping tboot pages (mfns) @ 0x%x, 0x%x\n",
        VAR_2, VAR_3);
}
