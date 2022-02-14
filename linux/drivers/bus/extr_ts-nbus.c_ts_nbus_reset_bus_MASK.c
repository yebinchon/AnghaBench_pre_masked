
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ts_nbus {int ale; int strobe; int csn; TYPE_1__* data; } ;
struct TYPE_2__ {int info; int desc; } ;


 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (int,int ,int ,scalar_t__*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct ts_nbus *VAR_1)
{
 FUNC_0(VAR_0, 8);

 VAR_0[0] = 0;

 FUNC_1(8, VAR_1->data->desc,
           VAR_1->data->info, VAR_0);
 FUNC_2(VAR_1->csn, 0);
 FUNC_2(VAR_1->strobe, 0);
 FUNC_2(VAR_1->ale, 0);
}
