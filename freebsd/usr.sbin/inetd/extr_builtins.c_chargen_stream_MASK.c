
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
struct servtab {int se_service; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,int) ;
 char* VAR_2 ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static void
FUNC_5(int VAR_3, struct servtab *VAR_4)
{
 int VAR_5;
 char *VAR_6, VAR_7[VAR_0+2];

 FUNC_1(VAR_4->se_service, VAR_3);

 if (!VAR_1)
  FUNC_2();

 VAR_7[VAR_0] = '\r';
 VAR_7[VAR_0 + 1] = '\n';
 for (VAR_6 = VAR_2;;) {
  if ((VAR_5 = VAR_1 - VAR_6) >= VAR_0)
   FUNC_3(VAR_7, VAR_6, VAR_0);
  else {
   FUNC_3(VAR_7, VAR_6, VAR_5);
   FUNC_3(VAR_7 + VAR_5, VAR_2, VAR_0 - VAR_5);
  }
  if (++VAR_6 == VAR_1)
   VAR_6 = VAR_2;
  if (FUNC_4(VAR_3, VAR_7, sizeof(VAR_7)) != sizeof(VAR_7))
   break;
 }
 FUNC_0(0);
}
