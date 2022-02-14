
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sin6_addr; } ;
struct TYPE_6__ {int sin_addr; } ;
struct TYPE_5__ {int sa_family; } ;
union sctp_sockstore {TYPE_1__ sin6; TYPE_3__ sin; TYPE_2__ sa; } ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int u_long ;
struct in_conninfo {int inc6_faddr; int inc_flags; int inc_faddr; int inc_fibnum; } ;




 int VAR_0 ;
 int FUNC_0 (struct in_conninfo*,int ,int) ;
 int FUNC_1 (struct in_conninfo*,int ) ;

void
FUNC_2(union sctp_sockstore *VAR_1, uint16_t VAR_2, uint32_t VAR_3)
{
 struct in_conninfo VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(struct in_conninfo));
 VAR_4.inc_fibnum = VAR_2;
 switch (VAR_1->sa.sa_family) {
 default:
  return;
 }
 FUNC_1(&VAR_4, (u_long)VAR_3);
}
