
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {char const* buf; int len; } ;
struct emit_callback {TYPE_2__* opt; scalar_t__ color_diff; } ;
typedef int atat ;
struct TYPE_3__ {scalar_t__ suppress_hunk_header_line_count; scalar_t__ dual_color_diffed_diffs; } ;
struct TYPE_4__ {TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 struct strbuf VAR_7 ;
 char* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (TYPE_2__*,int ,char const*,int,int ) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;
 char* FUNC_3 (char const*,int,char const*,int) ;
 int FUNC_4 (struct strbuf*,char const*,int) ;
 int FUNC_5 (struct strbuf*,char const*) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*) ;

__attribute__((used)) static void FUNC_8(struct emit_callback *VAR_8,
        const char *VAR_9, int VAR_10)
{
 const char *VAR_11 = FUNC_0(VAR_8->color_diff, VAR_0);
 const char *VAR_12 = FUNC_0(VAR_8->color_diff, VAR_1);
 const char *VAR_13 = FUNC_0(VAR_8->color_diff, VAR_2);
 const char *VAR_14 = FUNC_0(VAR_8->color_diff, VAR_3);
 const char *VAR_15 = VAR_8->color_diff ? VAR_6 : "";
 static const char VAR_16[2] = { '@', '@' };
 const char *VAR_17, *VAR_18;
 struct strbuf VAR_19 = VAR_7;
 int VAR_20 = VAR_10;
 int VAR_21 = 1;





 if (VAR_10 < 10 ||
     FUNC_2(VAR_9, VAR_16, 2) ||
     !(VAR_18 = FUNC_3(VAR_9 + 2, VAR_10 - 2, VAR_16, 2))) {
  FUNC_1(VAR_8->opt,
     VAR_5, VAR_9, VAR_10, 0);
  return;
 }
 VAR_18 += 2;


 if (VAR_8->opt->flags.dual_color_diffed_diffs)
  FUNC_5(&VAR_19, VAR_15);
 FUNC_5(&VAR_19, VAR_12);
 if (VAR_8->opt->flags.suppress_hunk_header_line_count)
  FUNC_4(&VAR_19, VAR_16, sizeof(VAR_16));
 else
  FUNC_4(&VAR_19, VAR_9, VAR_18 - VAR_9);
 FUNC_5(&VAR_19, VAR_14);




 for ( ; VAR_21 < 3; VAR_21++)
  if (VAR_9[VAR_10 - VAR_21] == '\r' || VAR_9[VAR_10 - VAR_21] == '\n')
   VAR_10--;


 for (VAR_17 = VAR_18; VAR_18 - VAR_9 < VAR_10; VAR_18++)
  if (*VAR_18 != ' ' && *VAR_18 != '\t')
   break;
 if (VAR_18 != VAR_17) {
  FUNC_5(&VAR_19, VAR_11);
  FUNC_4(&VAR_19, VAR_17, VAR_18 - VAR_17);
  FUNC_5(&VAR_19, VAR_14);
 }

 if (VAR_18 < VAR_9 + VAR_10) {
  FUNC_5(&VAR_19, VAR_13);
  FUNC_4(&VAR_19, VAR_18, VAR_9 + VAR_10 - VAR_18);
  FUNC_5(&VAR_19, VAR_14);
 }

 FUNC_4(&VAR_19, VAR_9 + VAR_10, VAR_20 - VAR_10);
 FUNC_6(&VAR_19);
 FUNC_1(VAR_8->opt,
    VAR_4, VAR_19.buf, VAR_19.len, 0);
 FUNC_7(&VAR_19);
}
