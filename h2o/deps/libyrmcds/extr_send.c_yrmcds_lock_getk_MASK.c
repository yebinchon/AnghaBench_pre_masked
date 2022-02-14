
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_4__ {scalar_t__ text_mode; } ;
typedef TYPE_1__ yrmcds ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int *,size_t,char const*,int ,int *,int ,int *) ;

yrmcds_error FUNC_1(yrmcds* VAR_4, const char* VAR_5, size_t VAR_6,
                              int VAR_7, uint32_t* VAR_8) {
    if( VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == 0 )
        return VAR_0;

    if( VAR_4->text_mode )
        return VAR_3;

    return FUNC_0(VAR_4, VAR_7 ? VAR_2 : VAR_1,
                        0, VAR_8, VAR_6, VAR_5, 0, ((void*)0), 0, ((void*)0));
}
