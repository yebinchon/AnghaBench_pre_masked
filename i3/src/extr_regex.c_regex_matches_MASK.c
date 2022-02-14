
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regex {int pattern; int extra; int regex; } ;


 int FUNC_0 (char*,int,int ,char const*) ;
 int FUNC_1 (char*,int ,char const*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,char const*,int ,int ,int ,int *,int ) ;
 int FUNC_3 (char const*) ;

bool FUNC_4(struct regex *VAR_1, const char *VAR_2) {
    int VAR_3;



    if ((VAR_3 = FUNC_2(VAR_1->regex, VAR_1->extra, VAR_2, FUNC_3(VAR_2), 0, 0, ((void*)0), 0)) == 0) {
        FUNC_1("Regular expression \"%s\" matches \"%s\"\n",
            VAR_1->pattern, VAR_2);
        return 1;
    }

    if (VAR_3 == VAR_0) {
        FUNC_1("Regular expression \"%s\" does not match \"%s\"\n",
            VAR_1->pattern, VAR_2);
        return 0;
    }

    FUNC_0("PCRE error %d while trying to use regular expression \"%s\" on input \"%s\", see pcreapi(3)\n",
         VAR_3, VAR_1->pattern, VAR_2);
    return 0;
}
