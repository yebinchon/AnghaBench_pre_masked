
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct property {int length; struct dynamic_dma_window_prop* value; } ;
struct dynamic_dma_window_prop {int window_shift; int liobn; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long FUNC_0 (int ) ;
 struct property* FUNC_1 (struct device_node*,int ,int *) ;
 int FUNC_2 (struct device_node*,char*,int *,int) ;
 int FUNC_3 (struct device_node*,struct property*) ;
 int FUNC_4 (char*,struct device_node*,...) ;
 int FUNC_5 (char*,struct device_node*,...) ;
 int FUNC_6 (int ,int,int,int *,scalar_t__) ;
 int FUNC_7 (int ,unsigned long long,struct dynamic_dma_window_prop*) ;

__attribute__((used)) static void FUNC_8(struct device_node *VAR_2, bool VAR_3)
{
 struct dynamic_dma_window_prop *VAR_4;
 struct property *VAR_5;
 u32 VAR_6[3];
 u64 VAR_7;
 int VAR_8 = 0;

 VAR_8 = FUNC_2(VAR_2, "ibm,ddw-applicable",
      &VAR_6[0], 3);

 VAR_5 = FUNC_1(VAR_2, VAR_0, ((void*)0));
 if (!VAR_5)
  return;

 if (VAR_8 || VAR_5->length < sizeof(*VAR_4))
  goto delprop;

 VAR_4 = VAR_5->value;
 VAR_7 = (u64)FUNC_0(VAR_4->liobn);


 VAR_8 = FUNC_7(0,
  1ULL << (FUNC_0(VAR_4->window_shift) - VAR_1), VAR_4);
 if (VAR_8)
  FUNC_5("%pOF failed to clear tces in window.\n",
   VAR_2);
 else
  FUNC_4("%pOF successfully cleared tces in window.\n",
    VAR_2);

 VAR_8 = FUNC_6(VAR_6[2], 1, 1, ((void*)0), VAR_7);
 if (VAR_8)
  FUNC_5("%pOF: failed to remove direct window: rtas returned "
   "%d to ibm,remove-pe-dma-window(%x) %llx\n",
   VAR_2, VAR_8, VAR_6[2], VAR_7);
 else
  FUNC_4("%pOF: successfully removed direct window: rtas returned "
   "%d to ibm,remove-pe-dma-window(%x) %llx\n",
   VAR_2, VAR_8, VAR_6[2], VAR_7);

delprop:
 if (VAR_3)
  VAR_8 = FUNC_3(VAR_2, VAR_5);
 if (VAR_8)
  FUNC_5("%pOF: failed to remove direct window property: %d\n",
   VAR_2, VAR_8);
}
