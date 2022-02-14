
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_ifn {int ifa_count; int registered_af; int ifn_index; int num_v6; int num_v4; int refcount; int ifalist; } ;
struct TYPE_3__ {int sa_family; } ;
struct TYPE_4__ {TYPE_1__ sa; } ;
struct sctp_ifa {TYPE_2__ address; struct sctp_ifn* ifn_p; } ;




 int FUNC_0 (int *,struct sctp_ifa*,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct sctp_ifn *VAR_1, struct sctp_ifa *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_1->ifalist, VAR_2, VAR_0);
 VAR_2->ifn_p = VAR_1;
 FUNC_2(&VAR_2->ifn_p->refcount, 1);

 VAR_1->ifa_count++;
 VAR_3 = VAR_2->address.sa.sa_family;
 switch (VAR_3) {
 default:
  break;
 }
 if (VAR_1->ifa_count == 1) {

  FUNC_1(VAR_1->ifn_index, VAR_3);
  VAR_1->registered_af = VAR_3;
 }
}
