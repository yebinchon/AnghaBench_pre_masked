
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hfi1_devdata {int * kernel_send_context; TYPE_2__** rcd; TYPE_1__* vld; } ;
struct TYPE_4__ {int rcvhdrqentsize; } ;
struct TYPE_3__ {int mtu; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hfi1_devdata *VAR_0, int VAR_1, int VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(FUNC_2(VAR_0->kernel_send_context[VAR_1],
         50),
      FUNC_1(VAR_0->kernel_send_context[VAR_1],
     VAR_0->vld[VAR_2].mtu,
     VAR_0->rcd[0]->rcvhdrqentsize));
 FUNC_3(VAR_0->kernel_send_context[VAR_1], VAR_3);
}
