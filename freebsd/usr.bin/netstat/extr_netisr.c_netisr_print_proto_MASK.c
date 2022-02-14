
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct sysctl_netisr_proto {scalar_t__ snp_policy; int snp_flags; int snp_dispatch; int snp_qlimit; int snp_proto; int snp_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static void
FUNC_2(struct sysctl_netisr_proto *VAR_6)
{
 char VAR_7[20];

 FUNC_1("{[:-6}{k:name/%s}{]:}", VAR_6->snp_name);
 FUNC_1(" {:protocol/%5u}", VAR_6->snp_proto);
 FUNC_1(" {:queue-limit/%6u}", VAR_6->snp_qlimit);
 FUNC_1(" {:policy-type/%6s}",
     (VAR_6->snp_policy == VAR_2) ? "source" :
     (VAR_6->snp_policy == VAR_1) ? "flow" :
     (VAR_6->snp_policy == VAR_0) ? "cpu" : "-");
 FUNC_0(VAR_6->snp_dispatch, VAR_7,
     sizeof(VAR_7));
 FUNC_1(" {:policy/%8s}", VAR_7);
 FUNC_1("   {:flags/%s%s%s}\n",
     (VAR_6->snp_flags & VAR_4) ? "C" : "-",
     (VAR_6->snp_flags & VAR_3) ? "D" : "-",
     (VAR_6->snp_flags & VAR_5) ? "F" : "-");
}
