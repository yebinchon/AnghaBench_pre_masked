
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct moved_entry {TYPE_2__* es; } ;
struct moved_block {int wsd; } ;
struct emitted_diff_symbol {int len; char* line; int indent_off; int indent_width; } ;
struct diff_options {TYPE_1__* emitted_symbols; } ;
struct TYPE_4__ {int len; char* line; int indent_off; int indent_width; scalar_t__ s; } ;
struct TYPE_3__ {struct emitted_diff_symbol* buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_1(const struct diff_options *VAR_2,
     const struct moved_entry *VAR_3,
     const struct moved_entry *VAR_4,
     struct moved_block *VAR_5,
     int VAR_6)
{
 struct emitted_diff_symbol *VAR_7 = &VAR_2->emitted_symbols->buf[VAR_6];
 int VAR_8 = VAR_3->es->len, VAR_9 = VAR_4->es->len, VAR_10 = VAR_7->len;
 const char *VAR_11 = VAR_3->es->line,
     *VAR_12 = VAR_4->es->line,
     *VAR_13 = VAR_7->line;
 int VAR_14 = VAR_3->es->indent_off,
     VAR_15 = VAR_3->es->indent_width,
     VAR_16 = VAR_7->indent_off,
     VAR_17 = VAR_7->indent_width;
 int VAR_18;
 if (VAR_8 != VAR_9)
  return 1;


 if (VAR_15 == VAR_1 && VAR_17 == VAR_1)
  return 0;







 if (VAR_3->es->s == VAR_0)
  VAR_18 = VAR_15 - VAR_17;
 else
  VAR_18 = VAR_17 - VAR_15;





 if (VAR_5->wsd == VAR_1)
  VAR_5->wsd = VAR_18;

 return !(VAR_18 == VAR_5->wsd && VAR_8 - VAR_14 == VAR_10 - VAR_16 &&
   !FUNC_0(VAR_11, VAR_12, VAR_8) && !
   FUNC_0(VAR_11 + VAR_14, VAR_13 + VAR_16, VAR_8 - VAR_14));
}
