
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8 ;
struct TYPE_4__ {size_t term1Num; size_t expNum; int done; } ;
typedef TYPE_1__ sequenceT ;
typedef int float64 ;
struct TYPE_5__ {int high; int low; } ;


 int FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__* VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static float64 FUNC_1( sequenceT *VAR_5 )
{
    uint8 VAR_6, VAR_7;
    float64 VAR_8;

    VAR_7 = VAR_5->term1Num;
    VAR_6 = VAR_5->expNum;
    FUNC_0(
        VAR_8,
        VAR_4[ VAR_6 ] | VAR_3[ VAR_7 ].high,
        VAR_3[ VAR_7 ].low
    );
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
