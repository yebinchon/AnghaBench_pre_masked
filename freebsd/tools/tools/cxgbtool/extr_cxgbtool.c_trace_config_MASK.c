
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
typedef int trace ;
struct ch_trace {int config_tx; int config_rx; int trace_tx; int trace_rx; int invert_match; void* proto_mask; void* proto; void* vlan_mask; void* vlan; void* dport_mask; void* dport; void* sport_mask; void* sport; void* dip_mask; void* dip; void* sip_mask; void* sip; void* intf_mask; void* intf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,struct ch_trace*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (struct ch_trace*,int ,int) ;
 int FUNC_4 (char*,void**,void**) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(int VAR_1, char *VAR_2[], int VAR_3, const char *VAR_4)
{
 uint32_t VAR_5, VAR_6;
 struct ch_trace VAR_7;

 if (VAR_1 == VAR_3)
  return -1;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 if (!FUNC_5(VAR_2[VAR_3], "tx"))
  VAR_7.config_tx = 1;
 else if (!FUNC_5(VAR_2[VAR_3], "rx"))
  VAR_7.config_rx = 1;
 else if (!FUNC_5(VAR_2[VAR_3], "all"))
  VAR_7.config_tx = VAR_7.config_rx = 1;
 else
  FUNC_2(1, "bad trace filter \"%s\"; must be one of \"rx\", "
       "\"tx\" or \"all\"", VAR_2[VAR_3]);

 if (VAR_1 == ++VAR_3)
  return -1;
 if (!FUNC_5(VAR_2[VAR_3], "on")) {
  VAR_7.trace_tx = VAR_7.config_tx;
  VAR_7.trace_rx = VAR_7.config_rx;
 } else if (FUNC_5(VAR_2[VAR_3], "off"))
  FUNC_2(1, "bad argument \"%s\"; must be \"on\" or \"off\"",
       VAR_2[VAR_3]);

 VAR_3++;
 if (VAR_3 < VAR_1 && !FUNC_5(VAR_2[VAR_3], "not")) {
  VAR_7.invert_match = 1;
  VAR_3++;
 }

 while (VAR_3 + 2 <= VAR_1) {
  int VAR_8 = FUNC_4(VAR_2[VAR_3 + 1], &VAR_5, &VAR_6);

  if (!FUNC_5(VAR_2[VAR_3], "interface")) {
   VAR_7.intf = VAR_5;
   VAR_7.intf_mask = VAR_6;
  } else if (!FUNC_5(VAR_2[VAR_3], "sip")) {
   VAR_7.sip = VAR_5;
   VAR_7.sip_mask = VAR_6;
  } else if (!FUNC_5(VAR_2[VAR_3], "dip")) {
   VAR_7.dip = VAR_5;
   VAR_7.dip_mask = VAR_6;
  } else if (!FUNC_5(VAR_2[VAR_3], "sport")) {
   VAR_7.sport = VAR_5;
   VAR_7.sport_mask = VAR_6;
  } else if (!FUNC_5(VAR_2[VAR_3], "dport")) {
   VAR_7.dport = VAR_5;
   VAR_7.dport_mask = VAR_6;
  } else if (!FUNC_5(VAR_2[VAR_3], "vlan")) {
   VAR_7.vlan = VAR_5;
   VAR_7.vlan_mask = VAR_6;
  } else if (!FUNC_5(VAR_2[VAR_3], "proto")) {
   VAR_7.proto = VAR_5;
   VAR_7.proto_mask = VAR_6;
  } else
   FUNC_2(1, "unknown trace parameter \"%s\"\n"
        "known parameters are \"interface\", \"sip\", "
        "\"dip\", \"sport\", \"dport\", \"vlan\", "
        "\"proto\"", VAR_2[VAR_3]);
  if (VAR_8 < 0)
   FUNC_2(1, "bad parameter \"%s\"", VAR_2[VAR_3 + 1]);
  VAR_3 += 2;
 }
 if (VAR_3 != VAR_1)
  FUNC_2(1, "unknown parameter \"%s\"", VAR_2[VAR_3]);

 if (FUNC_0(VAR_4, VAR_0, &VAR_7) < 0)
  FUNC_1(1, "trace");
 return 0;
}
