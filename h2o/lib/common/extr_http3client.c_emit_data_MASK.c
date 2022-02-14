
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct st_h2o_http3client_req_t {int sendbuf; } ;
struct TYPE_3__ {size_t len; int * base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,size_t) ;
 int * FUNC_1 (int *,size_t) ;

__attribute__((used)) static size_t FUNC_2(struct st_h2o_http3client_req_t *VAR_1, h2o_iovec_t VAR_2)
{
    size_t VAR_3;

    {
        uint8_t VAR_4[9], *VAR_5 = VAR_4;
        *VAR_5++ = VAR_0;
        VAR_5 = FUNC_1(VAR_5, VAR_2.len);
        VAR_3 = VAR_5 - VAR_4;
        FUNC_0(&VAR_1->sendbuf, VAR_4, VAR_3);
    }


    FUNC_0(&VAR_1->sendbuf, VAR_2.base, VAR_2.len);
    VAR_3 += VAR_2.len;

    return VAR_3;
}
