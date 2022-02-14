
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct diff_options {int output_format; int line_termination; int file; int prefix_length; } ;
struct diff_filepair {TYPE_1__* two; } ;
struct TYPE_2__ {char* path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct diff_filepair*,struct diff_options*) ;
 int FUNC_1 (struct diff_filepair*,struct diff_options*) ;
 char* FUNC_2 (struct diff_options*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,char const**,char const**) ;
 int FUNC_5 (char const*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct diff_filepair *VAR_4, struct diff_options *VAR_5)
{
 int VAR_6 = VAR_5->output_format;

 if (VAR_6 & VAR_0)
  FUNC_0(VAR_4, VAR_5);
 else if (VAR_6 & (VAR_3 | VAR_2))
  FUNC_1(VAR_4, VAR_5);
 else if (VAR_6 & VAR_1) {
  const char *VAR_7, *VAR_8;
  VAR_7 = VAR_4->two->path;
  VAR_8 = ((void*)0);
  FUNC_4(VAR_5->prefix_length, &VAR_7, &VAR_8);
  FUNC_3(VAR_5->file, "%s", FUNC_2(VAR_5));
  FUNC_5(VAR_7, VAR_5->file, VAR_5->line_termination);
 }
}
