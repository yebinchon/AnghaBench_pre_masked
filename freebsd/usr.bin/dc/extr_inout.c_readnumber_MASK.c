
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct source {TYPE_1__* vtable; } ;
struct number {int scale; int * number; } ;
struct TYPE_2__ {int (* readchar ) (struct source*) ;int (* unreadchar ) (struct source*) ;} ;
typedef int BN_ULONG ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int VAR_0 ;
 int FUNC_9 (int ) ;
 struct number* FUNC_10 (struct number*,struct number*,int) ;
 int FUNC_11 (struct number*) ;
 int FUNC_12 (struct number*) ;
 struct number* FUNC_13 () ;
 int FUNC_14 (struct number*,scalar_t__) ;
 int FUNC_15 (struct source*) ;
 int FUNC_16 (struct source*) ;

struct number *
FUNC_17(struct source *VAR_1, u_int VAR_2, u_int VAR_3)
{
 struct number *VAR_4;
 BN_ULONG VAR_5;
 int VAR_6;
 u_int VAR_7 = 0;
 bool VAR_8 = 0, VAR_9 = 0;

 VAR_4 = FUNC_13();
 FUNC_9(FUNC_8(VAR_4->number));

 while ((VAR_6 = (*VAR_1->vtable->readchar)(VAR_1)) != VAR_0) {

  if ('0' <= VAR_6 && VAR_6 <= '9')
   VAR_5 = VAR_6 - '0';
  else if ('A' <= VAR_6 && VAR_6 <= 'F')
   VAR_5 = VAR_6 - 'A' + 10;
  else if (VAR_6 == '_') {
   VAR_9 = 1;
   continue;
  } else if (VAR_6 == '.') {
   if (VAR_8)
    break;
   VAR_8 = 1;
   continue;
  } else {
   (*VAR_1->vtable->unreadchar)(VAR_1);
   break;
  }
  if (VAR_8)
   VAR_7++;

  FUNC_9(FUNC_6(VAR_4->number, VAR_2));
  FUNC_9(FUNC_2(VAR_4->number, VAR_5));
 }
 if (VAR_2 == 10) {
  VAR_4->scale = VAR_7;
 } else {

  struct number *VAR_10, *VAR_11, *VAR_12;
  BIGNUM *VAR_13, *VAR_14;
  BN_CTX *VAR_15;

  VAR_15 = FUNC_1();
  VAR_13 = FUNC_7();
  VAR_14 = FUNC_7();
  VAR_11 = FUNC_13();
  FUNC_9(FUNC_8(VAR_13));
  FUNC_9(FUNC_8(VAR_14));

  FUNC_9(FUNC_2(VAR_13, VAR_2));
  FUNC_9(FUNC_2(VAR_14, VAR_7));
  FUNC_9(FUNC_3(VAR_11->number, VAR_13, VAR_14, VAR_15));
  VAR_11->scale = 0;
  VAR_10 = FUNC_10(VAR_4, VAR_11, VAR_3);
  VAR_12 = VAR_4;
  VAR_4 = VAR_10;





  while ( VAR_4->scale > 0 &&
   FUNC_5(VAR_4->number, 10) == 0) {
   FUNC_14(VAR_4, VAR_4->scale - 1);
  }

  FUNC_11(VAR_12);
  FUNC_11(VAR_11);
  FUNC_0(VAR_15);
  FUNC_4(VAR_13);
  FUNC_4(VAR_14);
 }
 if (VAR_9)
  FUNC_12(VAR_4);
 return (VAR_4);
}
