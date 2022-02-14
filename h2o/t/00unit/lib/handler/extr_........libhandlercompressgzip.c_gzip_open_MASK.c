
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * opaque; int zfree; int zalloc; } ;
struct TYPE_4__ {int * push_buf; int * do_transform; int name; } ;
struct st_gzip_context_t {int zs_is_open; int bufs; TYPE_1__ zs; TYPE_2__ super; } ;
typedef int h2o_mem_pool_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct st_gzip_context_t*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 struct st_gzip_context_t* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static struct st_gzip_context_t *FUNC_5(h2o_mem_pool_t *VAR_3)
{
    struct st_gzip_context_t *VAR_4 = FUNC_3(VAR_3, sizeof(*VAR_4), VAR_1);

    VAR_4->super.name = FUNC_2(FUNC_0("gzip"));
    VAR_4->super.do_transform = ((void*)0);
    VAR_4->super.push_buf = ((void*)0);
    VAR_4->zs.zalloc = VAR_0;
    VAR_4->zs.zfree = VAR_2;
    VAR_4->zs.opaque = ((void*)0);
    VAR_4->zs_is_open = 1;
    FUNC_4(&VAR_4->bufs, 0, sizeof(VAR_4->bufs));
    FUNC_1(VAR_4);

    return VAR_4;
}
