
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (int*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int,char const**,int *,struct option*,int ,int ) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (int ,struct option*) ;

__attribute__((used)) static int FUNC_6(int VAR_1, const char **VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;
 struct option VAR_5[] = {
  FUNC_2(&VAR_3, FUNC_0("dry run")),
  FUNC_1()
 };

 VAR_1 = FUNC_3(VAR_1, VAR_2, ((void*)0), VAR_5, VAR_0,
        0);

 if (VAR_1 < 1)
  FUNC_5(VAR_0, VAR_5);

 for (; VAR_1; VAR_1--, VAR_2++)
  VAR_4 |= FUNC_4(*VAR_2, VAR_3);

 return VAR_4;
}
