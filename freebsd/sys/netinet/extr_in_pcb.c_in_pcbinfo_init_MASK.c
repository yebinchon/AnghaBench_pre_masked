
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uma_init ;
typedef int u_int ;
struct inpcbinfo {int ipi_zone; int ipi_lbgrouphashmask; void* ipi_lbgrouphashbase; int ipi_porthashmask; void* ipi_porthashbase; int ipi_hashmask; void* ipi_hashbase; scalar_t__ ipi_count; struct inpcbhead* ipi_listhead; int ipi_vnet; } ;
struct inpcbhead {int dummy; } ;
struct inpcb {int dummy; } ;


 int FUNC_0 (struct inpcbhead*) ;
 int FUNC_1 (struct inpcbinfo*,char*) ;
 int FUNC_2 (struct inpcbinfo*,char const*) ;
 int FUNC_3 (struct inpcbinfo*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_4 (int,int ,int *) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (struct inpcbinfo*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char*,int,int *,int *,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char*) ;

void
FUNC_10(struct inpcbinfo *VAR_6, const char *VAR_7,
    struct inpcbhead *VAR_8, int VAR_9, int VAR_10,
    char *VAR_11, uma_init VAR_12, u_int VAR_13)
{

 VAR_10 = FUNC_5(VAR_10, VAR_0 + 1);

 FUNC_2(VAR_6, VAR_7);
 FUNC_1(VAR_6, "pcbinfohash");
 FUNC_3(VAR_6, "pcbinfolist");



 VAR_6->ipi_listhead = VAR_8;
 FUNC_0(VAR_6->ipi_listhead);
 VAR_6->ipi_count = 0;
 VAR_6->ipi_hashbase = FUNC_4(VAR_9, VAR_1,
     &VAR_6->ipi_hashmask);
 VAR_6->ipi_porthashbase = FUNC_4(VAR_10, VAR_1,
     &VAR_6->ipi_porthashmask);
 VAR_6->ipi_lbgrouphashbase = FUNC_4(VAR_10, VAR_1,
     &VAR_6->ipi_lbgrouphashmask);



 VAR_6->ipi_zone = FUNC_7(VAR_11, sizeof(struct inpcb),
     ((void*)0), ((void*)0), VAR_12, VAR_4, VAR_2, 0);
 FUNC_8(VAR_6->ipi_zone, VAR_5);
 FUNC_9(VAR_6->ipi_zone,
     "kern.ipc.maxsockets limit reached");
}
