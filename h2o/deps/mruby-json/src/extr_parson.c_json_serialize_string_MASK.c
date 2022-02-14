
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, char *VAR_1) {
    size_t VAR_2 = 0, VAR_3 = FUNC_1(VAR_0);
    char VAR_4 = '\0';
    int VAR_5 = -1, VAR_6 = 0;
    FUNC_0("\"");
    for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
        VAR_4 = VAR_0[VAR_2];
        switch (VAR_4) {
            case '\"': FUNC_0("\\\""); break;
            case '\\': FUNC_0("\\\\"); break;
            case '/': FUNC_0("\\/"); break;
            case '\b': FUNC_0("\\b"); break;
            case '\f': FUNC_0("\\f"); break;
            case '\n': FUNC_0("\\n"); break;
            case '\r': FUNC_0("\\r"); break;
            case '\t': FUNC_0("\\t"); break;
            case '\x00': FUNC_0("\\u0000"); break;
            case '\x01': FUNC_0("\\u0001"); break;
            case '\x02': FUNC_0("\\u0002"); break;
            case '\x03': FUNC_0("\\u0003"); break;
            case '\x04': FUNC_0("\\u0004"); break;
            case '\x05': FUNC_0("\\u0005"); break;
            case '\x06': FUNC_0("\\u0006"); break;
            case '\x07': FUNC_0("\\u0007"); break;



            case '\x0b': FUNC_0("\\u000b"); break;


            case '\x0e': FUNC_0("\\u000e"); break;
            case '\x0f': FUNC_0("\\u000f"); break;
            case '\x10': FUNC_0("\\u0010"); break;
            case '\x11': FUNC_0("\\u0011"); break;
            case '\x12': FUNC_0("\\u0012"); break;
            case '\x13': FUNC_0("\\u0013"); break;
            case '\x14': FUNC_0("\\u0014"); break;
            case '\x15': FUNC_0("\\u0015"); break;
            case '\x16': FUNC_0("\\u0016"); break;
            case '\x17': FUNC_0("\\u0017"); break;
            case '\x18': FUNC_0("\\u0018"); break;
            case '\x19': FUNC_0("\\u0019"); break;
            case '\x1a': FUNC_0("\\u001a"); break;
            case '\x1b': FUNC_0("\\u001b"); break;
            case '\x1c': FUNC_0("\\u001c"); break;
            case '\x1d': FUNC_0("\\u001d"); break;
            case '\x1e': FUNC_0("\\u001e"); break;
            case '\x1f': FUNC_0("\\u001f"); break;
            default:
                if (VAR_1 != ((void*)0)) {
                    VAR_1[0] = VAR_4;
                    VAR_1 += 1;
                }
                VAR_6 += 1;
                break;
        }
    }
    FUNC_0("\"");
    return VAR_6;
}
