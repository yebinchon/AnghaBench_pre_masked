
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char*,char const*,char*,char*,int,int,...) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1, const char *VAR_2, int VAR_3, int VAR_4,
    int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_2, VAR_5);
 if (VAR_8 < 0) {
  if (VAR_6 != -1)
   FUNC_2("%s(%s, %s): expected (%d, %d) got (-1, %d)",
       VAR_1, VAR_3 ? "root" : "!root", VAR_4 ? "jail"
       : "!jail", VAR_6, VAR_7, VAR_0);
 } else {
  if (VAR_6 == -1)
   FUNC_2("%s(%s, %s): expected (%d, %d) got 0", VAR_1,
       VAR_3 ? "root" : "!root", VAR_4 ? "jail" :
       "!jail", VAR_6, VAR_7);
  (void)FUNC_0(VAR_8);
 }
}
