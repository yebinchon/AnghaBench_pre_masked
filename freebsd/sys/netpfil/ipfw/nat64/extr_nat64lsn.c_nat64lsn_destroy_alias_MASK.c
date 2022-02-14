
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat64lsn_pg {int dummy; } ;
struct nat64lsn_cfg {int dummy; } ;
struct nat64lsn_alias {int * icmp; int icmp_chunkmask; int * udp; int udp_chunkmask; int * tcp; int tcp_chunkmask; int portgroups; } ;


 int FUNC_0 (struct nat64lsn_alias*) ;
 int FUNC_1 (int *) ;
 struct nat64lsn_pg* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int VAR_0 ;
 int FUNC_5 (struct nat64lsn_pg*) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct nat64lsn_cfg *VAR_2,
    struct nat64lsn_alias *VAR_3)
{
 struct nat64lsn_pg *VAR_4;
 int VAR_5;

 while (!FUNC_1(&VAR_3->portgroups)) {
  VAR_4 = FUNC_2(&VAR_3->portgroups);
  FUNC_3(&VAR_3->portgroups, VAR_0);
  FUNC_5(VAR_4);
 }
 for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
  if (FUNC_4(VAR_3->tcp_chunkmask, VAR_5))
   FUNC_6(VAR_1, VAR_3->tcp[VAR_5]);
  if (FUNC_4(VAR_3->udp_chunkmask, VAR_5))
   FUNC_6(VAR_1, VAR_3->udp[VAR_5]);
  if (FUNC_4(VAR_3->icmp_chunkmask, VAR_5))
   FUNC_6(VAR_1, VAR_3->icmp[VAR_5]);
 }
 FUNC_0(VAR_3);
}
