
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sin6_addr; } ;
struct TYPE_3__ {int sin6_addr; } ;
struct sioc_sg_req6 {int wrong_if; int bytecnt; int pktcnt; TYPE_2__ grp; TYPE_1__ src; } ;
struct mf6c {int mf6c_wrong_if; int mf6c_byte_cnt; int mf6c_pkt_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct mf6c*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(struct sioc_sg_req6 *VAR_1)
{
 struct mf6c *VAR_2;
 int VAR_3;

 VAR_3 = 0;

 FUNC_1();

 FUNC_0(VAR_1->src.sin6_addr, VAR_1->grp.sin6_addr, VAR_2);
 if (VAR_2 == ((void*)0)) {
  VAR_3 = VAR_0;
 } else {
  VAR_1->pktcnt = VAR_2->mf6c_pkt_cnt;
  VAR_1->bytecnt = VAR_2->mf6c_byte_cnt;
  VAR_1->wrong_if = VAR_2->mf6c_wrong_if;
 }

 FUNC_2();

 return (VAR_3);
}
