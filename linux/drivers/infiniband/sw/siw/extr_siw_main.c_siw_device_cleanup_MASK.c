
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_device {int mem_xa; int qp_xa; } ;
struct ib_device {int dummy; } ;


 struct siw_device* FUNC_0 (struct ib_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ib_device *VAR_0)
{
 struct siw_device *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->qp_xa);
 FUNC_1(&VAR_1->mem_xa);
}
