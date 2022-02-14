
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int redisReply ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(redisReply *VAR_1, void *VAR_2, const char *VAR_3)
{
    if (VAR_3 != ((void*)0)) {
        FUNC_1(VAR_0, "redis error: %s\n", VAR_3);
        return;
    }
    if (VAR_1 != ((void*)0)) {
        FUNC_0(VAR_1, 0);
    }
}
