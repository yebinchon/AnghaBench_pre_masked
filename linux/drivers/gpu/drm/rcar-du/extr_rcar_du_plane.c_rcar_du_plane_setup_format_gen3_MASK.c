
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_du_plane_state {TYPE_1__* format; } ;
struct rcar_du_group {int dummy; } ;
struct TYPE_2__ {int pnmr; int edf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rcar_du_group*,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct rcar_du_group *VAR_4,
         unsigned int VAR_5,
         const struct rcar_du_plane_state *VAR_6)
{
 FUNC_0(VAR_4, VAR_5, VAR_2,
       VAR_3 | VAR_6->format->pnmr);

 FUNC_0(VAR_4, VAR_5, VAR_0,
       VAR_6->format->edf | VAR_1);
}
