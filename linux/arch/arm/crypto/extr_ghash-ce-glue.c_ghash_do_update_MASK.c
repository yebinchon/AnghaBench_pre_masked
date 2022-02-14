
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char u8 ;
typedef int u64 ;
struct ghash_key {int k; } ;
struct TYPE_3__ {int a; int b; int member_1; int member_0; } ;
typedef TYPE_1__ be128 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*,int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int,int *,char const*,struct ghash_key*,char const*) ;

__attribute__((used)) static void FUNC_9(int VAR_1, u64 VAR_2[], const char *VAR_3,
       struct ghash_key *VAR_4, const char *VAR_5)
{
 if (FUNC_7(FUNC_2())) {
  FUNC_5();
  FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  FUNC_6();
 } else {
  be128 VAR_6 = { FUNC_1(VAR_2[1]), FUNC_1(VAR_2[0]) };

  do {
   const u8 *VAR_7 = VAR_3;

   if (VAR_5) {
    VAR_7 = VAR_5;
    VAR_1++;
    VAR_5 = ((void*)0);
   } else {
    VAR_3 += VAR_0;
   }

   FUNC_3((u8 *)&VAR_6, VAR_7, VAR_0);
   FUNC_4(&VAR_6, &VAR_4->k);
  } while (--VAR_1);

  VAR_2[0] = FUNC_0(VAR_6.b);
  VAR_2[1] = FUNC_0(VAR_6.a);
 }
}
