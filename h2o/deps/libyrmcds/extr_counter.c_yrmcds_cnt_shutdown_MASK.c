
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_3__ {int sock; } ;
typedef TYPE_1__ yrmcds_cnt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

yrmcds_error
FUNC_1(yrmcds_cnt* VAR_4) {
    if( VAR_4 == ((void*)0) )
        return VAR_1;
    if( FUNC_0(VAR_4->sock, VAR_0) == -1 )
        return VAR_3;
    return VAR_2;
}
