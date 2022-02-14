
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ktd2692_context {int aux_gpio; int mode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ktd2692_context*) ;
 int FUNC_3 (struct ktd2692_context*,int) ;

__attribute__((used)) static void FUNC_4(struct ktd2692_context *VAR_5)
{
 VAR_5->mode = VAR_2;
 FUNC_2(VAR_5);
 FUNC_1(VAR_5->aux_gpio, VAR_0);

 FUNC_3(VAR_5, (VAR_1 - 1)
     | VAR_4);
 FUNC_3(VAR_5, FUNC_0(45)
     | VAR_3);
}
