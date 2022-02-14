
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_3__ {scalar_t__ serial; int text_mode; int lock; } ;
typedef TYPE_1__ yrmcds ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

yrmcds_error FUNC_2(yrmcds* VAR_5) {
    if( VAR_5 == ((void*)0) )
        return VAR_0;


    int VAR_6 = FUNC_0(&VAR_5->lock);
    if( VAR_6 != 0 ) {
        VAR_4 = VAR_6;
        return VAR_3;
    }


    yrmcds_error VAR_7 = VAR_2;
    if( VAR_5->serial != 0 ) {
        VAR_7 = VAR_1;
        goto OUT;
    }

    VAR_5->text_mode = 1;

  OUT:

    FUNC_1(&VAR_5->lock);

    return VAR_7;
}
