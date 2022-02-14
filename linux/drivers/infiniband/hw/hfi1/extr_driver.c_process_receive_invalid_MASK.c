
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_packet {int rhf; TYPE_1__* rcd; } ;
struct TYPE_2__ {int dd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct hfi1_packet *VAR_1)
{
 FUNC_0(VAR_1->rcd->dd, "Invalid packet type %d. Dropping\n",
     FUNC_1(VAR_1->rhf));
 return VAR_0;
}
