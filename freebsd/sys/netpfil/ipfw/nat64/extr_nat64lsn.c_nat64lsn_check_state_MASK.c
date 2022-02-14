
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat64lsn_state {int proto; int flags; int timestamp; } ;
struct nat64lsn_cfg {int st_close_ttl; int st_estab_ttl; int st_syn_ttl; int st_udp_ttl; int st_icmp_ttl; } ;


 int FUNC_0 (int ) ;



 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct nat64lsn_cfg *VAR_5, struct nat64lsn_state *VAR_6)
{
 int VAR_7, VAR_8;


 if (FUNC_1(VAR_6->flags, VAR_1))
  return (1);


 if (!FUNC_1(VAR_6->flags, VAR_0))
  return (0);

 VAR_7 = FUNC_0(VAR_6->timestamp);
 switch (VAR_6->proto) {
 case 129:
  if (FUNC_1(VAR_6->flags, VAR_3))
   VAR_8 = VAR_5->st_close_ttl;
  else if (FUNC_1(VAR_6->flags, VAR_2))
   VAR_8 = VAR_5->st_estab_ttl;
  else if (FUNC_1(VAR_6->flags, VAR_4))
   VAR_8 = VAR_5->st_syn_ttl;
  else
   VAR_8 = VAR_5->st_syn_ttl;
  if (VAR_7 > VAR_8)
   return (1);
  break;
 case 128:
  if (VAR_7 > VAR_5->st_udp_ttl)
   return (1);
  break;
 case 130:
  if (VAR_7 > VAR_5->st_icmp_ttl)
   return (1);
  break;
 }
 return (0);
}
