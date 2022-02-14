
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipfw_flow_id {int dst_port; int src_port; int dst_ip; int src_ip; int dst_ip6; int src_ip6; } ;
struct in_addr {void* s_addr; } ;
typedef int src ;
typedef int dst ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ipfw_flow_id const*) ;
 int VAR_3 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct in_addr*,char*,int) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int,char*,char*,int,char*,int ,char*,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_5(const struct ipfw_flow_id *VAR_4, int VAR_5,
    int VAR_6, char *VAR_7, char *VAR_8)
{
 struct in_addr VAR_9;



 char VAR_10[VAR_2], VAR_11[VAR_2];
 {
  VAR_9.s_addr = FUNC_1(VAR_4->src_ip);
  FUNC_2(VAR_0, &VAR_9, VAR_10, sizeof(VAR_10));
  VAR_9.s_addr = FUNC_1(VAR_4->dst_ip);
  FUNC_2(VAR_0, &VAR_9, VAR_11, sizeof(VAR_11));
 }
 FUNC_4(VAR_6, "ipfw: %s type %d %s %d -> %s %d, %d %s\n",
     VAR_7, VAR_5, VAR_10, VAR_4->src_port, VAR_11,
     VAR_4->dst_port, VAR_3, VAR_8);
}
