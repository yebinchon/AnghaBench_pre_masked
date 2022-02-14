
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_5__ {scalar_t__ text_mode; } ;
typedef TYPE_1__ yrmcds ;
typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,char const*,size_t,char const*,size_t,int ,int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*,char const*,size_t,char const*,size_t,int ,int ,int ,int,int *) ;

yrmcds_error FUNC_2(yrmcds* VAR_2, const char* VAR_3, size_t VAR_4,
                            const char* VAR_5, size_t VAR_6,
                            uint32_t VAR_7, uint32_t VAR_8, uint64_t VAR_9,
                            int VAR_10, uint32_t* VAR_11) {
    if( VAR_2 && VAR_2->text_mode )
        return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
                                   VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

    return FUNC_0(VAR_2, VAR_10 ? VAR_1 : VAR_0,
                     VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_11);
}
