
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rcar_du_plane_state {unsigned int hwindex; scalar_t__ source; TYPE_1__* format; } ;
struct rcar_du_group {int dummy; } ;
struct TYPE_2__ {int planes; scalar_t__ fourcc; int edf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct rcar_du_group*,unsigned int,struct rcar_du_plane_state const*) ;
 int FUNC_1 (struct rcar_du_group*,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct rcar_du_group *VAR_12,
         unsigned int VAR_13,
         const struct rcar_du_plane_state *VAR_14)
{
 u32 VAR_15 = VAR_3;
 u32 VAR_16;
 FUNC_0(VAR_12, VAR_13, VAR_14);

 if (VAR_14->format->planes == 2) {
  if (VAR_14->hwindex != VAR_13) {
   if (VAR_14->format->fourcc == VAR_0 ||
       VAR_14->format->fourcc == VAR_1)
    VAR_15 |= VAR_7;

   if (VAR_14->format->fourcc == VAR_1)
    VAR_15 |= VAR_6;

   VAR_15 |= VAR_4;
  } else {
   VAR_15 |= VAR_5;
  }
 }

 FUNC_1(VAR_12, VAR_13, VAR_2, VAR_15);

 VAR_16 = VAR_14->format->edf | VAR_9;
 if (VAR_14->source != VAR_11)
  VAR_16 |= VAR_10;

 FUNC_1(VAR_12, VAR_13, VAR_8, VAR_16);
}
