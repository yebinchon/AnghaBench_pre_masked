
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netent {int dummy; } ;
typedef scalar_t__ in_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 struct netent* FUNC_2 (scalar_t__,int ) ;
 struct netent* FUNC_3 (char*) ;
 struct netent* FUNC_4 () ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (struct netent*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(int VAR_4, char *VAR_5[])
{
 struct netent *VAR_6;
 in_addr_t VAR_7;
 int VAR_8, VAR_9;

 FUNC_0(VAR_4 > 1);
 FUNC_0(VAR_5 != ((void*)0));

 FUNC_7(1);
 VAR_9 = VAR_3;
 if (VAR_4 == 2) {
  while ((VAR_6 = FUNC_4()) != ((void*)0))
   FUNC_6(VAR_6);
 } else {
  for (VAR_8 = 2; VAR_8 < VAR_4; VAR_8++) {
   VAR_7 = FUNC_5(VAR_5[VAR_8]);
   if (VAR_7 != VAR_1)
    VAR_6 = FUNC_2(VAR_7, VAR_0);
   else
    VAR_6 = FUNC_3(VAR_5[VAR_8]);
   if (VAR_6 != ((void*)0))
    FUNC_6(VAR_6);
   else {
    VAR_9 = VAR_2;
    break;
   }
  }
 }
 FUNC_1();
 return VAR_9;
}
