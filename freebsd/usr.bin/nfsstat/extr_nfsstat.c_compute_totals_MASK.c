
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsstatsv1 {int busytime; int srvdonecnt; int srvstartcnt; int * srvrpccnt; int * srvduration; scalar_t__* srvops; scalar_t__* srvbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct nfsstatsv1*,int) ;

__attribute__((used)) static void
FUNC_2(struct nfsstatsv1 *VAR_2, struct nfsstatsv1 *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_2, sizeof(*VAR_2));
 for (VAR_4 = 0; VAR_4 < (VAR_0 + VAR_1); VAR_4++) {
  VAR_2->srvbytes[0] += VAR_3->srvbytes[VAR_4];
  VAR_2->srvops[0] += VAR_3->srvops[VAR_4];
  FUNC_0(&VAR_2->srvduration[0],
       &VAR_3->srvduration[VAR_4]);
  VAR_2->srvrpccnt[VAR_4] = VAR_3->srvrpccnt[VAR_4];
 }
 VAR_2->srvstartcnt = VAR_3->srvstartcnt;
 VAR_2->srvdonecnt = VAR_3->srvdonecnt;
 VAR_2->busytime = VAR_3->busytime;

}
