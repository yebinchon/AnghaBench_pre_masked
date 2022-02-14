
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_4__ {scalar_t__ text_mode; } ;
typedef TYPE_1__ yrmcds ;
typedef int uint32_t ;
typedef int key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int *,int,char const*,int ,int *,int ,int *) ;

yrmcds_error FUNC_1(yrmcds* VAR_3, uint32_t* VAR_4) {
    if( VAR_3 == ((void*)0) )
        return VAR_0;

    if( VAR_3->text_mode )
        return VAR_2;

    const char VAR_5[] = "items";
    return FUNC_0(VAR_3, VAR_1,
                        0, VAR_4, sizeof(VAR_5) - 1, VAR_5, 0, ((void*)0), 0, ((void*)0));
}
