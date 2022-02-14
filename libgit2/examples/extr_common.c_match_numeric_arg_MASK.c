
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct args_info {char** argv; size_t pos; int argc; } ;


 int FUNC_0 (char*,char const*) ;
 size_t FUNC_1 (char const*,char const*) ;

__attribute__((used)) static const char *FUNC_2(struct args_info *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = VAR_0->argv[VAR_0->pos];
 size_t VAR_3 = FUNC_1(VAR_2, VAR_1);

 if (!VAR_3)
  return ((void*)0);

 if (!VAR_2[VAR_3]) {
  if (VAR_0->pos + 1 == VAR_0->argc)
   FUNC_0("expected numeric value following argument", VAR_1);
  VAR_0->pos += 1;
  VAR_2 = VAR_0->argv[VAR_0->pos];
 } else {
  VAR_2 = VAR_2 + VAR_3;
  if (*VAR_2 == '=')
   VAR_2++;
 }

 return VAR_2;
}
