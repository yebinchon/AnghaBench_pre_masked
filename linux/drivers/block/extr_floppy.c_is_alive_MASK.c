
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(const char *VAR_3, const char *VAR_4)
{

 if (FUNC_2(0, &VAR_2) && VAR_0 < 2 &&
     !FUNC_1(&VAR_1)) {
  FUNC_0("%s: timeout handler died.  %s\n", VAR_3, VAR_4);
 }
}
