
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pit_data {int cycle; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct pit_data *VAR_3)
{

 FUNC_3(VAR_3->base, VAR_0, 0);


 while (FUNC_0(FUNC_2(VAR_3->base, VAR_2)) != 0)
  FUNC_1();


 FUNC_3(VAR_3->base, VAR_0,
    (VAR_3->cycle - 1) | VAR_1);
}
