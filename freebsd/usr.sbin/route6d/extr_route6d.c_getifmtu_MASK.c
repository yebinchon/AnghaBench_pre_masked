
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ifi_mtu; } ;
struct if_msghdr {int ifm_index; TYPE_1__ ifm_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int*,int ,char*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_5(int VAR_4)
{
 int VAR_5[6];
 char *VAR_6;
 size_t VAR_7;
 struct if_msghdr *VAR_8;
 int VAR_9;

 VAR_5[0] = VAR_1;
 VAR_5[1] = VAR_3;
 VAR_5[2] = 0;
 VAR_5[3] = VAR_0;
 VAR_5[4] = VAR_2;
 VAR_5[5] = VAR_4;
 if (FUNC_4(VAR_5, FUNC_3(VAR_5), ((void*)0), &VAR_7, ((void*)0), 0) < 0) {
  FUNC_0("sysctl estimate NET_RT_IFLIST");

 }
 if ((VAR_6 = FUNC_2(VAR_7)) == ((void*)0)) {
  FUNC_0("malloc");

 }
 if (FUNC_4(VAR_5, FUNC_3(VAR_5), VAR_6, &VAR_7, ((void*)0), 0) < 0) {
  FUNC_0("sysctl NET_RT_IFLIST");

 }
 VAR_8 = (struct if_msghdr *)(void *)VAR_6;
 VAR_9 = VAR_8->ifm_data.ifi_mtu;
 if (VAR_4 != VAR_8->ifm_index) {
  FUNC_0("ifindex does not match with ifm_index");

 }
 FUNC_1(VAR_6);
 return VAR_9;
}
