
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_neverbleed_thread_data_t {int fd; } ;
struct expbuf_t {int * member_0; } ;
typedef int neverbleed_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct expbuf_t*) ;
 int FUNC_2 (struct expbuf_t*,int) ;
 int FUNC_3 (struct expbuf_t*,char const*) ;
 scalar_t__ FUNC_4 (struct expbuf_t*,int ) ;
 scalar_t__ FUNC_5 (struct expbuf_t*,size_t*) ;
 scalar_t__ FUNC_6 (struct expbuf_t*,int ) ;
 struct st_neverbleed_thread_data_t* FUNC_7 (int *) ;

int FUNC_8(neverbleed_t *VAR_1, const char *VAR_2, int VAR_3)
{
    struct st_neverbleed_thread_data_t *VAR_4 = FUNC_7(VAR_1);
    struct expbuf_t VAR_5 = {((void*)0)};
    size_t VAR_6;

    FUNC_3(&VAR_5, "setuidgid");
    FUNC_3(&VAR_5, VAR_2);
    FUNC_2(&VAR_5, VAR_3);
    if (FUNC_6(&VAR_5, VAR_4->fd) != 0)
        FUNC_0(VAR_0 != 0 ? "write error" : "connection closed by daemon");
    FUNC_1(&VAR_5);

    if (FUNC_4(&VAR_5, VAR_4->fd) != 0)
        FUNC_0(VAR_0 != 0 ? "read error" : "connection closed by daemon");
    if (FUNC_5(&VAR_5, &VAR_6) != 0) {
        VAR_0 = 0;
        FUNC_0("failed to parse response");
    }
    FUNC_1(&VAR_5);

    return (int)VAR_6;
}
