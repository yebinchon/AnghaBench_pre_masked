
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char) ;
 char const* FUNC_3 (char const*,int) ;

__attribute__((used)) static const char *FUNC_4(const char *VAR_0)
{
 char VAR_1;
 const char *VAR_2, *VAR_3, *VAR_4;

 VAR_4 = VAR_0;
 while ((VAR_1 = *VAR_4) && (FUNC_2(VAR_1) || (VAR_1 == '<')))
  VAR_4++;
 VAR_2 = VAR_4;
 VAR_3 = ((void*)0);
 while ((VAR_1 = *VAR_4)) {
  if (!FUNC_2(VAR_1) && (VAR_1 != '>'))
   VAR_3 = VAR_4;
  VAR_4++;
 }
 if (!VAR_3)
  FUNC_1(FUNC_0("insane in-reply-to: %s"), VAR_0);
 if (++VAR_3 == VAR_4)
  return VAR_2;
 return FUNC_3(VAR_2, VAR_3 - VAR_2);
}
