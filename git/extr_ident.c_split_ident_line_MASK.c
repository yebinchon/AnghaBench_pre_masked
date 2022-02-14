
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ident_split {char const* name_begin; char const* mail_begin; char const* name_end; char const* mail_end; char const* date_begin; char const* date_end; char const* tz_begin; char const* tz_end; } ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (struct ident_split*,int ,int) ;
 size_t FUNC_2 (char const*,char*) ;

int FUNC_3(struct ident_split *VAR_0, const char *VAR_1, int VAR_2)
{
 const char *VAR_3;
 size_t VAR_4;
 int VAR_5 = -1;

 FUNC_1(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->name_begin = VAR_1;
 for (VAR_3 = VAR_1; *VAR_3 && VAR_3 < VAR_1 + VAR_2; VAR_3++)
  if (*VAR_3 == '<') {
   VAR_0->mail_begin = VAR_3 + 1;
   break;
  }
 if (!VAR_0->mail_begin)
  return VAR_5;

 for (VAR_3 = VAR_0->mail_begin - 2; VAR_1 <= VAR_3; VAR_3--)
  if (!FUNC_0(*VAR_3)) {
   VAR_0->name_end = VAR_3 + 1;
   break;
  }
 if (!VAR_0->name_end) {

  VAR_0->name_end = VAR_0->name_begin;
 }

 for (VAR_3 = VAR_0->mail_begin; VAR_3 < VAR_1 + VAR_2; VAR_3++)
  if (*VAR_3 == '>') {
   VAR_0->mail_end = VAR_3;
   break;
  }
 if (!VAR_0->mail_end)
  return VAR_5;
 for (VAR_3 = VAR_1 + VAR_2 - 1; *VAR_3 != '>'; VAR_3--)
  ;

 for (VAR_3 = VAR_3 + 1; VAR_3 < VAR_1 + VAR_2 && FUNC_0(*VAR_3); VAR_3++)
  ;
 if (VAR_1 + VAR_2 <= VAR_3)
  goto person_only;
 VAR_0->date_begin = VAR_3;
 VAR_4 = FUNC_2(VAR_3, "0123456789");
 if (!VAR_4)
  goto person_only;
 VAR_0->date_end = VAR_0->date_begin + VAR_4;
 for (VAR_3 = VAR_0->date_end; VAR_3 < VAR_1 + VAR_2 && FUNC_0(*VAR_3); VAR_3++)
  ;
 if (VAR_1 + VAR_2 <= VAR_3 || (*VAR_3 != '+' && *VAR_3 != '-'))
  goto person_only;
 VAR_0->tz_begin = VAR_3;
 VAR_4 = FUNC_2(VAR_3 + 1, "0123456789");
 if (!VAR_4)
  goto person_only;
 VAR_0->tz_end = VAR_0->tz_begin + 1 + VAR_4;
 return 0;

person_only:
 VAR_0->date_begin = ((void*)0);
 VAR_0->date_end = ((void*)0);
 VAR_0->tz_begin = ((void*)0);
 VAR_0->tz_end = ((void*)0);
 return 0;
}
