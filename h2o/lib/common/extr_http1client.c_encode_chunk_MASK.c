
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct st_h2o_http1client_t {char* _chunk_len_str; } ;
struct TYPE_5__ {int len; char* base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 TYPE_1__ FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,char*,int) ;

size_t FUNC_2(struct st_h2o_http1client_t *VAR_0, h2o_iovec_t *VAR_1, h2o_iovec_t VAR_2, size_t *VAR_3)
{
    *VAR_3 = 0;

    size_t VAR_4 = 0;
    VAR_1[VAR_4].len = FUNC_1(VAR_0->_chunk_len_str, sizeof(VAR_0->_chunk_len_str), "%zx\r\n", VAR_2.len);
    *VAR_3 += VAR_1[VAR_4].len;
    VAR_1[VAR_4++].base = VAR_0->_chunk_len_str;

    if (VAR_2.base != ((void*)0)) {
        VAR_1[VAR_4++] = FUNC_0(VAR_2.base, VAR_2.len);
        *VAR_3 += VAR_2.len;
    }
    VAR_1[VAR_4++] = FUNC_0("\r\n", 2);
    *VAR_3 += 2;

    return VAR_4;
}
