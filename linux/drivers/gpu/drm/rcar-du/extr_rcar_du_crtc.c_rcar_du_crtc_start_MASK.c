
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ mode; } ;
struct rcar_du_crtc {int group; TYPE_2__ crtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rcar_du_crtc*,int,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct rcar_du_crtc *VAR_5)
{
 bool VAR_6;






 VAR_6 = VAR_5->crtc.mode.flags & VAR_0;
 FUNC_0(VAR_5, VAR_3 | VAR_2,
       (VAR_6 ? VAR_1 : 0) |
       VAR_4);

 FUNC_1(VAR_5->group, 1);
}
