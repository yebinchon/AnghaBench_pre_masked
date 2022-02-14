
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
 int FUNC_2 (struct expbuf_t*,unsigned char const*,unsigned int) ;
 int FUNC_3 (struct expbuf_t*,int) ;
 int FUNC_4 (struct expbuf_t*,char*) ;
 scalar_t__ FUNC_5 (struct expbuf_t*,int ) ;
 unsigned char* FUNC_6 (struct expbuf_t*,size_t*) ;
 scalar_t__ FUNC_7 (struct expbuf_t*,size_t*) ;
 scalar_t__ FUNC_8 (struct expbuf_t*,int ) ;
 int FUNC_9 (int const*,struct st_neverbleed_rsa_exdata_t**,struct st_neverbleed_thread_data_t**) ;
 int FUNC_10 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_11(int VAR_1, const unsigned char *VAR_2, unsigned int VAR_3, unsigned char *VAR_4, unsigned *VAR_5,
                      const RSA *VAR_6)
{
    struct st_neverbleed_rsa_exdata_t *VAR_7;
    struct st_neverbleed_thread_data_t *VAR_8;
    struct expbuf_t VAR_9 = {((void*)0)};
    size_t VAR_10, VAR_11;
    unsigned char *VAR_12;

    FUNC_9(VAR_6, &VAR_7, &VAR_8);

    FUNC_4(&VAR_9, "sign");
    FUNC_3(&VAR_9, VAR_1);
    FUNC_2(&VAR_9, VAR_2, VAR_3);
    FUNC_3(&VAR_9, VAR_7->key_index);
    if (FUNC_8(&VAR_9, VAR_8->fd) != 0)
        FUNC_0(VAR_0 != 0 ? "write error" : "connection closed by daemon");
    FUNC_1(&VAR_9);

    if (FUNC_5(&VAR_9, VAR_8->fd) != 0)
        FUNC_0(VAR_0 != 0 ? "read error" : "connection closed by daemon");
    if (FUNC_7(&VAR_9, &VAR_10) != 0 || (VAR_12 = FUNC_6(&VAR_9, &VAR_11)) == ((void*)0)) {
        VAR_0 = 0;
        FUNC_0("failed to parse response");
    }
    FUNC_10(VAR_4, VAR_12, VAR_11);
    *VAR_5 = (unsigned)VAR_11;
    FUNC_1(&VAR_9);

    return (int)VAR_10;
}
