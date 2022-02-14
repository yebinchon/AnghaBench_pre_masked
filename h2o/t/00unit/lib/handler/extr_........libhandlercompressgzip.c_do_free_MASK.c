
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ do_transform; TYPE_3__* push_buf; } ;
struct TYPE_4__ {size_t size; TYPE_3__* entries; } ;
struct st_gzip_context_t {TYPE_2__ super; TYPE_1__ bufs; int zs; scalar_t__ zs_is_open; } ;
struct TYPE_6__ {struct TYPE_6__* raw; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
    struct st_gzip_context_t *VAR_2 = VAR_1;
    size_t VAR_3;

    if (VAR_2->zs_is_open) {
        if (VAR_2->super.do_transform == VAR_0) {
            FUNC_0(&VAR_2->zs);
        } else {
            FUNC_2(&VAR_2->zs);
        }
    }

    for (VAR_3 = 0; VAR_3 != VAR_2->bufs.size; ++VAR_3)
        FUNC_1(VAR_2->bufs.entries[VAR_3].raw);
    FUNC_1(VAR_2->bufs.entries);
    FUNC_1(VAR_2->super.push_buf);
}
