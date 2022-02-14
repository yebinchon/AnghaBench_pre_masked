
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_addr; } ;
struct inpcb {int inp_flags2; int inp_vflag; TYPE_1__ inp_faddr; int in6p_faddr; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static __inline int
FUNC_2(struct inpcb *VAR_3)
{
  return (VAR_3->inp_faddr.s_addr == FUNC_1(VAR_0));
}
