
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* caddr_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int,int,int ) ;
 int FUNC_3 (char*,int,int) ;
 char* FUNC_4 (int ,int,int,int ,int,int ) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int,char*,int) ;

int FUNC_8(int VAR_7, char** VAR_8)
{
    int VAR_9, VAR_10;
    caddr_t VAR_11;
    char VAR_12[4096];
    char VAR_13[200];

    FUNC_3(VAR_12, 0, sizeof VAR_12);
    FUNC_3(VAR_13, 1, sizeof VAR_13);
    VAR_9 = FUNC_5("test2.data", VAR_3);
    if (VAR_9 < 0)
 FUNC_1(1, "opening file");
    if (FUNC_2(VAR_9, 600, VAR_6) < 0)
 FUNC_1(1, "seeking");

    if (FUNC_7(VAR_9, VAR_13, sizeof VAR_13) < 0)
 FUNC_1(1, "writing ones");

    VAR_11 = FUNC_4(0, 4096, VAR_4|VAR_5, VAR_1, VAR_9, 0);
    if (VAR_11 == VAR_0)
 FUNC_1(1, "mapping");
    FUNC_6("test2.scratch");
    VAR_10 = FUNC_5("test2.scratch", VAR_3|VAR_2, 0666);
    if (VAR_10 < 0)
 FUNC_1(1, "creating scratch");

    if (FUNC_7(VAR_10, VAR_11, 4096) < 0)
 FUNC_1(1, "writing scratch");
}
