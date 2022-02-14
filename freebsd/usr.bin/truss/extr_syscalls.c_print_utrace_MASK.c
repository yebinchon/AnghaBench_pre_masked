
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int *,void*,size_t) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_0, void *VAR_1, size_t VAR_2)
{
 unsigned char *VAR_3;

 FUNC_0(VAR_0, "{ ");
 if (FUNC_1(VAR_0, VAR_1, VAR_2)) {
  FUNC_0(VAR_0, " }");
  return;
 }

 VAR_3 = VAR_1;
 FUNC_0(VAR_0, "%zu:", VAR_2);
 while (VAR_2--)
  FUNC_0(VAR_0, " %02x", *VAR_3++);
 FUNC_0(VAR_0, " }");
}
