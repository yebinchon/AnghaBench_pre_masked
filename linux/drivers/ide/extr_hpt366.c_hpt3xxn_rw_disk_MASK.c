
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_3__ {int hwif; } ;
typedef TYPE_1__ ide_drive_t ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct request*) ;

__attribute__((used)) static void FUNC_2(ide_drive_t *VAR_0, struct request *VAR_1)
{
 FUNC_0(VAR_0->hwif, FUNC_1(VAR_1) ? 0x21 : 0x23);
}
