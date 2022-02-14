
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct strbuf*,int *) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static int FUNC_3(FILE *VAR_3, struct strbuf *VAR_4)
{
 FUNC_2(VAR_4);
 if (VAR_1)
  FUNC_0(VAR_2, "Debug: Remote helper: Waiting...\n");
 if (FUNC_1(VAR_4, VAR_3) == VAR_0) {
  if (VAR_1)
   FUNC_0(VAR_2, "Debug: Remote helper quit.\n");
  return 1;
 }

 if (VAR_1)
  FUNC_0(VAR_2, "Debug: Remote helper: <- %s\n", VAR_4->buf);
 return 0;
}
