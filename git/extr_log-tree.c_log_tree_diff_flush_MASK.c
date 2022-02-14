
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct TYPE_4__ {int output_format; int file; int output_prefix_data; struct strbuf* (* output_prefix ) (TYPE_1__*,int ) ;} ;
struct rev_info {scalar_t__ commit_format; TYPE_1__ diffopt; scalar_t__ shown_dashes; scalar_t__ verbose_header; int no_commit_id; scalar_t__ loginfo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (char,int ) ;
 int FUNC_7 (struct rev_info*) ;
 struct strbuf* FUNC_8 (TYPE_1__*,int ) ;

int FUNC_9(struct rev_info *VAR_4)
{
 VAR_4->shown_dashes = 0;
 FUNC_3(&VAR_4->diffopt);

 if (FUNC_2()) {
  int VAR_5 = VAR_4->diffopt.output_format;
  VAR_4->diffopt.output_format = VAR_2;
  FUNC_1(&VAR_4->diffopt);
  VAR_4->diffopt.output_format = VAR_5;
  return 0;
 }

 if (VAR_4->loginfo && !VAR_4->no_commit_id) {
  FUNC_7(VAR_4);
  if ((VAR_4->diffopt.output_format & ~VAR_2) &&
      VAR_4->verbose_header &&
      VAR_4->commit_format != VAR_0 &&
      !FUNC_0(VAR_4->commit_format)) {






   int VAR_6 = VAR_1 | VAR_3;
   if (VAR_4->diffopt.output_prefix) {
    struct strbuf *VAR_7 = ((void*)0);
    VAR_7 = VAR_4->diffopt.output_prefix(&VAR_4->diffopt,
     VAR_4->diffopt.output_prefix_data);
    FUNC_5(VAR_7->buf, VAR_7->len, 1, VAR_4->diffopt.file);
   }
   if (!VAR_4->shown_dashes &&
       (VAR_6 & VAR_4->diffopt.output_format) == VAR_6)
    FUNC_4(VAR_4->diffopt.file, "---");
   FUNC_6('\n', VAR_4->diffopt.file);
  }
 }
 FUNC_1(&VAR_4->diffopt);
 return 1;
}
