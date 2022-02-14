
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; size_t data_len; } ;
typedef TYPE_1__ yrmcds_response ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,size_t) ;

__attribute__((used)) static void FUNC_1(const yrmcds_response* VAR_1) {
    const char* VAR_2 = VAR_1->data;
    size_t VAR_3 = VAR_1->data_len;
    while( VAR_3 > 0 ) {
        ssize_t VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3);
        if( VAR_4 == -1 ) return;
        VAR_2 += VAR_4;
        VAR_3 -= (size_t)VAR_4;
    }



}
