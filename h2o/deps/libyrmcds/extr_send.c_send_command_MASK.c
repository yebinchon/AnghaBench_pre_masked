
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int yrmcds_error ;
typedef scalar_t__ yrmcds_command ;
struct TYPE_3__ {int lock; int sock; int serial; } ;
typedef TYPE_1__ yrmcds ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct iovec {char* iov_base; int iov_len; } ;
typedef int ssize_t ;
typedef int h ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int *,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct iovec*,int) ;

__attribute__((used)) static yrmcds_error FUNC_8(
    yrmcds* VAR_8, yrmcds_command VAR_9, uint64_t VAR_10, uint32_t* VAR_11,
    size_t VAR_12, const char* VAR_13,
    size_t VAR_14, const char* VAR_15,
    size_t VAR_16, const char* VAR_17) {
    if( VAR_9 >= VAR_4 ||
        VAR_12 > 65535 || VAR_14 > 127 || VAR_16 > VAR_2 ||
        (VAR_12 != 0 && VAR_13 == ((void*)0)) ||
        (VAR_14 != 0 && VAR_15 == ((void*)0)) ||
        (VAR_16 != 0 && VAR_17 == ((void*)0)) )
        return VAR_3;

    char VAR_18[VAR_0];
    FUNC_4(VAR_18, 0, sizeof(VAR_18));
    VAR_18[0] = '\x80';
    VAR_18[1] = (char)VAR_9;
    FUNC_0((uint16_t)VAR_12, &VAR_18[2]);
    VAR_18[4] = (char)VAR_14;
    size_t VAR_19 = (VAR_12 + VAR_14 + VAR_16);
    FUNC_1((uint32_t)VAR_19, &VAR_18[8]);
    FUNC_2(VAR_10, &VAR_18[16]);


    int VAR_20 = FUNC_5(&VAR_8->lock);
    if( VAR_20 != 0 ) {
        VAR_7 = VAR_20;
        return VAR_6;
    }


    yrmcds_error VAR_21 = VAR_5;
    VAR_8->serial = VAR_8->serial + 1;
    FUNC_3(&VAR_18[12], &VAR_8->serial, 4);
    if( VAR_11 != ((void*)0) )
        *VAR_11 = VAR_8->serial;

    struct iovec VAR_22[4];
    int VAR_23 = 1;
    VAR_22[0].iov_base = VAR_18;
    VAR_22[0].iov_len = sizeof(VAR_18);

    if( VAR_14 > 0 ) {
        VAR_22[VAR_23].iov_base = (void*)VAR_15;
        VAR_22[VAR_23].iov_len = VAR_14;
        VAR_23++;
    }
    if( VAR_12 > 0 ) {
        VAR_22[VAR_23].iov_base = (void*)VAR_13;
        VAR_22[VAR_23].iov_len = VAR_12;
        VAR_23++;
    }
    if( VAR_16 > 0 ) {
        VAR_22[VAR_23].iov_base = (void*)VAR_17;
        VAR_22[VAR_23].iov_len = VAR_16;
        VAR_23++;
    }

    while( VAR_23 > 0 ) {
        ssize_t VAR_24 = FUNC_7(VAR_8->sock, VAR_22, VAR_23);
        size_t VAR_25 = (size_t)VAR_24;
        if( VAR_24 == -1 ) {
            if( VAR_7 == VAR_1 ) continue;
            VAR_21 = VAR_6;
            goto OUT;
        }
        while( VAR_25 > 0 ) {
            if( VAR_25 < VAR_22[0].iov_len ) {
                VAR_22[0].iov_base = (char*)VAR_22[0].iov_base + VAR_25;
                VAR_22[0].iov_len -= VAR_25;
                break;
            }
            VAR_25 -= VAR_22[0].iov_len;
            VAR_23 --;
            if( VAR_23 == 0 )
                break;

            int VAR_26;
            for( VAR_26 = 0; VAR_26 < VAR_23; ++VAR_26 )
                VAR_22[VAR_26] = VAR_22[VAR_26+1];
        }
    }

  OUT:

    FUNC_6(&VAR_8->lock);

    return VAR_21;
}
