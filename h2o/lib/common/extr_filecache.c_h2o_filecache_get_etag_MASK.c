
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; int buf; } ;
struct TYPE_5__ {scalar_t__ st_mtime; scalar_t__ st_size; } ;
struct TYPE_7__ {int fd; TYPE_2__ _etag; TYPE_1__ st; } ;
typedef TYPE_3__ h2o_filecache_ref_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,char*,unsigned int,size_t) ;

size_t FUNC_3(h2o_filecache_ref_t *VAR_0, char *VAR_1)
{
    FUNC_0(VAR_0->fd != -1);
    if (VAR_0->_etag.len == 0)
        VAR_0->_etag.len = FUNC_2(VAR_0->_etag.buf, "\"%08x-%zx\"", (unsigned)VAR_0->st.st_mtime, (size_t)VAR_0->st.st_size);
    FUNC_1(VAR_1, VAR_0->_etag.buf, VAR_0->_etag.len + 1);
    return VAR_0->_etag.len;
}
