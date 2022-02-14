
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char**) ;
 int FUNC_1 (char*,char**,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(char *VAR_2, char *VAR_3)
{
 static bool VAR_4;
 char *VAR_5;

 if (!FUNC_2(VAR_2, "hugepagesz")) {
  VAR_5 = VAR_3;
  if (FUNC_0(VAR_5, &VAR_5) != VAR_0) {
   VAR_4 = 0;
   return;
  }

  if (VAR_4)
   FUNC_3("Repeatedly set hugeTLB page size of 1G!\n");
  VAR_4 = 1;
  return;
 }

 if (!FUNC_2(VAR_2, "hugepages") && VAR_4) {
  VAR_5 = VAR_3;
  VAR_1 = FUNC_1(VAR_5, &VAR_5, 0);
  return;
 }
}
