
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int client_random; } ;
typedef TYPE_1__ ptls_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_3(ptls_t *VAR_1)
{
    FUNC_0(VAR_0, VAR_1,
               FUNC_2(FUNC_1(sizeof(VAR_1->client_random) * 2 + 1), VAR_1->client_random, sizeof(VAR_1->client_random)));
}
