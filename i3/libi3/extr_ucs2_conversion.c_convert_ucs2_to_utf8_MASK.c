
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_char2b_t ;
typedef scalar_t__ iconv_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (scalar_t__,char**,size_t*,char**,size_t*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (size_t,int) ;
 scalar_t__ VAR_1 ;

char *FUNC_6(xcb_char2b_t *VAR_2, size_t VAR_3) {

    size_t VAR_4 = VAR_3 * 4 + 1;
    char *VAR_5 = FUNC_5(VAR_4, 1);


    char *VAR_6 = VAR_5;
    size_t VAR_7 = VAR_4 - 1;

    if (VAR_1 == (iconv_t)-1) {

        VAR_1 = FUNC_3("UTF-8", "UCS-2BE");
        if (VAR_1 == (iconv_t)-1)
            FUNC_0(VAR_0, "Error opening the conversion context");
    } else {

        FUNC_2(VAR_1, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    }


    size_t VAR_8 = VAR_3 * sizeof(xcb_char2b_t);
    size_t VAR_9 = FUNC_2(VAR_1, (char **)&VAR_2,
                      &VAR_8, &VAR_6, &VAR_7);
    if (VAR_9 == (size_t)-1) {
        FUNC_4("Converting to UTF-8 failed");
        FUNC_1(VAR_5);
        return ((void*)0);
    }

    return VAR_5;
}
