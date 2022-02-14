
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct index_state {int dummy; } ;
struct cache_entry {int name; int ce_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (struct index_state const*,int ) ;
 char* FUNC_2 (struct index_state const*,char const*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char const*,struct stat*) ;
 int FUNC_5 (char*,char const*,char const*,char const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_6(const struct index_state *VAR_1,
     const struct cache_entry *VAR_2, const char *VAR_3)
{
 if (VAR_0) {
  struct stat VAR_4;
  const char *VAR_5 = "";
  const char *VAR_6 = "";
  const char *VAR_7 = FUNC_2(VAR_1, VAR_3);
  if (VAR_2 && FUNC_0(VAR_2->ce_mode))
   VAR_5 = FUNC_1(VAR_1,
              VAR_2->name);
  if (!FUNC_4(VAR_3, &VAR_4) && FUNC_0(VAR_4.st_mode))
   VAR_6 = FUNC_3(VAR_3);
  FUNC_5("i/%-5s w/%-5s attr/%-17s\t", VAR_5, VAR_6, VAR_7);
 }
}
