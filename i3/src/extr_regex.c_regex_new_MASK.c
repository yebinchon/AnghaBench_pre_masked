
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regex {int regex; int extra; int pattern; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,int,int*,char const**,int*,int *) ;
 int FUNC_2 (int ,int ,char const**) ;
 int FUNC_3 (struct regex*) ;
 struct regex* FUNC_4 (int,int) ;
 int FUNC_5 (char const*) ;

struct regex *FUNC_6(const char *VAR_2) {
    const char *VAR_3;
    int VAR_4, VAR_5;

    struct regex *VAR_6 = FUNC_4(1, sizeof(struct regex));
    VAR_6->pattern = FUNC_5(VAR_2);
    int VAR_7 = VAR_1;


    VAR_7 |= VAR_0;
    while (!(VAR_6->regex = FUNC_1(VAR_2, VAR_7, &VAR_4, &VAR_3, &VAR_5, ((void*)0)))) {


        if (VAR_4 == 32) {
            VAR_7 &= ~VAR_1;
            continue;
        }
        FUNC_0("PCRE regular expression compilation failed at %d: %s\n",
             VAR_5, VAR_3);
        FUNC_3(VAR_6);
        return ((void*)0);
    }
    VAR_6->extra = FUNC_2(VAR_6->regex, 0, &VAR_3);



    if (VAR_3) {
        FUNC_0("PCRE regular expression studying failed: %s\n", VAR_3);
    }
    return VAR_6;
}
