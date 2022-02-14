
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; int base; } ;
struct st_expires_t {TYPE_1__ value; int mode; } ;
struct TYPE_7__ {int status; int headers; } ;
struct TYPE_8__ {TYPE_2__ res; int pool; } ;
typedef TYPE_3__ h2o_req_t ;
typedef int h2o_ostream_t ;
typedef int h2o_filter_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int *,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int **) ;

__attribute__((used)) static void FUNC_4(h2o_filter_t *VAR_2, h2o_req_t *VAR_3, h2o_ostream_t **VAR_4)
{
    struct st_expires_t *VAR_5 = (void *)VAR_2;

    switch (VAR_3->res.status) {
    case 200:
    case 201:
    case 204:
    case 206:
    case 301:
    case 302:
    case 303:
    case 304:
    case 307:
        switch (VAR_5->mode) {
        case 129:
            FUNC_1(&VAR_3->pool, &VAR_3->res.headers, VAR_1, VAR_5->value.base, VAR_5->value.len, 0);
            break;
        case 128:
            FUNC_2(&VAR_3->pool, &VAR_3->res.headers, VAR_0, VAR_5->value.base, VAR_5->value.len);
            break;
        default:
            FUNC_0(0);
            break;
        }
        break;
    default:
        break;
    }

    FUNC_3(VAR_3, VAR_4);
}
