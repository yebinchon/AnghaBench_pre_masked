
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int alpha; } ;
struct rcar_du_plane_state {int colorkey; TYPE_2__* format; TYPE_1__ state; } ;
struct rcar_du_group {int dummy; } ;
struct TYPE_4__ {int fourcc; int pnmr; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct rcar_du_group*,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct rcar_du_group *VAR_13,
         unsigned int VAR_14,
         const struct rcar_du_plane_state *VAR_15)
{
 u32 VAR_16;
 u32 VAR_17;
 if (VAR_15->format->fourcc != 129)
  FUNC_0(VAR_13, VAR_14, VAR_1, VAR_2);
 else
  FUNC_0(VAR_13, VAR_14, VAR_1,
        VAR_3 | VAR_15->state.alpha >> 8);

 VAR_17 = VAR_5 | VAR_15->format->pnmr;






 if ((VAR_15->colorkey & VAR_11) == VAR_12)
  VAR_17 |= VAR_6;


 if (VAR_15->format->fourcc == VAR_0)
  VAR_17 |= VAR_7;

 FUNC_0(VAR_13, VAR_14, VAR_4, VAR_17);

 switch (VAR_15->format->fourcc) {
 case 130:
  VAR_16 = ((VAR_15->colorkey & 0xf80000) >> 8)
    | ((VAR_15->colorkey & 0x00fc00) >> 5)
    | ((VAR_15->colorkey & 0x0000f8) >> 3);
  FUNC_0(VAR_13, VAR_14, VAR_8, VAR_16);
  break;

 case 132:
 case 129:
  VAR_16 = ((VAR_15->colorkey & 0xf80000) >> 9)
    | ((VAR_15->colorkey & 0x00f800) >> 6)
    | ((VAR_15->colorkey & 0x0000f8) >> 3);
  FUNC_0(VAR_13, VAR_14, VAR_8, VAR_16);
  break;

 case 128:
 case 131:
  FUNC_0(VAR_13, VAR_14, VAR_9,
        VAR_10 | (VAR_15->colorkey & 0xffffff));
  break;
 }
}
