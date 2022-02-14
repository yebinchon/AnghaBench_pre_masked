
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yrmcds_error ;
typedef int yrmcds ;
typedef int uint32_t ;
typedef int textbuf_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

yrmcds_error FUNC_5(yrmcds* VAR_1, uint32_t VAR_2,
                               int VAR_3, uint32_t* VAR_4) {
    if( VAR_3 )
        return VAR_0;

    textbuf_t VAR_5[1];
    FUNC_4(VAR_5);

    FUNC_2(VAR_5, "flush_all");
    if( VAR_2 != 0 ) {
        FUNC_1(VAR_5, ' ');
        FUNC_3(VAR_5, VAR_2);
    }

    return FUNC_0(VAR_1, VAR_5, VAR_4);
}
