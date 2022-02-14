
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_char ;
struct TYPE_5__ {int count; int * state; } ;
typedef TYPE_1__ RMD160_CTX ;


 int * VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void
FUNC_4(u_char VAR_1[20], RMD160_CTX *VAR_2)
{
 int VAR_3;
 u_char VAR_4[8];
 u_int32_t VAR_5;

 FUNC_1(VAR_4, VAR_2->count);





 VAR_5 = 64 - ((VAR_2->count/8) % 64);
 if (VAR_5 < 1 + 8)
  VAR_5 += 64;
 FUNC_2(VAR_2, VAR_0, VAR_5 - 8);
 FUNC_2(VAR_2, VAR_4, 8);

 if (VAR_1 != ((void*)0))
  for (VAR_3 = 0; VAR_3 < 5; VAR_3++)
   FUNC_0(VAR_1 + VAR_3*4, VAR_2->state[VAR_3]);

 FUNC_3(VAR_2, 0, sizeof (*VAR_2));
}
