
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned long VAR_0 ;




 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int VAR_2 ;
 unsigned long FUNC_5 (char*,char**,int ) ;
 char* FUNC_6 (unsigned long) ;
 int FUNC_7 (char**) ;

int
FUNC_8(int VAR_3, char **VAR_4)
{
 unsigned long VAR_5;
 const char *VAR_6;
 char *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_3 < 2)
  FUNC_7(VAR_4);
 FUNC_4("  command :  dir  group num  len name\n");
 for (VAR_9 = 1; VAR_9 < VAR_3; VAR_9++) {
  VAR_1 = 0;
  VAR_5 = FUNC_5(VAR_4[VAR_9], &VAR_7, 0);
  if (*VAR_7 != '\0' || VAR_1 != 0) {
   FUNC_2(VAR_2, "Invalid integer: %s\n", VAR_4[VAR_9]);
   FUNC_7(VAR_4);
  }
  FUNC_4("0x%08lx: ", VAR_5);
  switch (VAR_5 & VAR_0) {
  case 128:
   FUNC_4("VOID ");
   break;
  case 129:
   FUNC_4("OUT  ");
   break;
  case 131:
   FUNC_4("IN   ");
   break;
  case 130:
   FUNC_4("INOUT");
   break;
  default:
   FUNC_4("%01lx ???", (VAR_5 & VAR_0) >> 29);
   break;
  }
  FUNC_4(" ");
  VAR_8 = FUNC_0(VAR_5);
  if (FUNC_3(VAR_8))
   FUNC_4(" '%c' ", VAR_8);
  else
   FUNC_4(" 0x%02x", VAR_8);
  FUNC_4(" %3lu %4lu", VAR_5 & 0xff, FUNC_1(VAR_5));
  VAR_6 = FUNC_6(VAR_5);
  if (VAR_6 != ((void*)0))
   FUNC_4(" %s", VAR_6);
  FUNC_4("\n");
 }
 return (0);
}
