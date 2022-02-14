
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {int dummy; } ;


 struct cache_entry** VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 scalar_t__ FUNC_1 (struct cache_entry*,char) ;
 int FUNC_2 (char*,char,char const*) ;
 int FUNC_3 (char*,char,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(char VAR_1, const char *VAR_2)
{
 int VAR_3;
 struct cache_entry *VAR_4;

 VAR_3 = FUNC_0(VAR_2, FUNC_4(VAR_2));
 if (VAR_3 < 0)
  goto fail;
 VAR_4 = VAR_0[VAR_3];
 if (FUNC_1(VAR_4, VAR_1) < 0)
  goto fail;

 FUNC_3("chmod %cx '%s'", VAR_1, VAR_2);
 return;
 fail:
 FUNC_2("git update-index: cannot chmod %cx '%s'", VAR_1, VAR_2);
}
