
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*,char*) ;
 int VAR_1 ;
 int FUNC_4 (int,char**,char*) ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char**,int ) ;
 int FUNC_8 () ;
 int VAR_6 ;

void
FUNC_9(int VAR_7, char ***VAR_8)
{
 int VAR_9;
 char *VAR_10, **VAR_11;

 VAR_11 = *VAR_8;
 if ((VAR_10 = FUNC_6(VAR_11[0], 'h')) != ((void*)0) &&
     FUNC_5(VAR_10, "hd") == 0) {

  FUNC_0("\"%08.8_Ax\n\"");
  FUNC_0("\"%08.8_ax  \" 8/1 \"%02x \" \"  \" 8/1 \"%02x \" ");
  FUNC_0("\"  |\" 16/1 \"%_p\" \"|\\n\"");
 }
 while ((VAR_9 = FUNC_4(VAR_7, VAR_11, "bcCde:f:n:os:vx")) != -1)
  switch (VAR_9) {
  case 'b':
   FUNC_0("\"%07.7_Ax\n\"");
   FUNC_0("\"%07.7_ax \" 16/1 \"%03o \" \"\\n\"");
   break;
  case 'c':
   FUNC_0("\"%07.7_Ax\n\"");
   FUNC_0("\"%07.7_ax \" 16/1 \"%3_c \" \"\\n\"");
   break;
  case 'C':
   FUNC_0("\"%08.8_Ax\n\"");
   FUNC_0("\"%08.8_ax  \" 8/1 \"%02x \" \"  \" 8/1 \"%02x \" ");
   FUNC_0("\"  |\" 16/1 \"%_p\" \"|\\n\"");
   break;
  case 'd':
   FUNC_0("\"%07.7_Ax\n\"");
   FUNC_0("\"%07.7_ax \" 8/2 \"  %05u \" \"\\n\"");
   break;
  case 'e':
   FUNC_0(VAR_3);
   break;
  case 'f':
   FUNC_1(VAR_3);
   break;
  case 'n':
   if ((VAR_2 = FUNC_2(VAR_3)) < 0)
    FUNC_3(1, "%s: bad length value", VAR_3);
   break;
  case 'o':
   FUNC_0("\"%07.7_Ax\n\"");
   FUNC_0("\"%07.7_ax \" 8/2 \" %06o \" \"\\n\"");
   break;
  case 's':
   if ((VAR_5 = FUNC_7(VAR_3, &VAR_10, 0)) < 0)
    FUNC_3(1, "%s: bad skip value", VAR_3);
   switch(*VAR_10) {
   case 'b':
    VAR_5 *= 512;
    break;
   case 'k':
    VAR_5 *= 1024;
    break;
   case 'm':
    VAR_5 *= 1048576;
    break;
   }
   break;
  case 'v':
   VAR_6 = VAR_0;
   break;
  case 'x':
   FUNC_0("\"%07.7_Ax\n\"");
   FUNC_0("\"%07.7_ax \" 8/2 \"   %04x \" \"\\n\"");
   break;
  case '?':
   FUNC_8();
  }

 if (!VAR_1) {
  FUNC_0("\"%07.7_Ax\n\"");
  FUNC_0("\"%07.7_ax \" 8/2 \"%04x \" \"\\n\"");
 }

 *VAR_8 += VAR_4;
}
