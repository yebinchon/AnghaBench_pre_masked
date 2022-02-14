
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reflog_expire_cfg {char* pattern; struct reflog_expire_cfg* next; } ;


 int FUNC_0 (struct reflog_expire_cfg*,char const*,char const*,size_t) ;
 struct reflog_expire_cfg* VAR_0 ;
 struct reflog_expire_cfg** VAR_1 ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static struct reflog_expire_cfg *FUNC_2(const char *VAR_2, size_t VAR_3)
{
 struct reflog_expire_cfg *VAR_4;

 if (!VAR_1)
  VAR_1 = &VAR_0;

 for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->next)
  if (!FUNC_1(VAR_4->pattern, VAR_2, VAR_3) &&
      VAR_4->pattern[VAR_3] == '\0')
   return VAR_4;

 FUNC_0(VAR_4, VAR_2, VAR_2, VAR_3);
 *VAR_1 = VAR_4;
 VAR_1 = &(VAR_4->next);
 return VAR_4;
}
