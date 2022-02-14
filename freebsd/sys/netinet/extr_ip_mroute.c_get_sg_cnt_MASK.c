
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sioc_sg_req {int pktcnt; int bytecnt; int wrong_if; int grp; int src; } ;
struct mfc {int mfc_pkt_cnt; int mfc_byte_cnt; int mfc_wrong_if; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct mfc* FUNC_2 (int *,int *) ;

__attribute__((used)) static int
FUNC_3(struct sioc_sg_req *VAR_1)
{
    struct mfc *VAR_2;

    FUNC_0();
    VAR_2 = FUNC_2(&VAR_1->src, &VAR_1->grp);
    if (VAR_2 == ((void*)0)) {
 FUNC_1();
 VAR_1->pktcnt = VAR_1->bytecnt = VAR_1->wrong_if = 0xffffffff;
 return VAR_0;
    }
    VAR_1->pktcnt = VAR_2->mfc_pkt_cnt;
    VAR_1->bytecnt = VAR_2->mfc_byte_cnt;
    VAR_1->wrong_if = VAR_2->mfc_wrong_if;
    FUNC_1();
    return 0;
}
