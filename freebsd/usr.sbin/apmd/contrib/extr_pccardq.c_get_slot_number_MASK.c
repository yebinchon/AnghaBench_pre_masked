
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*,char*,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,char*,int) ;

int
FUNC_5(int VAR_0)
{
    char VAR_1[8];
    int VAR_2;
    int VAR_3;

    if ((VAR_2 = FUNC_4(VAR_0, "S", 1)) < 1) {
 FUNC_2("write");
 goto err;
    } else if (VAR_2 != 1) {
 FUNC_3(0, "write: fail.");
 goto err;
    }

    if ((VAR_2 = FUNC_0(VAR_0, VAR_1, sizeof VAR_1)) < 0) {
 FUNC_2("read");
 goto err;
    }
    VAR_1[sizeof VAR_1 - 1] = 0;
    if (FUNC_1(VAR_1, "%d", &VAR_3) != 1) {
 FUNC_3(0, "Invalid response.");
 goto err;
    }
    return VAR_3;
  err:
    return -1;
}
