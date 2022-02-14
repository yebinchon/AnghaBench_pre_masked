
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sb_cc; } ;
struct TYPE_3__ {int sb_cc; } ;
struct xsocket {TYPE_2__ so_snd; TYPE_1__ so_rcv; } ;
struct xinpcb {int inp_vflag; int inp_inc; } ;
struct netinfo {int ni_sndcc; int ni_rcvcc; } ;


 struct netinfo* FUNC_0 (int *,int ,int,char const*) ;

__attribute__((used)) static void
FUNC_1(struct xinpcb *VAR_0, struct xsocket *VAR_1, int VAR_2,
    const char *VAR_3)
{
 struct netinfo *VAR_4;

 if ((VAR_4 = FUNC_0(&VAR_0->inp_inc, VAR_0->inp_vflag, VAR_2, VAR_3)) != ((void*)0)) {
  VAR_4->ni_rcvcc = VAR_1->so_rcv.sb_cc;
  VAR_4->ni_sndcc = VAR_1->so_snd.sb_cc;
 }
}
