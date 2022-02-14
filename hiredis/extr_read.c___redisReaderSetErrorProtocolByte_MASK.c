
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbuf ;
typedef int redisReader ;
typedef int cbuf ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (char*,int,char) ;
 int FUNC_2 (char*,int,char*,char*) ;

__attribute__((used)) static void FUNC_3(redisReader *VAR_1, char VAR_2) {
    char VAR_3[8], VAR_4[128];

    FUNC_1(VAR_3,sizeof(VAR_3),VAR_2);
    FUNC_2(VAR_4,sizeof(VAR_4),
        "Protocol error, got %s as reply type byte", VAR_3);
    FUNC_0(VAR_1,VAR_0,VAR_4);
}
