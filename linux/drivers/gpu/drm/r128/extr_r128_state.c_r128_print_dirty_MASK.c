
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,unsigned int,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;

__attribute__((used)) static void FUNC_1(const char *VAR_9, unsigned int VAR_10)
{
 FUNC_0("%s: (0x%x) %s%s%s%s%s%s%s%s%s\n",
   VAR_9,
   VAR_10,
   (VAR_10 & VAR_3) ? "core, " : "",
   (VAR_10 & VAR_2) ? "context, " : "",
   (VAR_10 & VAR_5) ? "setup, " : "",
   (VAR_10 & VAR_6) ? "tex0, " : "",
   (VAR_10 & VAR_7) ? "tex1, " : "",
   (VAR_10 & VAR_4) ? "masks, " : "",
   (VAR_10 & VAR_8) ? "window, " : "",
   (VAR_10 & VAR_1) ? "cliprects, " : "",
   (VAR_10 & VAR_0) ? "quiescence, " : "");
}
