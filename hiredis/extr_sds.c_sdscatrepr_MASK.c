
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;


 int FUNC_0 (char const) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,char const) ;

sds FUNC_3(sds VAR_0, const char *VAR_1, size_t VAR_2) {
    VAR_0 = FUNC_1(VAR_0,"\"",1);
    while(VAR_2--) {
        switch(*VAR_1) {
        case '\\':
        case '"':
            VAR_0 = FUNC_2(VAR_0,"\\%c",*VAR_1);
            break;
        case '\n': VAR_0 = FUNC_1(VAR_0,"\\n",2); break;
        case '\r': VAR_0 = FUNC_1(VAR_0,"\\r",2); break;
        case '\t': VAR_0 = FUNC_1(VAR_0,"\\t",2); break;
        case '\a': VAR_0 = FUNC_1(VAR_0,"\\a",2); break;
        case '\b': VAR_0 = FUNC_1(VAR_0,"\\b",2); break;
        default:
            if (FUNC_0(*VAR_1))
                VAR_0 = FUNC_2(VAR_0,"%c",*VAR_1);
            else
                VAR_0 = FUNC_2(VAR_0,"\\x%02x",(unsigned char)*VAR_1);
            break;
        }
        VAR_1++;
    }
    return FUNC_1(VAR_0,"\"",1);
}
