
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct artpec6_crypto {int task; } ;


 struct artpec6_crypto* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct artpec6_crypto* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_3)
{
 struct artpec6_crypto *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);

 FUNC_0(VAR_1, "timeout\n");

 FUNC_2(&VAR_4->task);
}
