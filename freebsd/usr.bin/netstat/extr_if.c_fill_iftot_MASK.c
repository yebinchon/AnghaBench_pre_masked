
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iftot {int ift_co; int ift_ob; int ift_od; int ift_oe; int ift_op; int ift_ib; int ift_id; int ift_ie; int ift_ip; } ;
struct ifaddrs {int ifa_name; TYPE_1__* ifa_addr; struct ifaddrs* ifa_next; } ;
struct TYPE_2__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct iftot*,int) ;
 int VAR_3 ;
 int FUNC_2 (struct ifaddrs*) ;
 scalar_t__ FUNC_3 (struct ifaddrs**) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_6(struct iftot *VAR_13)
{
 struct ifaddrs *VAR_14, *VAR_15;
 bool VAR_16 = 0;

 if (FUNC_3(&VAR_14) != 0)
  FUNC_5(VAR_2, "getifaddrs");

 FUNC_1(VAR_13, sizeof(*VAR_13));

 for (VAR_15 = VAR_14; VAR_15; VAR_15 = VAR_15->ifa_next) {
  if (VAR_15->ifa_addr->sa_family != VAR_0)
   continue;
  if (VAR_6) {
   if (FUNC_4(VAR_15->ifa_name, VAR_6) == 0)
    VAR_16 = 1;
   else
    continue;
  }

  VAR_13->ift_ip += FUNC_0(VAR_7);
  VAR_13->ift_ie += FUNC_0(VAR_5);
  VAR_13->ift_id += FUNC_0(VAR_8);
  VAR_13->ift_ib += FUNC_0(VAR_4);
  VAR_13->ift_op += FUNC_0(VAR_11);
  VAR_13->ift_oe += FUNC_0(VAR_10);
  VAR_13->ift_od += FUNC_0(VAR_12);
  VAR_13->ift_ob += FUNC_0(VAR_9);
   VAR_13->ift_co += FUNC_0(VAR_3);
 }

 if (VAR_6 && VAR_16 == 0)
  FUNC_5(VAR_1, "interface %s not found", VAR_6);

 FUNC_2(VAR_14);
}
