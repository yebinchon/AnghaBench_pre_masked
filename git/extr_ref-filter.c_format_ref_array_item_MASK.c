
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct ref_formatting_state {TYPE_1__* stack; int quote_style; } ;
struct ref_format {char* format; scalar_t__ need_color_reset_at_eol; int quote_style; } ;
struct ref_array_item {int dummy; } ;
struct atom_value {int s; scalar_t__ (* handler ) (struct atom_value*,struct ref_formatting_state*,struct strbuf*) ;} ;
struct TYPE_3__ {int output; scalar_t__ prev; } ;


 int VAR_0 ;
 struct ref_formatting_state VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct atom_value*,struct ref_formatting_state*,struct strbuf*) ;
 int FUNC_2 (char const*,char const*,struct ref_formatting_state*) ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (struct ref_array_item*,int,struct atom_value**,struct strbuf*) ;
 int FUNC_5 (struct ref_format const*,char const*,char const*,struct strbuf*) ;
 int FUNC_6 (TYPE_1__**) ;
 int FUNC_7 (TYPE_1__**) ;
 int FUNC_8 (struct strbuf*,int *) ;
 int FUNC_9 (struct strbuf*,int,int ) ;
 char* FUNC_10 (char const*,char) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (struct atom_value*,struct ref_formatting_state*,struct strbuf*) ;

int FUNC_13(struct ref_array_item *VAR_2,
      const struct ref_format *VAR_3,
      struct strbuf *VAR_4,
      struct strbuf *VAR_5)
{
 const char *VAR_6, *VAR_7, *VAR_8;
 struct ref_formatting_state VAR_9 = VAR_1;

 VAR_9.quote_style = VAR_3->quote_style;
 FUNC_7(&VAR_9.stack);

 for (VAR_6 = VAR_3->format; *VAR_6 && (VAR_7 = FUNC_3(VAR_6)); VAR_6 = VAR_8 + 1) {
  struct atom_value *VAR_10;
  int VAR_11;

  VAR_8 = FUNC_10(VAR_7, ')');
  if (VAR_6 < VAR_7)
   FUNC_2(VAR_6, VAR_7, &VAR_9);
  VAR_11 = FUNC_5(VAR_3, VAR_7 + 2, VAR_8, VAR_5);
  if (VAR_11 < 0 || FUNC_4(VAR_2, VAR_11, &VAR_10, VAR_5) ||
      VAR_10->handler(VAR_10, &VAR_9, VAR_5)) {
   FUNC_6(&VAR_9.stack);
   return -1;
  }
 }
 if (*VAR_6) {
  VAR_7 = VAR_6 + FUNC_11(VAR_6);
  FUNC_2(VAR_6, VAR_7, &VAR_9);
 }
 if (VAR_3->need_color_reset_at_eol) {
  struct atom_value VAR_12;
  VAR_12.s = VAR_0;
  if (FUNC_1(&VAR_12, &VAR_9, VAR_5)) {
   FUNC_6(&VAR_9.stack);
   return -1;
  }
 }
 if (VAR_9.stack->prev) {
  FUNC_6(&VAR_9.stack);
  return FUNC_9(VAR_5, -1, FUNC_0("format: %%(end) atom missing"));
 }
 FUNC_8(VAR_4, &VAR_9.stack->output);
 FUNC_6(&VAR_9.stack);
 return 0;
}
