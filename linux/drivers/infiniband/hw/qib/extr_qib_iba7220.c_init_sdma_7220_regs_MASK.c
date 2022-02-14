
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_4__ {unsigned int first_sendbuf; unsigned int last_sendbuf; } ;
struct qib_pportdata {unsigned long long sdma_descq_phys; unsigned long long sdma_head_phys; TYPE_2__ sdma_state; struct qib_devdata* dd; } ;
struct qib_devdata {unsigned int piobcnt2k; unsigned int piobcnt4k; TYPE_1__* cspec; } ;
struct TYPE_3__ {unsigned int sdmabufcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qib_pportdata*) ;
 int FUNC_1 (struct qib_pportdata*,int ) ;
 int FUNC_2 (struct qib_devdata*,int ,unsigned long long) ;

__attribute__((used)) static int FUNC_3(struct qib_pportdata *VAR_5)
{
 struct qib_devdata *VAR_6 = VAR_5->dd;
 unsigned VAR_7, VAR_8;
 u64 VAR_9[3] = { 0 };


 FUNC_2(VAR_6, VAR_0, VAR_5->sdma_descq_phys);
 FUNC_0(VAR_5);
 FUNC_1(VAR_5, 0);

 FUNC_2(VAR_6, VAR_4, VAR_5->sdma_head_phys);





 VAR_8 = VAR_6->piobcnt2k + VAR_6->piobcnt4k;
 VAR_7 = VAR_8 - VAR_6->cspec->sdmabufcnt;

 for (; VAR_7 < VAR_8; ++VAR_7) {
  unsigned VAR_10 = VAR_7 / 64;
  unsigned VAR_11 = VAR_7 & 63;

  VAR_9[VAR_10] |= 1ULL << VAR_11;
 }
 FUNC_2(VAR_6, VAR_1, VAR_9[0]);
 FUNC_2(VAR_6, VAR_2, VAR_9[1]);
 FUNC_2(VAR_6, VAR_3, VAR_9[2]);

 VAR_5->sdma_state.first_sendbuf = VAR_7;
 VAR_5->sdma_state.last_sendbuf = VAR_8;

 return 0;
}
