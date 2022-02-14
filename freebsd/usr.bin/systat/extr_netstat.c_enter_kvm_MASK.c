
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sb_ccc; } ;
struct TYPE_3__ {int sb_ccc; } ;
struct socket {TYPE_2__ so_snd; TYPE_1__ so_rcv; } ;
struct netinfo {int ni_sndcc; int ni_rcvcc; } ;
struct inpcb {int inp_vflag; int inp_inc; } ;


 struct netinfo* FUNC_0 (int *,int ,int,char const*) ;

__attribute__((used)) static void
FUNC_1(struct inpcb *VAR_0, struct socket *VAR_1, int VAR_2, const char *VAR_3)
{
 struct netinfo *VAR_4;

 if ((VAR_4 = FUNC_0(&VAR_0->inp_inc, VAR_0->inp_vflag, VAR_2, VAR_3)) != ((void*)0)) {
  VAR_4->ni_rcvcc = VAR_1->so_rcv.sb_ccc;
  VAR_4->ni_sndcc = VAR_1->so_snd.sb_ccc;
 }
}
