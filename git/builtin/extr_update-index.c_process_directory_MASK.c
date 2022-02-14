
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct object_id {int dummy; } ;
struct cache_entry {char* name; int ce_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct cache_entry** VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cache_entry const*,char const*,int,struct stat*) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*,struct object_id*) ;
 scalar_t__ FUNC_6 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_2, int VAR_3, struct stat *VAR_4)
{
 struct object_id VAR_5;
 int VAR_6 = FUNC_2(VAR_2, VAR_3);


 if (VAR_6 >= 0) {
  const struct cache_entry *VAR_7 = VAR_0[VAR_6];
  if (FUNC_0(VAR_7->ce_mode)) {


   if (FUNC_5(VAR_2, "HEAD", &VAR_5) < 0)
    return 0;

   return FUNC_1(VAR_7, VAR_2, VAR_3, VAR_4);
  }

  return FUNC_4(VAR_2);
 }


 VAR_6 = -VAR_6-1;
 while (VAR_6 < VAR_1) {
  const struct cache_entry *VAR_8 = VAR_0[VAR_6++];

  if (FUNC_6(VAR_8->name, VAR_2, VAR_3))
   break;
  if (VAR_8->name[VAR_3] > '/')
   break;
  if (VAR_8->name[VAR_3] < '/')
   continue;


  return FUNC_3("%s: is a directory - add individual files instead", VAR_2);
 }


 if (!FUNC_5(VAR_2, "HEAD", &VAR_5))
  return FUNC_1(((void*)0), VAR_2, VAR_3, VAR_4);


 return FUNC_3("%s: is a directory - add files inside instead", VAR_2);
}
