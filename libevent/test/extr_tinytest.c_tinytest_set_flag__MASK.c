
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct testgroup_t {char* prefix; struct testcase_t* cases; } ;
struct testcase_t {int flags; scalar_t__ name; } ;
typedef int fullname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,char*,scalar_t__) ;
 int FUNC_3 (char*,char const*,size_t) ;
 char const* FUNC_4 (char const*,char*) ;

int
FUNC_5(struct testgroup_t *VAR_3, const char *VAR_4, int VAR_5, unsigned long VAR_6)
{
 int VAR_7, VAR_8;
 size_t VAR_9 = VAR_0;
 char VAR_10[VAR_0];
 int VAR_11=0;
 if (FUNC_4(VAR_4, ".."))
  VAR_9 = FUNC_4(VAR_4,"..")-VAR_4;
 for (VAR_7=0; VAR_3[VAR_7].prefix; ++VAR_7) {
  for (VAR_8=0; VAR_3[VAR_7].cases[VAR_8].name; ++VAR_8) {
   struct testcase_t *VAR_12 = &VAR_3[VAR_7].cases[VAR_8];
   FUNC_2(VAR_10, sizeof(VAR_10), "%s%s",
     VAR_3[VAR_7].prefix, VAR_12->name);
   if (!VAR_6) {
    FUNC_0("    %s", VAR_10);
    if (VAR_12->flags & VAR_1)
     FUNC_1("   (Off by default)");
    else if (VAR_12->flags & VAR_2)
     FUNC_1("  (DISABLED)");
    else
     FUNC_1("");
   }
   if (!FUNC_3(VAR_10, VAR_4, VAR_9)) {
    if (VAR_5)
     VAR_12->flags |= VAR_6;
    else
     VAR_12->flags &= ~VAR_6;
    ++VAR_11;
   }
  }
 }
 return VAR_11;
}
