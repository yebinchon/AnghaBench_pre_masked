
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ACPIRegionContent {void* value; void* addr; void* regtype; } ;
typedef int FILE ;


 int FUNC_0 (void*,void*,void**) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 void* FUNC_4 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_1)
{
 char VAR_2[256], *VAR_3, *VAR_4;
 struct ACPIRegionContent VAR_5;
 FILE *VAR_6;

 if (!VAR_0) {
  return;
 }

 if ((VAR_6 = FUNC_3(VAR_1, "r")) == ((void*)0)) {
  return;
 }

 while (FUNC_2(VAR_2, sizeof VAR_2, VAR_6) != ((void*)0)) {
  VAR_3 = VAR_2;

  VAR_5.regtype = FUNC_4(VAR_3, &VAR_4, 10);
  if (VAR_3 == VAR_4) {
   continue;
  }
  VAR_3 = VAR_4;


  VAR_5.addr = FUNC_4(VAR_3, &VAR_4, 16);
  if (VAR_3 == VAR_4) {
   continue;
  }
  VAR_3 = VAR_4;


  VAR_5.value = FUNC_4(VAR_3, &VAR_4, 16);
  if (VAR_3 == VAR_4) {
   continue;
  }
  FUNC_0(VAR_5.regtype, VAR_5.addr, &VAR_5.value);
 }

 FUNC_1(VAR_6);
}
