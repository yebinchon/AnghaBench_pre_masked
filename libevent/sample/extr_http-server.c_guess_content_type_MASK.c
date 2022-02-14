
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_entry {char const* content_type; scalar_t__ extension; } ;


 struct table_entry* VAR_0 ;
 int FUNC_0 (scalar_t__,char const*) ;
 scalar_t__ FUNC_1 (char const*,char) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static const char *
FUNC_3(const char *VAR_1)
{
 const char *VAR_2, *VAR_3;
 const struct table_entry *VAR_4;
 VAR_2 = FUNC_2(VAR_1, '.');
 if (!VAR_2 || FUNC_1(VAR_2, '/'))
  goto not_found;
 VAR_3 = VAR_2 + 1;
 for (VAR_4 = &VAR_0[0]; VAR_4->extension; ++VAR_4) {
  if (!FUNC_0(VAR_4->extension, VAR_3))
   return VAR_4->content_type;
 }

not_found:
 return "application/misc";
}
