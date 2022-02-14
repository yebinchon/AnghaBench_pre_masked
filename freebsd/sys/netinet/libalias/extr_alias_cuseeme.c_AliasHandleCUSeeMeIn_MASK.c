
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct udphdr {int uh_ulen; } ;
struct oc_header {int client_count; } ;
struct libalias {int dummy; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct ip {TYPE_1__ ip_dst; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct cu_header {int data_type; scalar_t__ dest_addr; } ;
struct client_info {scalar_t__ address; } ;


 struct udphdr* FUNC_0 (struct ip*) ;
 int FUNC_1 (int ) ;
 struct cu_header* FUNC_2 (struct udphdr*) ;

__attribute__((used)) static void
FUNC_3(struct libalias *VAR_0, struct ip *VAR_1, struct in_addr VAR_2)
{
 struct in_addr VAR_3;
 struct udphdr *VAR_4;
 struct cu_header *VAR_5;
 struct oc_header *VAR_6;
 struct client_info *VAR_7;
 char *VAR_8;
 int VAR_9;

 (void)VAR_0;
 VAR_3.s_addr = VAR_1->ip_dst.s_addr;
 VAR_4 = FUNC_0(VAR_1);
 VAR_5 = FUNC_2(VAR_4);
 VAR_6 = (struct oc_header *)(VAR_5 + 1);
 VAR_7 = (struct client_info *)(VAR_6 + 1);
 VAR_8 = (char *)VAR_4 + FUNC_1(VAR_4->uh_ulen);

 if ((char *)VAR_6 <= VAR_8) {
  if (VAR_5->dest_addr)
   VAR_5->dest_addr = (u_int32_t) VAR_2.s_addr;
  if (FUNC_1(VAR_5->data_type) == 101)

   for (VAR_9 = 0; (char *)(VAR_7 + 1) <= VAR_8 && VAR_9 < VAR_6->client_count; VAR_9++, VAR_7++)
    if (VAR_7->address == (u_int32_t) VAR_3.s_addr) {
     VAR_7->address = (u_int32_t) VAR_2.s_addr;
     break;
    }
 }
}
