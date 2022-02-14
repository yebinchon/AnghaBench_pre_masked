
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
 int FUNC_0 (TYPE_1__*,int ,char const*,size_t,char const*,size_t,int ,int ,int ,int *) ;

yrmcds_error FUNC_1(yrmcds* VAR_3, const char* VAR_4, size_t VAR_5,
                                   const char* VAR_6, size_t VAR_7,
                                   uint32_t VAR_8, uint32_t VAR_9,
                                   int VAR_10, uint32_t* VAR_11) {
    if( VAR_3 && VAR_3->text_mode )
        return VAR_2;

    return FUNC_0(VAR_3, VAR_10 ? VAR_1 : VAR_0,
                     VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, 0, VAR_11);
}
