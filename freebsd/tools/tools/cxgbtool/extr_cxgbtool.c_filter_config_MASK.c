
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_4__ {void* vlan_prio; void* vlan; void* dport; void* sport; int dip; int sip; } ;
struct TYPE_3__ {void* vlan_prio; void* vlan; void* dport; void* sport; int dip; int sip; } ;
struct ch_filter {int mac_addr_idx; int rss; void* filter_id; int mac_hit; int proto; int pass; void* qset; TYPE_2__ mask; TYPE_1__ val; } ;
typedef int op ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ,struct ch_filter*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,char*,char*,...) ;
 int FUNC_3 (char*,void**) ;
 int FUNC_4 (struct ch_filter*,int ,int) ;
 int FUNC_5 (char*,int *,int *) ;
 int FUNC_6 (char*,void**,void**,int) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char*,char*) ;

__attribute__((used)) static int
FUNC_9(int VAR_4, char *VAR_5[], int VAR_6, const char *VAR_7)
{
 int VAR_8 = 0;
 uint32_t VAR_9, VAR_10;
 struct ch_filter VAR_11;

 if (VAR_4 < VAR_6 + 1)
  return -1;

 FUNC_4(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.mac_addr_idx = 0xffff;
 VAR_11.rss = 1;

 if (VAR_4 == VAR_6 + 1 && !FUNC_8(VAR_5[VAR_6], "list")) {
  FUNC_7(VAR_7);
  return 0;
 }

 if (FUNC_3(VAR_5[VAR_6++], &VAR_11.filter_id))
  return -1;
 if (VAR_4 == VAR_6 + 1 && (!FUNC_8(VAR_5[VAR_6], "delete") ||
          !FUNC_8(VAR_5[VAR_6], "clear"))) {
  if (FUNC_0(VAR_7, VAR_0, &VAR_11) < 0) {
   if (VAR_3 == VAR_2)
    FUNC_1(1, "no filter support when offload in use");
   FUNC_1(1, "delete filter");
  }
  return 0;
 }

 while (VAR_6 + 2 <= VAR_4) {
  if (!FUNC_8(VAR_5[VAR_6], "sip")) {
   VAR_8 = FUNC_5(VAR_5[VAR_6 + 1], &VAR_11.val.sip,
        &VAR_11.mask.sip);
  } else if (!FUNC_8(VAR_5[VAR_6], "dip")) {
   VAR_8 = FUNC_5(VAR_5[VAR_6 + 1], &VAR_11.val.dip,
        &VAR_11.mask.dip);
  } else if (!FUNC_8(VAR_5[VAR_6], "sport")) {
   VAR_8 = FUNC_6(VAR_5[VAR_6 + 1],
         &VAR_9, &VAR_10, 0xffff);
   VAR_11.val.sport = VAR_9;
   VAR_11.mask.sport = VAR_10;
  } else if (!FUNC_8(VAR_5[VAR_6], "dport")) {
   VAR_8 = FUNC_6(VAR_5[VAR_6 + 1],
         &VAR_9, &VAR_10, 0xffff);
   VAR_11.val.dport = VAR_9;
   VAR_11.mask.dport = VAR_10;
  } else if (!FUNC_8(VAR_5[VAR_6], "vlan")) {
   VAR_8 = FUNC_6(VAR_5[VAR_6 + 1],
         &VAR_9, &VAR_10, 0xfff);
   VAR_11.val.vlan = VAR_9;
   VAR_11.mask.vlan = VAR_10;
  } else if (!FUNC_8(VAR_5[VAR_6], "prio")) {
   VAR_8 = FUNC_6(VAR_5[VAR_6 + 1],
         &VAR_9, &VAR_10, 7);
   VAR_11.val.vlan_prio = VAR_9;
   VAR_11.mask.vlan_prio = VAR_10;
  } else if (!FUNC_8(VAR_5[VAR_6], "mac")) {
   if (!FUNC_8(VAR_5[VAR_6 + 1], "none"))
    VAR_9 = -1;
   else
    VAR_8 = FUNC_3(VAR_5[VAR_6 + 1], &VAR_9);
   VAR_11.mac_hit = VAR_9 != (uint32_t)-1;
   VAR_11.mac_addr_idx = VAR_11.mac_hit ? VAR_9 : 0;
  } else if (!FUNC_8(VAR_5[VAR_6], "type")) {
   if (!FUNC_8(VAR_5[VAR_6 + 1], "tcp"))
    VAR_11.proto = 1;
   else if (!FUNC_8(VAR_5[VAR_6 + 1], "udp"))
    VAR_11.proto = 2;
   else if (!FUNC_8(VAR_5[VAR_6 + 1], "frag"))
    VAR_11.proto = 3;
   else
    FUNC_2(1, "unknown type \"%s\"; must be one of "
         "\"tcp\", \"udp\", or \"frag\"",
         VAR_5[VAR_6 + 1]);
  } else if (!FUNC_8(VAR_5[VAR_6], "queue")) {
   VAR_8 = FUNC_3(VAR_5[VAR_6 + 1], &VAR_9);
   VAR_11.qset = VAR_9;
   VAR_11.rss = 0;
  } else if (!FUNC_8(VAR_5[VAR_6], "action")) {
   if (!FUNC_8(VAR_5[VAR_6 + 1], "pass"))
    VAR_11.pass = 1;
   else if (FUNC_8(VAR_5[VAR_6 + 1], "drop"))
    FUNC_2(1, "unknown action \"%s\"; must be one of "
         "\"pass\" or \"drop\"",
         VAR_5[VAR_6 + 1]);
  } else
    FUNC_2(1, "unknown filter parameter \"%s\"\n"
        "known parameters are \"mac\", \"sip\", "
        "\"dip\", \"sport\", \"dport\", \"vlan\", "
        "\"prio\", \"type\", \"queue\", and \"action\"",
        VAR_5[VAR_6]);
  if (VAR_8 < 0)
   FUNC_2(1, "bad value \"%s\" for parameter \"%s\"",
        VAR_5[VAR_6 + 1], VAR_5[VAR_6]);
  VAR_6 += 2;
 }
 if (VAR_6 != VAR_4)
  FUNC_2(1, "no value for \"%s\"", VAR_5[VAR_6]);

 if (FUNC_0(VAR_7, VAR_1, &VAR_11) < 0) {
  if (VAR_3 == VAR_2)
   FUNC_1(1, "no filter support when offload in use");
  FUNC_1(1, "set filter");
 }

 return 0;
}
