
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_ring {int tail; int head; int vma; } ;
struct intel_engine_cs {scalar_t__ class; int i915; } ;
struct intel_context {int sseu; int * lrc_reg_state; struct intel_ring* ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intel_engine_cs*,struct intel_context*,int *) ;
 int FUNC_3 (struct intel_ring*,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct intel_context *VAR_5,
        struct intel_engine_cs *VAR_6)
{
 struct intel_ring *VAR_7 = VAR_5->ring;
 u32 *VAR_8 = VAR_5->lrc_reg_state;

 FUNC_0(!FUNC_3(VAR_7, VAR_7->head));
 FUNC_0(!FUNC_3(VAR_7, VAR_7->tail));

 VAR_8[VAR_0 + 1] = FUNC_1(VAR_7->vma);
 VAR_8[VAR_1 + 1] = VAR_7->head;
 VAR_8[VAR_2 + 1] = VAR_7->tail;


 if (VAR_6->class == VAR_4) {
  VAR_8[VAR_3 + 1] =
   FUNC_4(VAR_6->i915, &VAR_5->sseu);

  FUNC_2(VAR_6, VAR_5, VAR_8);
 }
}
