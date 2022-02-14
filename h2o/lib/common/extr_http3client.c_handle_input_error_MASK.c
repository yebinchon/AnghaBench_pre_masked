
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct st_h2o_http3client_req_t {int (* handle_input ) (struct st_h2o_http3client_req_t*,int const**,int const*,int,char const**) ;} ;


 int FUNC_0 (struct st_h2o_http3client_req_t*,int const**,int const*,int,char const**) ;

__attribute__((used)) static void FUNC_1(struct st_h2o_http3client_req_t *VAR_0, int VAR_1)
{
    const uint8_t *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
    const char *VAR_4 = ((void*)0);
    VAR_0->handle_input(VAR_0, &VAR_2, VAR_3, VAR_1, &VAR_4);
}
