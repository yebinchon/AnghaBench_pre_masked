
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_5__ {scalar_t__ text_mode; } ;
typedef TYPE_1__ yrmcds ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int *,int ,int *,int ,int *,int ,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;

yrmcds_error FUNC_2(yrmcds* VAR_2, uint32_t* VAR_3) {
    if( VAR_2 == ((void*)0) )
        return VAR_0;

    if( VAR_2->text_mode )
        return FUNC_1(VAR_2, VAR_3);

    return FUNC_0(VAR_2, VAR_1,
                        0, VAR_3, 0, ((void*)0), 0, ((void*)0), 0, ((void*)0));
}
