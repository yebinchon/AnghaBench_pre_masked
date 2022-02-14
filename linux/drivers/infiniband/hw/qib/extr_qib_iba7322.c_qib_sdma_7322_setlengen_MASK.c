
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {unsigned long long sdma_descq_cnt; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qib_pportdata*,int ,unsigned long long) ;

__attribute__((used)) static void FUNC_1(struct qib_pportdata *VAR_2)
{





 FUNC_0(VAR_2, VAR_1, VAR_2->sdma_descq_cnt);
 FUNC_0(VAR_2, VAR_1,
       VAR_2->sdma_descq_cnt |
       (1ULL << VAR_0));
}
