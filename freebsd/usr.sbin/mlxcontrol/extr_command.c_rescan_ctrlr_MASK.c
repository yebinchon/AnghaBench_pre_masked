
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(int VAR_1, void *VAR_2)
{
    int VAR_3;


    if ((VAR_3 = FUNC_4(FUNC_2(VAR_1), 0)) < 0) {
 FUNC_5("can't open %s", FUNC_2(VAR_1));
 return;
    }

    if (FUNC_3(VAR_3, VAR_0) < 0)
 FUNC_5("can't rescan %s", FUNC_1(VAR_1));
    FUNC_0(VAR_3);
}
