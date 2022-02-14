
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct st_fcgi_record_header_t {scalar_t__ version; scalar_t__ type; scalar_t__ paddingLength; scalar_t__ reserved; int contentLength; int requestId; } ;
struct TYPE_3__ {scalar_t__ len; scalar_t__ base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,size_t,char const*,size_t) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(h2o_iovec_t *VAR_4, size_t *VAR_5, uint16_t VAR_6, const char *VAR_7, size_t VAR_8)
{


    char VAR_9[4096];
    size_t VAR_10 = 0;

    while (1) {
        if (VAR_4[*VAR_5].len != VAR_1) {
            FUNC_1(VAR_3, "record too short (index: %zu)\n", *VAR_5);
            return 0;
        }
        struct st_fcgi_record_header_t *VAR_11 = (void *)VAR_4[*VAR_5].base;
        if (VAR_11->version != VAR_2 || VAR_11->type != VAR_0 || VAR_11->paddingLength != 0 ||
            VAR_11->reserved != 0) {
            FUNC_1(VAR_3, "header is corrupt (index: %zu)\n", *VAR_5);
            return 0;
        }
        if ((((unsigned char *)&VAR_11->requestId)[0] << 8 | ((unsigned char *)&VAR_11->requestId)[1]) != VAR_6) {
            FUNC_1(VAR_3, "unexpected request id (index: %zu)\n", *VAR_5);
            return 0;
        }
        ++*VAR_5;
        if ((((unsigned char *)&VAR_11->contentLength)[0] << 8 | ((unsigned char *)&VAR_11->contentLength)[1]) == 0)
            break;
        if (VAR_4[*VAR_5].len != (((unsigned char *)&VAR_11->contentLength)[0] << 8 | ((unsigned char *)&VAR_11->contentLength)[1])) {
            FUNC_1(VAR_3, "unexpected body size (index: %zu)\n", *VAR_5);
            return 0;
        }
        FUNC_3(VAR_9 + VAR_10, VAR_4[*VAR_5].base, VAR_4[*VAR_5].len);
        VAR_10 += VAR_4[*VAR_5].len;
        ++*VAR_5;
    }

    if (!FUNC_2(VAR_9, VAR_10, VAR_7, VAR_8)) {
        FUNC_1(VAR_3, "PARAMS content mistach\n");
        return 0;
    }

    return 1;


}
