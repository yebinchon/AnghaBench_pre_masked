
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mdp_kms {int vblank_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct mdp_kms*) ;

void FUNC_3(struct mdp_kms *VAR_1, uint32_t VAR_2, bool VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(&VAR_0, VAR_4);
 if (VAR_3)
  VAR_1->vblank_mask |= VAR_2;
 else
  VAR_1->vblank_mask &= ~VAR_2;
 FUNC_2(VAR_1);
 FUNC_1(&VAR_0, VAR_4);
}
