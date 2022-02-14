
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hfi1_devdata*) ;
 int FUNC_2 (struct sdma_engine*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sdma_engine *VAR_1)
{
 struct hfi1_devdata *VAR_2 = VAR_1->dd;

 FUNC_2(VAR_1, FUNC_0(VAR_0),
        FUNC_1(VAR_2));
}
