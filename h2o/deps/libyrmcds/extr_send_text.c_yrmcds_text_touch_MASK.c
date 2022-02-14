
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ yrmcds_error ;
typedef int yrmcds ;
typedef int uint32_t ;
typedef int textbuf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,size_t) ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,char) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char const*,size_t) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

yrmcds_error FUNC_7(yrmcds* VAR_2, const char* VAR_3, size_t VAR_4,
                               uint32_t VAR_5, int VAR_6, uint32_t* VAR_7) {
    if( VAR_3 == ((void*)0) || VAR_4 == 0 || VAR_6 )
        return VAR_0;

    yrmcds_error VAR_8;
    VAR_8 = FUNC_0(VAR_3, VAR_4);
    if( VAR_8 != VAR_1 ) return VAR_8;

    textbuf_t VAR_9[1];
    FUNC_6(VAR_9);

    FUNC_3(VAR_9, "touch ");
    FUNC_4(VAR_9, VAR_3, VAR_4);
    FUNC_2(VAR_9, ' ');
    FUNC_5(VAR_9, VAR_5);

    return FUNC_1(VAR_2, VAR_9, VAR_7);
}
