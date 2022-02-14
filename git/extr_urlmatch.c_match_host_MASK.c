
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url_info {char* url; int host_off; int host_len; } ;


 char* FUNC_0 (char const*,char,int) ;
 int FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_2(const struct url_info *VAR_0,
        const struct url_info *VAR_1)
{
 const char *VAR_2 = VAR_0->url + VAR_0->host_off;
 const char *VAR_3 = VAR_1->url + VAR_1->host_off;
 int VAR_4 = VAR_0->host_len;
 int VAR_5 = VAR_1->host_len;

 while (VAR_4 && VAR_5) {
  const char *VAR_6 = FUNC_0(VAR_2, '.', VAR_4);
  const char *VAR_7 = FUNC_0(VAR_3, '.', VAR_5);

  if (VAR_7 == VAR_3 + 1 && VAR_3[0] == '*')

   ;
  else if ((VAR_7 - VAR_3) == (VAR_6 - VAR_2) &&
    !FUNC_1(VAR_2, VAR_3, VAR_6 - VAR_2))

   ;
  else
   return 0;

  if (VAR_6 < VAR_2 + VAR_4)
   VAR_6++;
  VAR_4 -= VAR_6 - VAR_2;
  VAR_2 = VAR_6;
  if (VAR_7 < VAR_3 + VAR_5)
   VAR_7++;
  VAR_5 -= VAR_7 - VAR_3;
  VAR_3 = VAR_7;
 }

 return (!VAR_4 && !VAR_5);
}
