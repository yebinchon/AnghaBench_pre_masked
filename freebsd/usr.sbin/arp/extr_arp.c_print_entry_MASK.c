
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {scalar_t__ tv_sec; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr_dl {scalar_t__ sdl_alen; int sdl_type; int sdl_nlen; scalar_t__ sdl_index; } ;
struct TYPE_2__ {scalar_t__ rmx_expire; } ;
struct rt_msghdr {int rtm_flags; TYPE_1__ rtm_rmx; } ;
struct if_nameindex {scalar_t__ if_index; scalar_t__ if_name; } ;
struct hostent {char* h_name; } ;
struct ether_addr {int dummy; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;







 scalar_t__ FUNC_0 (struct sockaddr_dl*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (struct ether_addr*) ;
 scalar_t__ VAR_5 ;
 struct hostent* FUNC_3 (int ,int,int ) ;
 scalar_t__ VAR_6 ;
 struct if_nameindex* FUNC_4 () ;
 struct if_nameindex* VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sockaddr_dl*) ;
 int VAR_8 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(struct sockaddr_dl *VAR_9,
 struct sockaddr_in *VAR_10, struct rt_msghdr *VAR_11)
{
 const char *VAR_12;
 struct hostent *VAR_13;
 struct if_nameindex *VAR_14;

 if (VAR_7 == ((void*)0))
  if ((VAR_7 = FUNC_4()) == ((void*)0))
   FUNC_9(1, "cannot retrieve interface names");

 FUNC_10("arp-cache");

 if (VAR_8 == 0)
  VAR_13 = FUNC_3((caddr_t)&(VAR_10->sin_addr),
      sizeof VAR_10->sin_addr, VAR_0);
 else
  VAR_13 = 0;
 if (VAR_13)
  VAR_12 = VAR_13->h_name;
 else {
  VAR_12 = "?";
  if (VAR_6 == VAR_4)
   VAR_8 = 1;
 }
 FUNC_8("{:hostname/%s} ({:ip-address/%s}) at ", VAR_12,
     FUNC_5(VAR_10->sin_addr));
 if (VAR_9->sdl_alen) {
  if ((VAR_9->sdl_type == 132 ||
      VAR_9->sdl_type == 128 ||
      VAR_9->sdl_type == 133) &&
      VAR_9->sdl_alen == VAR_2)
   FUNC_8("{:mac-address/%s}",
       FUNC_2((struct ether_addr *)FUNC_0(VAR_9)));
  else {
   int VAR_15 = VAR_9->sdl_nlen > 0 ? VAR_9->sdl_nlen + 1 : 0;

   FUNC_8("{:mac-address/%s}", FUNC_6(VAR_9) + VAR_15);
  }
 } else
  FUNC_8("{d:/(incomplete)}{en:incomplete/true}");

 for (VAR_14 = VAR_7; VAR_14 && VAR_7->if_index &&
     VAR_7->if_name; VAR_14++) {
  if (VAR_14->if_index == VAR_9->sdl_index) {
   FUNC_8(" on {:interface/%s}", VAR_14->if_name);
   break;
  }
 }

 if (VAR_11->rtm_rmx.rmx_expire == 0)
  FUNC_8("{d:/ permanent}{en:permanent/true}");
 else {
  static struct timespec VAR_16;
  if (VAR_16.tv_sec == 0)
   FUNC_1(VAR_1, &VAR_16);
  if ((VAR_5 = VAR_11->rtm_rmx.rmx_expire - VAR_16.tv_sec) > 0)
   FUNC_8(" expires in {:expires/%d} seconds",
       (int)VAR_5);
  else
   FUNC_8("{d:/ expired}{en:expired/true}");
 }

 if (VAR_11->rtm_flags & VAR_3)
  FUNC_8("{d:/ published}{en:published/true}");

 switch(VAR_9->sdl_type) {
 case 132:
  FUNC_8(" [{:type/ethernet}]");
  break;
 case 131:
  FUNC_8(" [{:type/fddi}]");
  break;
 case 134:
  FUNC_8(" [{:type/atm}]");
  break;
 case 128:
  FUNC_8(" [{:type/vlan}]");
  break;
 case 130:
  FUNC_8(" [{:type/firewire}]");
  break;
 case 133:
  FUNC_8(" [{:type/bridge}]");
  break;
 case 129:
  FUNC_8(" [{:type/infiniband}]");
  break;
 default:
  break;
 }

 FUNC_8("\n");

 FUNC_7("arp-cache");
}
