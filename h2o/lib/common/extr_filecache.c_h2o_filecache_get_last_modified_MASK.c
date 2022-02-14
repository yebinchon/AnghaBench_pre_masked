
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tm {int dummy; } ;
struct TYPE_6__ {char* str; struct tm gm; } ;
struct TYPE_5__ {int st_mtime; } ;
struct TYPE_7__ {int fd; TYPE_2__ _last_modified; TYPE_1__ st; } ;
typedef TYPE_3__ h2o_filecache_ref_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct tm*) ;
 int FUNC_2 (char*,struct tm*) ;
 int FUNC_3 (char*,char*,scalar_t__) ;

struct tm *FUNC_4(h2o_filecache_ref_t *VAR_1, char *VAR_2)
{
    FUNC_0(VAR_1->fd != -1);
    if (VAR_1->_last_modified.str[0] == '\0') {
        FUNC_1(&VAR_1->st.st_mtime, &VAR_1->_last_modified.gm);
        FUNC_2(VAR_1->_last_modified.str, &VAR_1->_last_modified.gm);
    }
    if (VAR_2 != ((void*)0))
        FUNC_3(VAR_2, VAR_1->_last_modified.str, VAR_0 + 1);
    return &VAR_1->_last_modified.gm;
}
