
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {TYPE_1__* ops; } ;
typedef int header ;
struct TYPE_2__ {int (* read ) (struct fd*,char*,int) ;scalar_t__ (* lseek ) (struct fd*,int ,int ) ;} ;


 scalar_t__ FUNC_0 (struct fd*) ;
 int VAR_0 ;
 int FUNC_1 (struct fd*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct fd*) ;
 int FUNC_3 (struct fd*,char*,char*,char const*) ;
 struct fd* FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,char const*,size_t) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char const*) ;
 size_t FUNC_8 (char const*) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (struct fd*,int ,int ) ;
 int FUNC_11 (struct fd*,char*,int) ;

__attribute__((used)) static int FUNC_12(struct fd *VAR_5, const char *VAR_6, const char *VAR_7, const char *VAR_8) {

    if (VAR_5->ops->lseek(VAR_5, 0, VAR_1))
        return VAR_3;
    char VAR_9[128];
    int VAR_10 = VAR_5->ops->read(VAR_5, VAR_9, sizeof(VAR_9) - 1);
    if (VAR_10 < 0)
        return VAR_3;
    VAR_9[VAR_10] = '\0';


    char *VAR_11 = FUNC_6(VAR_9, '\n');
    if (VAR_11 == ((void*)0))
        return VAR_4;
    *VAR_11 = '\0';


    char *VAR_12 = VAR_9;
    if (VAR_12[0] != '#' || VAR_12[1] != '!')
        return VAR_4;
    VAR_12 += 2;
    while (*VAR_12 == ' ')
        VAR_12++;
    if (*VAR_12 == '\0')
        return VAR_4;

    char *VAR_13 = VAR_12;
    while (*VAR_12 != ' ' && *VAR_12 != '\0')
        VAR_12++;
    if (*VAR_12 != '\0') {
        *VAR_12++ = '\0';
        while (*VAR_12 == ' ')
            VAR_12++;
    }

    char *VAR_14 = VAR_12;

    VAR_12 = FUNC_6(VAR_12, '\0') - 1;
    while (*VAR_12 == ' ')
        *VAR_12-- = '\0';
    if (*VAR_14 == '\0')
        VAR_14 = ((void*)0);

    const char *VAR_15 = VAR_7 + FUNC_9(VAR_7) + 1;
    size_t VAR_16 = FUNC_8(VAR_15);
    size_t VAR_17 = FUNC_9(VAR_13) + 1 + FUNC_9(VAR_6) + 1;
    if (VAR_14)
        VAR_17 += FUNC_9(VAR_14) + 1;
    if (VAR_16 + VAR_17 >= 4096)
        return VAR_2;

    char VAR_18[4096];
    size_t VAR_19 = 0;
    FUNC_7(VAR_18, VAR_13);
    VAR_19 += FUNC_9(VAR_13) + 1;
    if (VAR_14) {
        FUNC_7(VAR_18 + VAR_19, VAR_14);
        VAR_19 += FUNC_9(VAR_14) + 1;
    }
    FUNC_7(VAR_18 + VAR_19, VAR_6);
    VAR_19 += FUNC_9(VAR_6) + 1;
    FUNC_5(VAR_18 + VAR_19, VAR_15, VAR_16);

    struct fd *VAR_20 = FUNC_4(VAR_13, VAR_0, 0);
    if (FUNC_0(VAR_20))
        return FUNC_1(VAR_20);
    int VAR_21 = FUNC_3(VAR_20, VAR_13, VAR_18, VAR_8);
    FUNC_2(VAR_20);
    return VAR_21;
}
