
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (int ,char*,int *,int ) ;
 struct option FUNC_3 (int *,int ) ;
 struct option FUNC_4 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_6 () ;
 int VAR_2 ;
 int FUNC_7 (int ,struct option*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(int VAR_5, const char **VAR_6, const char *VAR_7)
{
 struct option VAR_8[] = {
  FUNC_3(&VAR_2, FUNC_0("do not remove, show only")),
  FUNC_4(&VAR_3, FUNC_0("report pruned working trees")),
  FUNC_2(0, "expire", &VAR_1,
    FUNC_0("expire working trees older than <time>")),
  FUNC_1()
 };

 VAR_1 = VAR_0;
 VAR_5 = FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8, VAR_4, 0);
 if (VAR_5)
  FUNC_7(VAR_4, VAR_8);
 FUNC_6();
 return 0;
}
