
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {TYPE_1__* ref; } ;
struct st_h2o_sendfile_generator_t {TYPE_2__ file; } ;
typedef int ssize_t ;
struct TYPE_9__ {size_t len; scalar_t__* cb_arg; } ;
typedef TYPE_3__ h2o_sendvec_t ;
typedef int h2o_req_t ;
struct TYPE_10__ {size_t len; scalar_t__ base; } ;
typedef TYPE_4__ h2o_iovec_t ;
struct TYPE_7__ {int fd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,scalar_t__,size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_2(h2o_sendvec_t *VAR_2, h2o_req_t *VAR_3, h2o_iovec_t VAR_4, size_t VAR_5)
{
    struct st_h2o_sendfile_generator_t *VAR_6 = (void *)VAR_2->cb_arg[0];
    uint64_t VAR_7 = VAR_2->cb_arg[1];
    size_t VAR_8 = 0;
    ssize_t VAR_9;

    FUNC_0(VAR_5 + VAR_4.len <= VAR_2->len);


    while (VAR_8 < VAR_4.len) {
        while ((VAR_9 = FUNC_1(VAR_6->file.ref->fd, VAR_4.base + VAR_8, VAR_4.len - VAR_8, VAR_7 + VAR_5 + VAR_8)) ==
                   -1 &&
               VAR_1 == VAR_0)
            ;
        if (VAR_9 == -1)
            return 0;
        VAR_8 += VAR_9;
    }

    return 1;
}
