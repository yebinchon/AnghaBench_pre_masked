
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct zip_device {TYPE_1__* iq; } ;
struct TYPE_2__ {scalar_t__ sw_tail; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__) ;

void FUNC_3(struct zip_device *VAR_1, int VAR_2)
{
 FUNC_2("Freeing cmd_qbuf 0x%lx\n", VAR_1->iq[VAR_2].sw_tail);

 FUNC_0((u64)VAR_1->iq[VAR_2].sw_tail, FUNC_1(VAR_0));
}
