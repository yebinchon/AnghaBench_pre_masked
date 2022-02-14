
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct setup_revision_opt {char* def; } ;
struct rev_info {int verbose_header; int abbrev_commit; int use_terminator; int always_show_header; int commit_format; int reflog_info; } ;
typedef int opt ;


 int VAR_0 ;
 int FUNC_0 (struct rev_info*) ;
 int FUNC_1 (int,char const**,char const*,struct rev_info*,struct setup_revision_opt*) ;
 int FUNC_2 (struct rev_info*) ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct setup_revision_opt*,int ,int) ;
 int FUNC_7 (int ,struct rev_info*,char const*) ;
 int VAR_2 ;

int FUNC_8(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 struct rev_info VAR_6;
 struct setup_revision_opt VAR_7;

 FUNC_4();
 FUNC_3(VAR_1, ((void*)0));

 FUNC_7(VAR_2, &VAR_6, VAR_5);
 FUNC_5(&VAR_6.reflog_info);
 VAR_6.verbose_header = 1;
 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.def = "HEAD";
 FUNC_0(&VAR_6);
 VAR_6.abbrev_commit = 1;
 VAR_6.commit_format = VAR_0;
 VAR_6.use_terminator = 1;
 VAR_6.always_show_header = 1;
 FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6, &VAR_7);

 return FUNC_2(&VAR_6);
}
