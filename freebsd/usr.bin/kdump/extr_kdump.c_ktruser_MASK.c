
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,void*,int) ;

void
FUNC_2(int VAR_2, void *VAR_3)
{
 unsigned char *VAR_4;

 if (FUNC_1(VAR_1, VAR_3, VAR_2)) {
  FUNC_0("\n");
  return;
 }

 FUNC_0("%d ", VAR_2);
 VAR_4 = VAR_3;
 while (VAR_2--)
  if (VAR_0)
   FUNC_0(" %d", *VAR_4++);
  else
   FUNC_0(" %02x", *VAR_4++);
 FUNC_0("\n");
}
