
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yajl_handle ;


 int FUNC_0 (char*,unsigned char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned char*) ;
 unsigned char* FUNC_7 (int ,int,unsigned char const*,size_t const) ;
 scalar_t__ FUNC_8 (int ,unsigned char const*,size_t const) ;
 scalar_t__ VAR_3 ;

bool FUNC_9(const char *VAR_4, const size_t VAR_5) {
    bool VAR_6 = 1;
    yajl_handle VAR_7 = FUNC_2(((void*)0), ((void*)0), ((void*)0));

    FUNC_4(VAR_7, VAR_1, 1);

    FUNC_4(VAR_7, VAR_2, 1);

    FUNC_1(VAR_0, "C");
    if (FUNC_8(VAR_7, (const unsigned char *)VAR_4, VAR_5) != VAR_3) {
        unsigned char *VAR_8 = FUNC_7(VAR_7, 1, (const unsigned char *)VAR_4, VAR_5);
        FUNC_0("JSON parsing error: %s\n", VAR_8);
        FUNC_6(VAR_7, VAR_8);
        VAR_6 = 0;
    }
    FUNC_1(VAR_0, "");

    FUNC_3(VAR_7);
    FUNC_5(VAR_7);

    return VAR_6;
}
