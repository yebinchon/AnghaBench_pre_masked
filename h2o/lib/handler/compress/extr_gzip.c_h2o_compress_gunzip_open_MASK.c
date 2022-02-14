
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * push_buf; int do_transform; int name; } ;
struct st_gzip_context_t {TYPE_1__ super; int zs; } ;
typedef int h2o_mem_pool_t ;
typedef TYPE_1__ h2o_compress_context_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct st_gzip_context_t* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

h2o_compress_context_t *FUNC_4(h2o_mem_pool_t *VAR_2)
{
    struct st_gzip_context_t *VAR_3 = FUNC_1(VAR_2);
    VAR_3->super.name = FUNC_2(FUNC_0("gunzip"));
    VAR_3->super.do_transform = VAR_1;
    VAR_3->super.push_buf = ((void*)0);
    FUNC_3(&VAR_3->zs, VAR_0);

    return &VAR_3->super;
}
