
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_3__ {int sock; } ;
typedef TYPE_1__ yrmcds_cnt ;
typedef int tv ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,struct timeval*,int) ;

yrmcds_error
FUNC_1(yrmcds_cnt* VAR_6, int VAR_7) {
    if( VAR_6 == ((void*)0) || VAR_7 < 0 )
        return VAR_3;

    struct timeval VAR_8;
    VAR_8.tv_sec = VAR_7;
    VAR_8.tv_usec = 0;

    if( FUNC_0(VAR_6->sock, VAR_0, VAR_1, &VAR_8, sizeof(VAR_8)) == -1 )
        return VAR_5;
    if( FUNC_0(VAR_6->sock, VAR_0, VAR_2, &VAR_8, sizeof(VAR_8)) == -1 )
        return VAR_5;
    return VAR_4;
}
