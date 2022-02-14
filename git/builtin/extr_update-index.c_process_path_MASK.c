
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct cache_entry {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct cache_entry** VAR_0 ;
 int FUNC_1 (struct cache_entry const*,char const*,int,struct stat*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char const*,int) ;
 scalar_t__ FUNC_3 (struct cache_entry const*) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char const*,int) ;
 int VAR_2 ;
 int FUNC_6 (char const*,int,struct stat*) ;
 int FUNC_7 (char const*,int) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(const char *VAR_3, struct stat *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 const struct cache_entry *VAR_8;

 VAR_7 = FUNC_9(VAR_3);
 if (FUNC_5(VAR_3, VAR_7))
  return FUNC_4("'%s' is beyond a symbolic link", VAR_3);

 VAR_6 = FUNC_2(VAR_3, VAR_7);
 VAR_8 = VAR_6 < 0 ? ((void*)0) : VAR_0[VAR_6];
 if (VAR_8 && FUNC_3(VAR_8)) {





  if (!VAR_2 && VAR_1 &&
      FUNC_8(VAR_3))
   return FUNC_4("%s: cannot remove from the index", VAR_3);
  return 0;
 }





 if (VAR_5)
  return FUNC_7(VAR_3, VAR_5);

 if (FUNC_0(VAR_4->st_mode))
  return FUNC_6(VAR_3, VAR_7, VAR_4);

 return FUNC_1(VAR_8, VAR_3, VAR_7, VAR_4);
}
