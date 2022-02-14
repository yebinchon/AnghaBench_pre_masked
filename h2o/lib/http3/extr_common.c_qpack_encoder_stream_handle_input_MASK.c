
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct st_h2o_http3_ingress_unistream_t {int dummy; } ;
typedef int int64_t ;
struct TYPE_4__ {int dec; } ;
struct TYPE_5__ {TYPE_1__ qpack; } ;
typedef TYPE_2__ h2o_http3_conn_t ;


 int FUNC_0 (int ,int **,size_t*,int const**,int const*,char const**) ;

__attribute__((used)) static int FUNC_1(h2o_http3_conn_t *VAR_0, struct st_h2o_http3_ingress_unistream_t *VAR_1,
                                             const uint8_t **VAR_2, const uint8_t *VAR_3, const char **VAR_4)
{
    while (*VAR_2 != VAR_3) {
        int64_t *VAR_5;
        size_t VAR_6;
        int VAR_7;
        if ((VAR_7 = FUNC_0(VAR_0->qpack.dec, &VAR_5, &VAR_6, VAR_2, VAR_3,
                                                  VAR_4)) != 0)
            return VAR_7;

    }
    return 0;
}
