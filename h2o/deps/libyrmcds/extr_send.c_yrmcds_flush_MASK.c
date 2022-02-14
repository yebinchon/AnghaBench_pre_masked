
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_5__ {scalar_t__ text_mode; } ;
typedef TYPE_1__ yrmcds ;
typedef scalar_t__ uint32_t ;
typedef int extra ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,scalar_t__*,int ,int *,int,char*,int ,int *) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int,scalar_t__*) ;

yrmcds_error FUNC_3(yrmcds* VAR_3, uint32_t VAR_4,
                          int VAR_5, uint32_t* VAR_6) {
    if( VAR_3 == ((void*)0) )
        return VAR_0;

    if( VAR_3->text_mode )
        return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);

    if( VAR_4 == 0 )
        return FUNC_1(VAR_3, VAR_5 ? VAR_2 : VAR_1,
                            0, VAR_6, 0, ((void*)0), 0, ((void*)0), 0, ((void*)0));

    char VAR_7[4];
    FUNC_0(VAR_4, VAR_7);
    return FUNC_1(VAR_3, VAR_5 ? VAR_2 : VAR_1,
                        0, VAR_6, 0, ((void*)0), sizeof(VAR_7), VAR_7, 0, ((void*)0));
}
