
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* s_addr; } ;
struct TYPE_3__ {void* s_addr; } ;
struct ip {int ip_hl; int ip_v; int ip_ttl; TYPE_2__ ip_dst; TYPE_1__ ip_src; scalar_t__ ip_sum; int ip_p; scalar_t__ ip_off; scalar_t__ ip_id; int ip_len; scalar_t__ ip_tos; } ;
struct lopacket {struct ip hdr; int family; } ;
typedef void* in_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 struct lopacket* FUNC_2 (size_t) ;
 int FUNC_3 (struct lopacket*,int ,size_t) ;
 int FUNC_4 (struct ip*) ;

__attribute__((used)) static struct lopacket *
FUNC_5(in_addr_t VAR_2, size_t VAR_3)
{
 struct ip *VAR_4;
 struct lopacket *VAR_5;
 size_t VAR_6;

 VAR_6 = sizeof(*VAR_5) + VAR_3;
 VAR_5 = FUNC_2(VAR_6);
 FUNC_0(VAR_5 != ((void*)0));

 FUNC_3(VAR_5, 0, VAR_6);
 VAR_5->family = VAR_0;

 VAR_4 = &VAR_5->hdr;
 VAR_4->ip_hl = sizeof(struct ip) >> 2;
 VAR_4->ip_v = 4;
 VAR_4->ip_tos = 0;
 VAR_4->ip_len = FUNC_1(sizeof(*VAR_4) + VAR_3);
 VAR_4->ip_id = 0;
 VAR_4->ip_off = 0;
 VAR_4->ip_ttl = 1;
 VAR_4->ip_p = VAR_1;
 VAR_4->ip_sum = 0;
 VAR_4->ip_src.s_addr = VAR_2;
 VAR_4->ip_dst.s_addr = VAR_2;
 FUNC_4(VAR_4);

 return (VAR_5);
}
