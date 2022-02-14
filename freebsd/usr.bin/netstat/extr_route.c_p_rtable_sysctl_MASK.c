
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_dl {int sdl_index; } ;
struct sockaddr {int sa_family; } ;
struct rt_msghdr {scalar_t__ rtm_version; int rtm_msglen; } ;
struct ifmap_entry {int dummy; } ;
struct ifaddrs {int ifa_name; TYPE_1__* ifa_addr; struct ifaddrs* ifa_next; } ;
struct TYPE_7__ {char* ifname; } ;
struct TYPE_6__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,char*,unsigned long) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct ifaddrs*) ;
 scalar_t__ FUNC_7 (struct ifaddrs**) ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 char* FUNC_8 (size_t) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (char*,struct rt_msghdr*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 TYPE_2__* FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (char*,int ,int ) ;
 scalar_t__ FUNC_17 (int*,int ,char*,size_t*,int *,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (char*) ;

__attribute__((used)) static void
FUNC_24(int VAR_17, int VAR_18)
{
 size_t VAR_19;
 int VAR_20[7];
 char *VAR_21, *VAR_22, *VAR_23;
 struct rt_msghdr *VAR_24;
 struct sockaddr *VAR_25;
 int VAR_26 = VAR_1, VAR_27 = 0, VAR_28;
 int VAR_29 = 0;

 struct ifaddrs *VAR_30, *VAR_31;
 struct sockaddr_dl *VAR_32;





 if (FUNC_7(&VAR_30) != 0)
  FUNC_3(VAR_3, "getifaddrs");

 for (VAR_31 = VAR_30; VAR_31; VAR_31 = VAR_31->ifa_next) {

  if (VAR_31->ifa_addr->sa_family != VAR_0)
   continue;

  VAR_32 = (struct sockaddr_dl *)VAR_31->ifa_addr;
  VAR_27 = VAR_32->sdl_index;

  if (VAR_27 >= VAR_9) {
   VAR_28 = FUNC_15(VAR_27 + 1, 32) *
       sizeof(struct ifmap_entry);
   if ((VAR_8 = FUNC_14(VAR_8, VAR_28)) == ((void*)0))
    FUNC_4(2, "realloc(%d) failed", VAR_28);
   FUNC_9(&VAR_8[VAR_9], 0,
       VAR_28 - VAR_9 *
       sizeof(struct ifmap_entry));

   VAR_9 = FUNC_15(VAR_27 + 1, 32);
  }

  if (*VAR_8[VAR_27].ifname != '\0')
   continue;

  FUNC_16(VAR_8[VAR_27].ifname, VAR_31->ifa_name, VAR_4);
 }

 FUNC_6(VAR_30);

 VAR_20[0] = VAR_2;
 VAR_20[1] = VAR_6;
 VAR_20[2] = 0;
 VAR_20[3] = VAR_18;
 VAR_20[4] = VAR_5;
 VAR_20[5] = 0;
 VAR_20[6] = VAR_17;
 if (FUNC_17(VAR_20, FUNC_10(VAR_20), ((void*)0), &VAR_19, ((void*)0), 0) < 0)
  FUNC_3(VAR_3, "sysctl: net.route.0.%d.dump.%d estimate", VAR_18,
      VAR_17);
 if ((VAR_21 = FUNC_8(VAR_19)) == ((void*)0))
  FUNC_4(2, "malloc(%lu)", (unsigned long)VAR_19);
 if (FUNC_17(VAR_20, FUNC_10(VAR_20), VAR_21, &VAR_19, ((void*)0), 0) < 0)
  FUNC_3(1, "sysctl: net.route.0.%d.dump.%d", VAR_18, VAR_17);
 VAR_23 = VAR_21 + VAR_19;
 FUNC_21("route-table");
 FUNC_23("rt-family");
 for (VAR_22 = VAR_21; VAR_22 < VAR_23; VAR_22 += VAR_24->rtm_msglen) {
  VAR_24 = (struct rt_msghdr *)VAR_22;
  if (VAR_24->rtm_version != VAR_7)
   continue;



  VAR_25 = (struct sockaddr *)(VAR_24 + 1);

  if (VAR_26 != VAR_25->sa_family) {
   if (VAR_29) {
    FUNC_20("rt-entry");
    FUNC_19("rt-family");
   }
   VAR_29 = 1;

   VAR_26 = VAR_25->sa_family;
   VAR_10 = FUNC_0(VAR_26);
   VAR_13 = FUNC_1(VAR_26);
   VAR_12 = 6;
   VAR_16 = 8;
   VAR_15 = 6;
   VAR_14 = FUNC_2(VAR_26);
   VAR_11 = 6;
   FUNC_22("rt-family");
   FUNC_12(VAR_26);
   FUNC_23("rt-entry");

   FUNC_13(VAR_26);
  }
  FUNC_11("rt-entry", VAR_24);
 }
 if (VAR_29) {
  FUNC_20("rt-entry");
  FUNC_19("rt-family");
 }
 FUNC_20("rt-family");
 FUNC_18("route-table");
 FUNC_5(VAR_21);
}
