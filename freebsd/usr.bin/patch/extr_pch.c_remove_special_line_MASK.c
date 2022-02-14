
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static bool
FUNC_2(void)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == '\\') {
  do {
   VAR_3 = FUNC_0(VAR_2);
  } while (VAR_3 != VAR_0 && VAR_3 != '\n');

  return 1;
 }
 if (VAR_3 != VAR_0)
  FUNC_1(VAR_2, -1, VAR_1);

 return 0;
}
