
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct number {scalar_t__ scale; int number; } ;
struct TYPE_2__ {scalar_t__ scale; } ;
typedef int BN_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (struct number*,scalar_t__) ;

void
FUNC_7(struct number *VAR_1, struct number *VAR_2, struct number *VAR_3, u_int VAR_4)
{
 BN_CTX *VAR_5;


 u_int VAR_6 = VAR_2->scale;
 u_int VAR_7 = VAR_3->scale;
 u_int VAR_8 = VAR_6 + VAR_7;

 VAR_5 = FUNC_1();
 FUNC_4(VAR_5);
 FUNC_3(FUNC_2(VAR_1->number, VAR_2->number, VAR_3->number, VAR_5));
 FUNC_0(VAR_5);

 VAR_1->scale = VAR_8;
 if (VAR_8 > VAR_0.scale && VAR_8 > VAR_6 && VAR_8 > VAR_7)
  FUNC_6(VAR_1, FUNC_5(VAR_4, FUNC_5(VAR_6, VAR_7)));
}
