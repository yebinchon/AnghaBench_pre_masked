
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int yrmcds_error ;
typedef scalar_t__ yrmcds_cnt_command ;
struct TYPE_3__ {int serial; int lock; int sock; } ;
typedef TYPE_1__ yrmcds_cnt ;
typedef int uint32_t ;
struct iovec {char* iov_base; int iov_len; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct iovec*,int) ;

__attribute__((used)) static yrmcds_error
FUNC_5(yrmcds_cnt* VAR_7, yrmcds_cnt_command VAR_8, uint32_t* VAR_9,
             size_t VAR_10, const char* VAR_11,
             size_t VAR_12, const char* VAR_13) {
    if( VAR_7 == ((void*)0) ||
        VAR_10 > VAR_2 - VAR_12 ||
        (VAR_10 != 0 && VAR_11 == ((void*)0)) ||
        (VAR_12 != 0 && VAR_13 == ((void*)0)) )
        return VAR_3;


    int VAR_14 = FUNC_2(&VAR_7->lock);
    if( VAR_14 != 0 ) {
        VAR_6 = VAR_14;
        return VAR_5;
    }


    VAR_7->serial += 1;
    if( VAR_9 != ((void*)0) )
        *VAR_9 = VAR_7->serial;

    char VAR_15[VAR_1];
    VAR_15[0] = '\x90';
    VAR_15[1] = (char)VAR_8;
    VAR_15[2] = 0;
    VAR_15[3] = 0;
    FUNC_0((uint32_t)(VAR_10 + VAR_12), VAR_15 + 4);
    FUNC_1(VAR_15 + 8, &VAR_7->serial, 4);

    yrmcds_error VAR_16 = VAR_4;

    struct iovec VAR_17[3];
    size_t VAR_18 = 1;

    VAR_17[0].iov_base = VAR_15;
    VAR_17[0].iov_len = VAR_1;

    if( VAR_10 != 0 ) {
        VAR_17[VAR_18].iov_base = (void*)VAR_11;
        VAR_17[VAR_18].iov_len = VAR_10;
        ++VAR_18;
    }
    if( VAR_12 != 0 ) {
        VAR_17[VAR_18].iov_base = (void*)VAR_13;
        VAR_17[VAR_18].iov_len = VAR_12;
        ++VAR_18;
    }

    size_t VAR_19;
    for( VAR_19 = 0; VAR_19 < VAR_18; ) {
        ssize_t VAR_20 = FUNC_4(VAR_7->sock, VAR_17 + VAR_19, (int)(VAR_18 - VAR_19));
        size_t VAR_21 = (size_t)VAR_20;
        if( VAR_20 == -1 ) {
            if( VAR_6 == VAR_0 ) continue;
            VAR_16 = VAR_5;
            break;
        }
        while( VAR_21 > 0 ) {
            if( VAR_21 < VAR_17[VAR_19].iov_len ) {
                VAR_17[VAR_19].iov_base = (char*)VAR_17[VAR_19].iov_base + VAR_21;
                VAR_17[VAR_19].iov_len -= VAR_21;
                break;
            }
            VAR_21 -= VAR_17[VAR_19].iov_len;
            ++VAR_19;
        }
    }


    FUNC_3(&VAR_7->lock);

    return VAR_16;
}
