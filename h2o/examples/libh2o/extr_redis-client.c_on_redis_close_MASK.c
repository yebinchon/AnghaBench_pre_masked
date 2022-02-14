
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(const char *VAR_4)
{
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_3, "disconnected from redis\n");
    } else {
        FUNC_0(VAR_3, "redis connection failure: %s\n", VAR_4);

        FUNC_2(1000000);
        FUNC_1(VAR_0, VAR_1, VAR_2);
    }
}
