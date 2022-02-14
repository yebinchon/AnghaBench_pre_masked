
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int do_transform; } ;
struct st_gzip_context_t {TYPE_1__ super; int zs; } ;
typedef int h2o_mem_pool_t ;
typedef TYPE_1__ h2o_compress_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ,int ,int,int ) ;
 int VAR_3 ;
 struct st_gzip_context_t* FUNC_1 (int *) ;

h2o_compress_context_t *FUNC_2(h2o_mem_pool_t *VAR_4, int VAR_5)
{
    struct st_gzip_context_t *VAR_6 = FUNC_1(VAR_4);
    VAR_6->super.do_transform = VAR_3;

    FUNC_0(&VAR_6->zs, VAR_5, VAR_2, VAR_0, 8, VAR_1);

    return &VAR_6->super;
}
