
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_char2b_t ;
typedef scalar_t__ iconv_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 size_t FUNC_1 (scalar_t__,char**,size_t*,char**,size_t*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (size_t) ;
 int * FUNC_5 (int *,size_t) ;
 size_t FUNC_6 (char*) ;
 scalar_t__ VAR_1 ;

xcb_char2b_t *FUNC_7(char *VAR_2, size_t *VAR_3) {

    size_t VAR_4 = FUNC_6(VAR_2);


    size_t VAR_5 = VAR_4 * sizeof(xcb_char2b_t);
    xcb_char2b_t *VAR_6 = FUNC_4(VAR_5);


    size_t VAR_7 = VAR_5;
    xcb_char2b_t *VAR_8 = VAR_6;

    if (VAR_1 == (iconv_t)-1) {



        VAR_1 = FUNC_2("UCS-2BE//IGNORE", "UTF-8");
        if (VAR_1 == (iconv_t)-1) {
            VAR_1 = FUNC_2("UCS-2BE", "UTF-8");
        }
        if (VAR_1 == (iconv_t)-1) {
            FUNC_0(VAR_0, "Error opening the conversion context");
        }
    } else {

        FUNC_1(VAR_1, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    }


    size_t VAR_9 = FUNC_1(VAR_1, &VAR_2, &VAR_4,
                      (char **)&VAR_8, &VAR_7);
    if (VAR_9 == (size_t)-1) {

        FUNC_3("Converting to UCS-2 failed");
    }


    VAR_5 -= VAR_7;
    VAR_6 = FUNC_5(VAR_6, VAR_5);


    if (VAR_3 != ((void*)0)) {
        *VAR_3 = VAR_5 / sizeof(xcb_char2b_t);
    }

    return VAR_6;
}
