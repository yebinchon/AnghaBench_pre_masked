
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct progress {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct progress*,int) ;
 int FUNC_2 (char const*,int ,int ,int ,struct progress*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct progress* FUNC_4 (int ,int) ;
 int VAR_4 ;
 int FUNC_5 (struct progress**) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_6(const char *VAR_6)
{
 struct progress *VAR_7 = ((void*)0);

 if (VAR_5)
  FUNC_3(VAR_4, FUNC_0("Checking object directory"));

 if (VAR_3)
  VAR_7 = FUNC_4(FUNC_0("Checking object directories"), 256);

 FUNC_2(VAR_6, VAR_1, VAR_0, VAR_2,
          VAR_7);
 FUNC_1(VAR_7, 256);
 FUNC_5(&VAR_7);
}
