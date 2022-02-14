
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char**,char*,int ,char const*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_4(const char *VAR_4)
{
 int VAR_5 = 0;

 if (FUNC_0(VAR_4, VAR_0) == -1) {
  char *VAR_6;
  FUNC_1(&VAR_6, "%d/%s", VAR_1, VAR_4);
  if (FUNC_0(VAR_6, VAR_0) == -1) {
   if (VAR_3)
    FUNC_2(VAR_2, "%s not found!\n", VAR_6);
   VAR_5 = -1;
  }
  FUNC_3(VAR_6);
 } else {
  if (VAR_3)
   FUNC_2(VAR_2, "No read permission for %s!\n", VAR_4);
  VAR_5 = -1;
 }

 return VAR_5;
}
