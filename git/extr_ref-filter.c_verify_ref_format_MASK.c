
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct ref_format {int need_color_reset_at_eol; char* format; int use_color; } ;
struct TYPE_2__ {int name; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char const*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (struct ref_format*,char const*,char const*,struct strbuf*) ;
 scalar_t__ FUNC_5 (int ,char*,char const**) ;
 int FUNC_6 (struct strbuf*) ;
 char* FUNC_7 (char const*,char) ;
 int FUNC_8 (char const*,char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_9 (int ) ;

int FUNC_10(struct ref_format *VAR_2)
{
 const char *VAR_3, *VAR_4;

 VAR_2->need_color_reset_at_eol = 0;
 for (VAR_3 = VAR_2->format; *VAR_3 && (VAR_4 = FUNC_3(VAR_3)); ) {
  struct strbuf VAR_5 = VAR_0;
  const char *VAR_6, *VAR_7 = FUNC_7(VAR_4, ')');
  int VAR_8;

  if (!VAR_7)
   return FUNC_2(FUNC_0("malformed format string %s"), VAR_4);

  VAR_8 = FUNC_4(VAR_2, VAR_4 + 2, VAR_7, &VAR_5);
  if (VAR_8 < 0)
   FUNC_1("%s", VAR_5.buf);
  VAR_3 = VAR_7 + 1;

  if (FUNC_5(VAR_1[VAR_8].name, "color:", &VAR_6))
   VAR_2->need_color_reset_at_eol = !!FUNC_8(VAR_6, "reset");
  FUNC_6(&VAR_5);
 }
 if (VAR_2->need_color_reset_at_eol && !FUNC_9(VAR_2->use_color))
  VAR_2->need_color_reset_at_eol = 0;
 return 0;
}
