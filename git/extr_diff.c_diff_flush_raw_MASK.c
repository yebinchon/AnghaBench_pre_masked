
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct diff_options {int line_termination; int output_format; int file; int prefix_length; int abbrev; } ;
struct diff_filepair {int status; TYPE_2__* two; TYPE_1__* one; scalar_t__ score; } ;
struct TYPE_4__ {int mode; char* path; int oid; } ;
struct TYPE_3__ {int mode; char* path; int oid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int *,int ) ;
 char* FUNC_1 (struct diff_options*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct diff_filepair*) ;
 int FUNC_4 (int ,char const**,char const**) ;
 int FUNC_5 (char const*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct diff_filepair *VAR_3, struct diff_options *VAR_4)
{
 int VAR_5 = VAR_4->line_termination;
 int VAR_6 = VAR_5 ? '\t' : '\0';

 FUNC_2(VAR_4->file, "%s", FUNC_1(VAR_4));
 if (!(VAR_4->output_format & VAR_0)) {
  FUNC_2(VAR_4->file, ":%06o %06o %s ", VAR_3->one->mode, VAR_3->two->mode,
   FUNC_0(&VAR_3->one->oid, VAR_4->abbrev));
  FUNC_2(VAR_4->file, "%s ",
   FUNC_0(&VAR_3->two->oid, VAR_4->abbrev));
 }
 if (VAR_3->score) {
  FUNC_2(VAR_4->file, "%c%03d%c", VAR_3->status, FUNC_3(VAR_3),
   VAR_6);
 } else {
  FUNC_2(VAR_4->file, "%c%c", VAR_3->status, VAR_6);
 }

 if (VAR_3->status == VAR_1 ||
     VAR_3->status == VAR_2) {
  const char *VAR_7, *VAR_8;
  VAR_7 = VAR_3->one->path;
  VAR_8 = VAR_3->two->path;
  FUNC_4(VAR_4->prefix_length, &VAR_7, &VAR_8);
  FUNC_5(VAR_7, VAR_4->file, VAR_6);
  FUNC_5(VAR_8, VAR_4->file, VAR_5);
 } else {
  const char *VAR_9, *VAR_10;
  VAR_9 = VAR_3->one->mode ? VAR_3->one->path : VAR_3->two->path;
  VAR_10 = ((void*)0);
  FUNC_4(VAR_4->prefix_length, &VAR_9, &VAR_10);
  FUNC_5(VAR_9, VAR_4->file, VAR_5);
 }
}
