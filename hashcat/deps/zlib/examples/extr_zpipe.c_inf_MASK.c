
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ avail_in; unsigned char* next_in; scalar_t__ avail_out; unsigned char* next_out; void* opaque; void* zfree; void* zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef int FILE ;


 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (unsigned char*,int,int,int *) ;
 unsigned int FUNC_3 (unsigned char*,int,unsigned int,int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

int FUNC_7(FILE *VAR_7, FILE *VAR_8)
{
    int VAR_9;
    unsigned VAR_10;
    z_stream VAR_11;
    unsigned char VAR_12[VAR_0];
    unsigned char VAR_13[VAR_0];


    VAR_11.zalloc = VAR_3;
    VAR_11.zfree = VAR_3;
    VAR_11.opaque = VAR_3;
    VAR_11.avail_in = 0;
    VAR_11.next_in = VAR_3;
    VAR_9 = FUNC_6(&VAR_11);
    if (VAR_9 != VAR_4)
        return VAR_9;


    do {
        VAR_11.avail_in = FUNC_2(VAR_12, 1, VAR_0, VAR_7);
        if (FUNC_1(VAR_7)) {
            (void)FUNC_5(&VAR_11);
            return VAR_1;
        }
        if (VAR_11.avail_in == 0)
            break;
        VAR_11.next_in = VAR_12;


        do {
            VAR_11.avail_out = VAR_0;
            VAR_11.next_out = VAR_13;
            VAR_9 = FUNC_4(&VAR_11, VAR_2);
            FUNC_0(VAR_9 != VAR_6);
            switch (VAR_9) {
            case 128:
                VAR_9 = 130;
            case 130:
            case 129:
                (void)FUNC_5(&VAR_11);
                return VAR_9;
            }
            VAR_10 = VAR_0 - VAR_11.avail_out;
            if (FUNC_3(VAR_13, 1, VAR_10, VAR_8) != VAR_10 || FUNC_1(VAR_8)) {
                (void)FUNC_5(&VAR_11);
                return VAR_1;
            }
        } while (VAR_11.avail_out == 0);


    } while (VAR_9 != VAR_5);


    (void)FUNC_5(&VAR_11);
    return VAR_9 == VAR_5 ? VAR_4 : 130;
}
