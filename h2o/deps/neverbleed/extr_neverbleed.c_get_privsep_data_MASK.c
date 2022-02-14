
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_neverbleed_thread_data_t {int dummy; } ;
struct st_neverbleed_rsa_exdata_t {int nb; } ;
typedef int RSA ;


 struct st_neverbleed_rsa_exdata_t* FUNC_0 (int const*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 struct st_neverbleed_thread_data_t* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const RSA *VAR_1, struct st_neverbleed_rsa_exdata_t **VAR_2,
                             struct st_neverbleed_thread_data_t **VAR_3)
{
    *VAR_2 = FUNC_0(VAR_1, 0);
    if (*VAR_2 == ((void*)0)) {
        VAR_0 = 0;
        FUNC_1("invalid internal ref");
    }
    *VAR_3 = FUNC_2((*VAR_2)->nb);
}
