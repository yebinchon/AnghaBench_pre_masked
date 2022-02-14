
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char const* uint32_t ;
struct sockaddr {int dummy; } ;
struct sctp_vrf {int vrf_id; } ;
struct sctp_ifa {int localifa_flags; TYPE_1__* ifn_p; } ;
struct TYPE_2__ {char const* ifn_name; char const* ifn_index; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct sctp_ifa* FUNC_3 (struct sockaddr*,int ,int ) ;
 struct sctp_vrf* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*,int ) ;

void
FUNC_6(uint32_t VAR_5, struct sockaddr *VAR_6,
    const char *VAR_7, uint32_t VAR_8)
{
 struct sctp_vrf *VAR_9;
 struct sctp_ifa *VAR_10;

 FUNC_1();
 VAR_9 = FUNC_4(VAR_5);
 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_3, "Can't find vrf_id 0x%x\n", VAR_5);
  goto out;

 }
 VAR_10 = FUNC_3(VAR_6, VAR_9->vrf_id, VAR_1);
 if (VAR_10 == ((void*)0)) {
  FUNC_0(VAR_3, "Can't find sctp_ifap for address\n");
  goto out;
 }
 if (VAR_10->ifn_p == ((void*)0)) {
  FUNC_0(VAR_3, "IFA has no IFN - can't mark unusable\n");
  goto out;
 }
 if (VAR_7) {
  if (FUNC_5(VAR_7, VAR_10->ifn_p->ifn_name, VAR_4) != 0) {
   FUNC_0(VAR_3, "IFN %s of IFA not the same as %s\n",
       VAR_10->ifn_p->ifn_name, VAR_7);
   goto out;
  }
 } else {
  if (VAR_10->ifn_p->ifn_index != VAR_8) {
   FUNC_0(VAR_3, "IFA owned by ifn_index:%d down command for ifn_index:%d - ignored\n",
       VAR_10->ifn_p->ifn_index, VAR_8);
   goto out;
  }
 }

 VAR_10->localifa_flags &= (~VAR_2);
 VAR_10->localifa_flags |= VAR_0;
out:
 FUNC_2();
}
