
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit {int dummy; } ;
typedef int c ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct commit*,int ,int) ;
 scalar_t__ FUNC_3 (int ,struct commit*,void const*,size_t,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(const void *VAR_1, size_t VAR_2)
{
 struct commit VAR_3;
 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 if (FUNC_3(VAR_0, &VAR_3, VAR_1, VAR_2, 0))
  FUNC_1(FUNC_0("corrupt commit"));
}
