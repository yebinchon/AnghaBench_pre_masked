
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {scalar_t__ sa_family; } ;
struct TYPE_3__ {TYPE_2__ sa; } ;
struct sctp_ifa {int localifa_flags; int src_is_loop; scalar_t__ src_is_priv; TYPE_1__ address; } ;
typedef scalar_t__ sa_family_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct sctp_ifa *
FUNC_2(struct sctp_ifa *VAR_3,
    uint8_t VAR_4,
    uint8_t VAR_5,
    sa_family_t VAR_6)
{
 uint8_t VAR_7 = 0;
 if (VAR_3->address.sa.sa_family != VAR_6) {

  FUNC_0(VAR_2, "ifa_fam:%d fam:%d\n",
      VAR_3->address.sa.sa_family, VAR_6);
  return (((void*)0));
 }

 FUNC_1(VAR_2, &VAR_3->address.sa);
 FUNC_0(VAR_2, "dst_is_loop:%d dest_is_priv:%d\n",
     VAR_4, VAR_5);
 if ((VAR_4 == 0) && (VAR_5 == 0)) {
  VAR_7 = 1;
 }
 FUNC_0(VAR_2, "ifa->src_is_loop:%d dest_is_priv:%d\n",
     VAR_3->src_is_loop,
     VAR_5);
 if ((VAR_3->src_is_loop == 1) && (VAR_5)) {
  return (((void*)0));
 }
 FUNC_0(VAR_2, "ifa->src_is_loop:%d dest_is_glob:%d\n",
     VAR_3->src_is_loop,
     VAR_7);
 if ((VAR_3->src_is_loop == 1) && (VAR_7)) {
  return (((void*)0));
 }
 FUNC_0(VAR_2, "address is acceptable\n");

 return (VAR_3);
}
