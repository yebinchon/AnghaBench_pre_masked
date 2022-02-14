
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef long long u64 ;
typedef int u32 ;
struct send_context {int dummy; } ;
struct hfi1_pportdata {scalar_t__ port; } ;
struct hfi1_devdata {TYPE_2__* vld; TYPE_3__** kernel_send_context; int node; TYPE_1__** rcd; int num_send_contexts; struct hfi1_pportdata* pport; } ;
struct TYPE_10__ {int hw_context; int sw_index; } ;
struct TYPE_9__ {TYPE_3__* sc; int mtu; } ;
struct TYPE_8__ {int rcvhdrqentsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct hfi1_devdata*,char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_7 ;
 TYPE_3__** FUNC_4 (int ,int,int ,int ) ;
 int FUNC_5 (TYPE_3__**) ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (struct hfi1_devdata*,scalar_t__,int,int *) ;
 void* FUNC_7 (struct hfi1_devdata*,int ,int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (struct hfi1_devdata*,int ,int ,long long) ;

int FUNC_11(struct hfi1_devdata *VAR_9)
{
 int VAR_10;
 u64 VAR_11, VAR_12 = (u64)0x80ff;
 u64 VAR_13 = (u64)0x00ff;
 u32 VAR_14;
 struct hfi1_pportdata *VAR_15 = VAR_9->pport;

 VAR_9->vld[15].sc = FUNC_7(VAR_9, VAR_6,
      VAR_9->rcd[0]->rcvhdrqentsize, VAR_9->node);
 if (!VAR_9->vld[15].sc)
  return -VAR_1;

 FUNC_3(VAR_9->vld[15].sc);
 VAR_9->vld[15].mtu = FUNC_2(VAR_4);

 VAR_9->kernel_send_context = FUNC_4(VAR_9->num_send_contexts,
            sizeof(struct send_context *),
            VAR_2, VAR_9->node);
 if (!VAR_9->kernel_send_context)
  goto freesc15;

 VAR_9->kernel_send_context[0] = VAR_9->vld[15].sc;

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {







  VAR_9->vld[VAR_10].sc = FUNC_7(VAR_9, VAR_5,
      VAR_9->rcd[0]->rcvhdrqentsize, VAR_9->node);
  if (!VAR_9->vld[VAR_10].sc)
   goto nomem;
  VAR_9->kernel_send_context[VAR_10 + 1] = VAR_9->vld[VAR_10].sc;
  FUNC_3(VAR_9->vld[VAR_10].sc);

  VAR_9->vld[VAR_10].mtu = VAR_7;
 }
 for (VAR_10 = VAR_8; VAR_10 < VAR_3 * VAR_8; VAR_10++) {
  VAR_9->kernel_send_context[VAR_10 + 1] =
  FUNC_7(VAR_9, VAR_5, VAR_9->rcd[0]->rcvhdrqentsize, VAR_9->node);
  if (!VAR_9->kernel_send_context[VAR_10 + 1])
   goto nomem;
  FUNC_3(VAR_9->kernel_send_context[VAR_10 + 1]);
 }

 FUNC_8(VAR_9->vld[15].sc);
 VAR_14 = VAR_9->vld[15].sc->hw_context;
 VAR_11 = VAR_12 & ~(1LL << 15);
 FUNC_10(VAR_9, VAR_14, FUNC_0(VAR_0), VAR_11);
 FUNC_1(VAR_9,
      "Using send context %u(%u) for VL15\n",
      VAR_9->vld[15].sc->sw_index, VAR_14);

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  FUNC_8(VAR_9->vld[VAR_10].sc);
  VAR_14 = VAR_9->vld[VAR_10].sc->hw_context;
  VAR_11 = VAR_12 & ~(VAR_13);
  FUNC_10(VAR_9, VAR_14, FUNC_0(VAR_0), VAR_11);
 }
 for (VAR_10 = VAR_8; VAR_10 < VAR_3 * VAR_8; VAR_10++) {
  FUNC_8(VAR_9->kernel_send_context[VAR_10 + 1]);
  VAR_14 = VAR_9->kernel_send_context[VAR_10 + 1]->hw_context;
  VAR_11 = VAR_12 & ~(VAR_13);
  FUNC_10(VAR_9, VAR_14, FUNC_0(VAR_0), VAR_11);
 }

 if (FUNC_6(VAR_9, VAR_15->port - 1, VAR_8, ((void*)0)))
  goto nomem;
 return 0;

nomem:
 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  FUNC_9(VAR_9->vld[VAR_10].sc);
  VAR_9->vld[VAR_10].sc = ((void*)0);
 }

 for (VAR_10 = VAR_8; VAR_10 < VAR_3 * VAR_8; VAR_10++)
  FUNC_9(VAR_9->kernel_send_context[VAR_10 + 1]);

 FUNC_5(VAR_9->kernel_send_context);
 VAR_9->kernel_send_context = ((void*)0);

freesc15:
 FUNC_9(VAR_9->vld[15].sc);
 return -VAR_1;
}
