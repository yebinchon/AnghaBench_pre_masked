
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_18__ {scalar_t__ len; scalar_t__ base; } ;
struct TYPE_19__ {TYPE_3__ path_normalized; } ;
typedef TYPE_4__ h2o_req_t ;
struct TYPE_20__ {int type; } ;
typedef TYPE_5__ h2o_mimemap_type_t ;
struct TYPE_21__ {scalar_t__ len; } ;
typedef TYPE_6__ h2o_iovec_t ;
struct TYPE_17__ {size_t len; } ;
struct TYPE_16__ {int len; } ;
struct TYPE_22__ {TYPE_2__ real_path; TYPE_1__ conf_path; int mimemap; } ;
typedef TYPE_7__ h2o_file_handler_t ;




 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_6__,TYPE_6__,char*,size_t,TYPE_5__*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,size_t) ;
 TYPE_6__ FUNC_4 (scalar_t__,scalar_t__) ;
 TYPE_5__* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (char*,struct stat*) ;

__attribute__((used)) static int FUNC_7(h2o_file_handler_t *VAR_0, h2o_req_t *VAR_1, char *VAR_2, size_t VAR_3)
{

    struct stat VAR_4;
    size_t VAR_5 = VAR_0->real_path.len;

    while (1) {

        for (++VAR_5;; ++VAR_5) {
            if (VAR_5 >= VAR_3)
                return -1;
            if (VAR_2[VAR_5] == '/')
                break;
        }

        VAR_2[VAR_5] = '\0';
        if (FUNC_6(VAR_2, &VAR_4) != 0)
            return -1;
        if (!FUNC_0(VAR_4.st_mode))
            break;

        VAR_2[VAR_5] = '/';
    }


    h2o_mimemap_type_t *VAR_6 = FUNC_5(VAR_0->mimemap, FUNC_3(VAR_2, VAR_5));
    switch (VAR_6->type) {
    case 128:
        return -1;
    case 129: {
        h2o_iovec_t VAR_7 = FUNC_4(VAR_1->path_normalized.base, VAR_0->conf_path.len + VAR_5 - VAR_0->real_path.len);
        h2o_iovec_t VAR_8 =
            FUNC_4(VAR_1->path_normalized.base + VAR_7.len, VAR_1->path_normalized.len - VAR_7.len);
        return FUNC_1(VAR_1, VAR_7, VAR_8, VAR_2, VAR_5, VAR_6);
    }
    }
    FUNC_2("unknown h2o_miemmap_type_t::type (%d)\n", (int)VAR_6->type);
}
