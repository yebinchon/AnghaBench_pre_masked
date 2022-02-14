
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct notes_merge_options {int verbosity; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (struct strbuf*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct strbuf*,int ) ;
 int FUNC_3 (struct strbuf*) ;

int FUNC_4(struct notes_merge_options *VAR_3)
{





 struct strbuf VAR_4 = VAR_2;
 int VAR_5;

 FUNC_0(&VAR_4, VAR_0);
 if (VAR_3->verbosity >= 3)
  FUNC_1("Removing notes merge worktree at %s/*\n", VAR_4.buf);
 VAR_5 = FUNC_2(&VAR_4, VAR_1);
 FUNC_3(&VAR_4);
 return VAR_5;
}
