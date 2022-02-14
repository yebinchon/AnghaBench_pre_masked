
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*,char*,int*) ;
 int * FUNC_4 (char*,char) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (char**,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int,char*,int) ;

int
FUNC_10(int VAR_0, int VAR_1, char **VAR_2, char **VAR_3, char
       **VAR_4, int *VAR_5)
{
    int VAR_6 = -1;
    int VAR_7;
    static char VAR_8[1024];
    int VAR_9;
    char *VAR_10;
    char *VAR_11;

    char *VAR_12;
    char *VAR_13;
    char *VAR_14;

    if ((VAR_9 = FUNC_2(VAR_8, sizeof VAR_8, "N%d", VAR_1)) < 0) {
 FUNC_8(0, "write");
 goto err;
    }

    if ((VAR_7 = FUNC_9(VAR_0, VAR_8, VAR_9)) < 0) {
 FUNC_7("write");
 goto err;
    } else if (VAR_7 != VAR_9) {
 FUNC_8(0, "write");
 goto err;
    }

    if ((VAR_7 = FUNC_1(VAR_0, VAR_8, sizeof VAR_8)) < 0) {
 FUNC_7("read");
 goto err;
    }

    VAR_10 = VAR_8;
    if ((VAR_11 = FUNC_6(&VAR_10, "~")) == ((void*)0))
 goto parse_err;
    if (FUNC_0(VAR_11) != VAR_1)
 goto parse_err;
    if ((VAR_12 = FUNC_6(&VAR_10, "~")) == ((void*)0))
 goto parse_err;
    if ((VAR_13 = FUNC_6(&VAR_10, "~")) == ((void*)0))
 goto parse_err;
    if ((VAR_14 = FUNC_6(&VAR_10, "~")) == ((void*)0))
 goto parse_err;
    if (FUNC_3(VAR_10, "%1d", VAR_5) != 1)
 goto parse_err;
    if (VAR_10 != ((void*)0) && FUNC_4(VAR_10, '~') != ((void*)0))
 goto parse_err;

    if ((*VAR_2 = FUNC_5(VAR_12)) == ((void*)0)) {
 FUNC_7("strdup");
 goto err;
    }
    if ((*VAR_3 = FUNC_5(VAR_13)) == ((void*)0)) {
 FUNC_7("strdup");
 goto err;
    }
    if ((*VAR_4 = FUNC_5(VAR_14)) == ((void*)0)) {
 FUNC_7("strdup");
 goto err;
    }
    if (*VAR_2 == ((void*)0) || *VAR_3 == ((void*)0) || *VAR_4 == ((void*)0)) {
 FUNC_7("strdup");
 goto err;
    }

    VAR_6 = 0;
  err:
    return VAR_6;
  parse_err:
    FUNC_8(0, "Invalid response: %*s", VAR_7, VAR_8);
    return VAR_6;
}
