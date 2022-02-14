
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_fcgi_generator_t {int * req; scalar_t__ sent_headers; } ;
typedef int h2o_req_t ;


 int FUNC_0 (struct st_fcgi_generator_t*) ;
 int FUNC_1 (int *,char*,char*,int ) ;
 int FUNC_2 (struct st_fcgi_generator_t*,int ) ;

__attribute__((used)) static void FUNC_3(struct st_fcgi_generator_t *VAR_0)
{
    if (VAR_0->sent_headers) {
        FUNC_2(VAR_0, 0);
    } else {
        h2o_req_t *VAR_1 = VAR_0->req;
        FUNC_0(VAR_0);
        FUNC_1(VAR_1, "Internal Server Error", "Internal Server Error", 0);
    }
}
