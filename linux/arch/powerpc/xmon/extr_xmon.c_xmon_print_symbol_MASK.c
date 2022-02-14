
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (unsigned long,unsigned long*,unsigned long*,char**,int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_4, const char *VAR_5,
         const char *VAR_6)
{
 char *VAR_7;
 const char *VAR_8 = ((void*)0);
 unsigned long VAR_9, VAR_10;

 FUNC_2(VAR_0, VAR_4);
 if (FUNC_3(VAR_1) == 0) {
  VAR_2 = 1;
  FUNC_4();
  VAR_8 = FUNC_1(VAR_4, &VAR_10, &VAR_9, &VAR_7,
           VAR_3);
  FUNC_4();

  FUNC_0(200);
 }

 VAR_2 = 0;

 if (VAR_8) {
  FUNC_2("%s%s+%#lx/%#lx", VAR_5, VAR_8, VAR_9, VAR_10);
  if (VAR_7)
   FUNC_2(" [%s]", VAR_7);
 }
 FUNC_2("%s", VAR_6);
}
