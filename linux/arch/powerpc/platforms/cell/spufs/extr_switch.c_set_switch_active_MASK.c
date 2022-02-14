
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mfc_control_RW; } ;
struct spu_state {TYPE_1__ priv2; } ;
struct spu {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static inline void FUNC_3(struct spu_state *VAR_3, struct spu *VAR_4)
{
 if (FUNC_2(VAR_1, &VAR_4->flags))
  VAR_3->priv2.mfc_control_RW |= VAR_0;
 FUNC_0(VAR_2, &VAR_4->flags);
 FUNC_1();
}
