
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct ipfw_flow_id {int dummy; } ;
struct ip_fw {int rulenum; int id; } ;
struct dyn_parent {int dummy; } ;
struct dyn_ipv6_state {struct dyn_parent* limit; } ;
struct dyn_ipv4_state {struct dyn_parent* limit; } ;
typedef int sbuf ;


 scalar_t__ FUNC_0 (struct dyn_parent*) ;
 int FUNC_1 (struct dyn_parent*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (struct ipfw_flow_id const*) ;
 scalar_t__ FUNC_7 (struct ipfw_flow_id const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct dyn_ipv4_state* FUNC_8 (struct ip_fw*,int ,int,struct ipfw_flow_id const*,scalar_t__,scalar_t__,int ) ;
 struct dyn_ipv6_state* FUNC_9 (struct ip_fw*,int ,int,struct ipfw_flow_id const*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 struct dyn_ipv4_state* FUNC_10 (struct ipfw_flow_id const*,struct ip_fw*,int ,int,scalar_t__) ;
 struct dyn_ipv6_state* FUNC_11 (struct ipfw_flow_id const*,scalar_t__,struct ip_fw*,int ,int,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (struct ipfw_flow_id const*,int ,int,char*,char*) ;
 int FUNC_13 (char*,int,char*,int) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void *
FUNC_14(const struct ipfw_flow_id *VAR_9, uint32_t VAR_10,
    struct ip_fw *VAR_11, uint32_t VAR_12, uint32_t VAR_13, uint16_t VAR_14)
{
 char VAR_15[24];
 struct dyn_parent *VAR_16;
 void *VAR_17;
 uint32_t VAR_18, VAR_19;

 VAR_16 = ((void*)0);
 VAR_17 = ((void*)0);
 VAR_18 = FUNC_4(VAR_12, VAR_3);
 FUNC_2();
 if (FUNC_6(VAR_9)) {
  struct dyn_ipv4_state *VAR_20;

  VAR_19 = FUNC_5(VAR_18, VAR_5);
  VAR_20 = FUNC_10(VAR_9, VAR_11, VAR_11->id,
      VAR_11->rulenum, VAR_18);
  if (VAR_20 == ((void*)0)) {




   FUNC_3();

   VAR_20 = FUNC_8(VAR_11, VAR_11->id,
       VAR_11->rulenum, VAR_9, VAR_12, VAR_19, VAR_14);
   if (VAR_20 == ((void*)0))
    return (((void*)0));

  }
  VAR_17 = VAR_20;
  VAR_16 = VAR_20->limit;
 }
 else {
  FUNC_3();
  return (((void*)0));
 }


 if (FUNC_0(VAR_16) >= VAR_13) {
  FUNC_3();
  if (VAR_4 && VAR_7 != VAR_8) {
   VAR_7 = VAR_8;
   FUNC_13(VAR_15, sizeof(VAR_15), "%u drop session",
       VAR_11->rulenum);
   FUNC_12(VAR_9, VAR_2,
       VAR_1 | VAR_0, VAR_15,
       "too many entries");
  }
  return (((void*)0));
 }


 FUNC_1(VAR_16);







 FUNC_3();
 return (VAR_17);
}
