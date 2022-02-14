
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_3__ {int capacity; scalar_t__ used; char* recvbuf; int sock; } ;
typedef TYPE_1__ yrmcds_cnt ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (char*,size_t) ;
 int FUNC_1 (int ,char*,scalar_t__,int ) ;

__attribute__((used)) static yrmcds_error
FUNC_2(yrmcds_cnt* VAR_7) {
    if( (VAR_7->capacity - VAR_7->used) < VAR_1 ) {
        size_t VAR_8 = VAR_7->capacity * 2;
        char* VAR_9 = (char*)FUNC_0(VAR_7->recvbuf, VAR_8);
        if( VAR_9 == ((void*)0) )
            return VAR_4;
        VAR_7->recvbuf = VAR_9;
        VAR_7->capacity = VAR_8;
    }

    ssize_t VAR_10;
  AGAIN:
    VAR_10 = FUNC_1(VAR_7->sock, VAR_7->recvbuf + VAR_7->used, VAR_1, 0);
    if( VAR_10 == -1 ) {
        if( VAR_6 == VAR_0 ) goto AGAIN;
        return VAR_5;
    }
    if( VAR_10 == 0 )
        return VAR_2;
    VAR_7->used += (size_t)VAR_10;
    return VAR_3;
}
