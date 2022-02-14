
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char u8 ;
typedef int u64 ;
typedef struct ghash_key {int k; } const ghash_key ;
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

__attribute__((used)) static void FUNC_8(int VAR_1, u64 VAR_2[], const char *VAR_3,
       struct ghash_key *VAR_4, const char *VAR_5,
       void (*VAR_6)(int VAR_7, u64 VAR_8[],
      const char *VAR_9,
      struct ghash_key const *VAR_10,
      const char *VAR_11))
{
 if (FUNC_7(FUNC_2())) {
  FUNC_5();
  VAR_6(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  FUNC_6();
 } else {
  be128 VAR_12 = { FUNC_1(VAR_2[1]), FUNC_1(VAR_2[0]) };

  do {
   const u8 *VAR_13 = VAR_3;

   if (VAR_5) {
    VAR_13 = VAR_5;
    VAR_1++;
    VAR_5 = ((void*)0);
   } else {
    VAR_3 += VAR_0;
   }

   FUNC_3((u8 *)&VAR_12, VAR_13, VAR_0);
   FUNC_4(&VAR_12, &VAR_4->k);
  } while (--VAR_1);

  VAR_2[0] = FUNC_0(VAR_12.b);
  VAR_2[1] = FUNC_0(VAR_12.a);
 }
}
