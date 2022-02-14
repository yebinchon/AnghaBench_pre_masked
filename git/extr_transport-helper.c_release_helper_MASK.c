
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {struct helper_data* data; } ;
struct helper_data {int rs; } ;


 int FUNC_0 (struct transport*) ;
 int FUNC_1 (struct helper_data*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct transport *VAR_0)
{
 int VAR_1 = 0;
 struct helper_data *VAR_2 = VAR_0->data;
 FUNC_2(&VAR_2->rs);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_0->data);
 return VAR_1;
}
