
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xtty {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 struct xtty* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char*) ;
 struct xtty* FUNC_3 (struct xtty*,size_t) ;
 int FUNC_4 (char*,struct xtty*,size_t*,int ,int ) ;
 int FUNC_5 (struct xtty*) ;

__attribute__((used)) static void
FUNC_6(void)
{
 struct xtty *VAR_3;
 size_t VAR_4;
 unsigned int VAR_5, VAR_6;

 (void)FUNC_2("%s", VAR_2);
 if ((VAR_3 = FUNC_1(VAR_4 = sizeof(*VAR_3))) == ((void*)0))
  FUNC_0(1, "malloc()");
 while (FUNC_4("kern.ttys", VAR_3, &VAR_4, 0, 0) == -1) {
  if (VAR_1 != VAR_0)
   FUNC_0(1, "sysctlbyname()");
  VAR_4 *= 2;
  if ((VAR_3 = FUNC_3(VAR_3, VAR_4)) == ((void*)0))
   FUNC_0(1, "realloc()");
 }
 VAR_6 = VAR_4 / sizeof(*VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  FUNC_5(&VAR_3[VAR_5]);
}
