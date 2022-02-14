
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8 ;
struct TYPE_3__ {size_t term1Num; size_t expNum; int done; } ;
typedef TYPE_1__ sequenceT ;
typedef int float32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static float32 FUNC_0( sequenceT *VAR_5 )
{
    uint8 VAR_6, VAR_7;
    float32 VAR_8;

    VAR_7 = VAR_5->term1Num;
    VAR_6 = VAR_5->expNum;
    VAR_8 = VAR_4[ VAR_6 ] | VAR_3[ VAR_7 ];
    ++VAR_7;
    if ( VAR_1 <= VAR_7 ) {
        VAR_7 = 0;
        ++VAR_6;
        if ( VAR_2 <= VAR_6 ) {
            VAR_6 = 0;
            VAR_5->done = VAR_0;
        }
        VAR_5->expNum = VAR_6;
    }
    VAR_5->term1Num = VAR_7;
    return VAR_8;

}
