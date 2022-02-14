
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct ifreq {int ifr_name; } ;
struct ifaddrs {int ifa_flags; TYPE_2__* ifa_addr; int ifa_name; struct ifaddrs* ifa_next; } ;
typedef int in_addr_t ;
typedef int ifr ;
struct TYPE_4__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct ifaddrs*) ;
 int FUNC_4 (struct ifaddrs**) ;
 int FUNC_5 (int,int ,struct ifreq*) ;
 int FUNC_6 (struct ifreq*,int ,int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_10(in_addr_t *VAR_7)
{
 struct ifreq VAR_8;
 struct ifaddrs *VAR_9, *VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = FUNC_7("/dev/bpf0", VAR_5);
 if (VAR_12 < 0 && VAR_6 == VAR_2)
  FUNC_2("no BPF device available");
 FUNC_1(VAR_12 >= 0, "open(/dev/bpf0): %s", FUNC_8(VAR_6));

 VAR_11 = FUNC_4(&VAR_10);
 FUNC_0(VAR_11 == 0);
 for (VAR_9 = VAR_10; VAR_9 != ((void*)0); VAR_9 = VAR_9->ifa_next)
  if ((VAR_9->ifa_flags & VAR_3) != 0 &&
      VAR_9->ifa_addr->sa_family == VAR_0)
   break;
 if (VAR_9 == ((void*)0))
  FUNC_2("no loopback address found");

 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 FUNC_9(VAR_8.ifr_name, VAR_9->ifa_name, VAR_4);
 VAR_11 = FUNC_5(VAR_12, VAR_1, &VAR_8);
 FUNC_1(VAR_11 == 0, "ioctl(BIOCSETIF): %s", FUNC_8(VAR_6));

 *VAR_7 = ((struct sockaddr_in *)(void *)VAR_9->ifa_addr)->sin_addr.s_addr;

 FUNC_3(VAR_10);

 return (VAR_12);
}
