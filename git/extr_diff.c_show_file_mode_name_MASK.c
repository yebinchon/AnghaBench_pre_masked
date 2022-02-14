
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct diff_options {int dummy; } ;
struct diff_filespec {int path; int mode; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (struct diff_options*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,struct strbuf*,int *,int ) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,char*,char const*,...) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static void FUNC_5(struct diff_options *VAR_2, const char *VAR_3, struct diff_filespec *VAR_4)
{
 struct strbuf VAR_5 = VAR_1;
 if (VAR_4->mode)
  FUNC_3(&VAR_5, " %s mode %06o ", VAR_3, VAR_4->mode);
 else
  FUNC_3(&VAR_5, " %s ", VAR_3);

 FUNC_1(VAR_4->path, &VAR_5, ((void*)0), 0);
 FUNC_2(&VAR_5, '\n');
 FUNC_0(VAR_2, VAR_0,
    VAR_5.buf, VAR_5.len, 0);
 FUNC_4(&VAR_5);
}
