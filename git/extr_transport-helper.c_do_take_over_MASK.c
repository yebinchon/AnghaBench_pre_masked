
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {scalar_t__ data; } ;
struct helper_data {int out; int helper; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct helper_data*) ;
 int FUNC_2 (struct transport*,int ) ;

__attribute__((used)) static void FUNC_3(struct transport *VAR_0)
{
 struct helper_data *VAR_1;
 VAR_1 = (struct helper_data *)VAR_0->data;
 FUNC_2(VAR_0, VAR_1->helper);
 FUNC_0(VAR_1->out);
 FUNC_1(VAR_1);
}
