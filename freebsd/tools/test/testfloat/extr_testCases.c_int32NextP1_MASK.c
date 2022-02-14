
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8 ;
struct TYPE_3__ {size_t term1Num; int done; } ;
typedef TYPE_1__ sequenceT ;
typedef int sbits32 ;
typedef int int32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int32 FUNC_0( sequenceT *VAR_3 )
{
    uint8 VAR_4;
    int32 VAR_5;

    VAR_4 = VAR_3->term1Num;
    VAR_5 = VAR_2[ VAR_4 ];
    ++VAR_4;
    if ( VAR_1 <= VAR_4 ) {
        VAR_4 = 0;
        VAR_3->done = VAR_0;
    }
    VAR_3->term1Num = VAR_4;
    return (sbits32) VAR_5;

}
