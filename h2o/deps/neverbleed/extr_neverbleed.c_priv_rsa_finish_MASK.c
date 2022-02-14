
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_neverbleed_thread_data_t {int fd; } ;
struct st_neverbleed_rsa_exdata_t {int key_index; } ;
struct expbuf_t {int * member_0; } ;
typedef int RSA ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct expbuf_t*) ;
 int FUNC_2 (struct expbuf_t*,int ) ;
 int FUNC_3 (struct expbuf_t*,char*) ;
 scalar_t__ FUNC_4 (struct expbuf_t*,int ) ;
 scalar_t__ FUNC_5 (struct expbuf_t*,size_t*) ;
 scalar_t__ FUNC_6 (struct expbuf_t*,int ) ;
 int FUNC_7 (int *,struct st_neverbleed_rsa_exdata_t**,struct st_neverbleed_thread_data_t**) ;

__attribute__((used)) static int FUNC_8(RSA *VAR_1)
{
    struct st_neverbleed_rsa_exdata_t *VAR_2;
    struct st_neverbleed_thread_data_t *VAR_3;

    FUNC_7(VAR_1, &VAR_2, &VAR_3);

    struct expbuf_t VAR_4 = {((void*)0)};
    size_t VAR_5;

    FUNC_3(&VAR_4, "del_rsa_key");
    FUNC_2(&VAR_4, VAR_2->key_index);
    if (FUNC_6(&VAR_4, VAR_3->fd) != 0)
        FUNC_0(VAR_0 != 0 ? "write error" : "connection closed by daemon");
    FUNC_1(&VAR_4);

    if (FUNC_4(&VAR_4, VAR_3->fd) != 0)
        FUNC_0(VAR_0 != 0 ? "read error" : "connection closed by daemon");
    if (FUNC_5(&VAR_4, &VAR_5) != 0) {
        VAR_0 = 0;
        FUNC_0("failed to parse response");
    }
    FUNC_1(&VAR_4);

    return (int)VAR_5;
}
