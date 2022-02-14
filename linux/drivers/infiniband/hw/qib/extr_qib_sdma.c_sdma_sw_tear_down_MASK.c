
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_sdma_state {int dummy; } ;
struct qib_pportdata {struct qib_sdma_state sdma_state; } ;


 int FUNC_0 (struct qib_sdma_state*) ;

__attribute__((used)) static void FUNC_1(struct qib_pportdata *VAR_0)
{
 struct qib_sdma_state *VAR_1 = &VAR_0->sdma_state;


 FUNC_0(VAR_1);
}
