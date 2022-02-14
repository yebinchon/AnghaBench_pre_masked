
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int read_file_inner_error; int fd; } ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ IjkURLContext ;
typedef TYPE_2__ IjkIOCacheContext ;


 scalar_t__ FUNC_0 (int ,void*,int) ;

__attribute__((used)) static int FUNC_1(IjkURLContext *VAR_0, void *VAR_1, int VAR_2)
{
    IjkIOCacheContext *VAR_3 = VAR_0->priv_data;
    int VAR_4;

    VAR_4 = (int)FUNC_0(VAR_3->fd, VAR_1, VAR_2);
    VAR_3->read_file_inner_error = VAR_4 < 0 ? VAR_4 : 0;
    return VAR_4;
}
