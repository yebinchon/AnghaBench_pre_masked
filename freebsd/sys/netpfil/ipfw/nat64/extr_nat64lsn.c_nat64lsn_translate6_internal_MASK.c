
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct pfloghdr {int dummy; } ;
struct nat64lsn_state {scalar_t__ timestamp; int flags; int aport; int ip_src; } ;
struct TYPE_2__ {int flags; } ;
struct nat64lsn_cfg {int nomatch_verdict; TYPE_1__ base; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mbuf*,int ,int ,TYPE_1__*,struct pfloghdr*) ;
 int FUNC_4 (struct pfloghdr*,struct mbuf*,int ,struct nat64lsn_state*) ;

__attribute__((used)) static int
FUNC_5(struct nat64lsn_cfg *VAR_5, struct mbuf **VAR_6,
    struct nat64lsn_state *VAR_7, uint8_t VAR_8)
{
 struct pfloghdr VAR_9, *VAR_10;
 int VAR_11;
 uint16_t VAR_12;


 FUNC_0(VAR_12);
 if (VAR_7->timestamp != VAR_12)
  VAR_7->timestamp = VAR_12;
 if ((VAR_7->flags & VAR_8) != 0)
  VAR_7->flags |= VAR_8;

 if (VAR_5->base.flags & VAR_4) {
  VAR_10 = &VAR_9;
  FUNC_4(VAR_10, *VAR_6, VAR_0, VAR_7);
 } else
  VAR_10 = ((void*)0);

 VAR_11 = FUNC_3(*VAR_6, FUNC_1(VAR_7->ip_src),
     FUNC_2(VAR_7->aport), &VAR_5->base, VAR_10);
 if (VAR_11 == VAR_3)
  return (VAR_5->nomatch_verdict);
 if (VAR_11 == VAR_2)
  *VAR_6 = ((void*)0);
 return (VAR_1);
}
