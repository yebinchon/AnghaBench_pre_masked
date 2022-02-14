
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct diff_options {int dummy; } ;
struct diff_filepair {TYPE_2__* two; TYPE_1__* one; } ;
struct TYPE_4__ {int path; } ;
struct TYPE_3__ {int path; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (struct diff_options*,int ,int ,int ,int ) ;
 int FUNC_1 (struct strbuf*,int ,int ) ;
 int FUNC_2 (struct diff_options*,struct diff_filepair*,int ) ;
 int FUNC_3 (struct diff_filepair*) ;
 int FUNC_4 (struct strbuf*,char*,char const*,int ,int ) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(struct diff_options *VAR_2, const char *VAR_3,
  struct diff_filepair *VAR_4)
{
 struct strbuf VAR_5 = VAR_1;
 struct strbuf VAR_6 = VAR_1;

 FUNC_1(&VAR_6, VAR_4->one->path, VAR_4->two->path);
 FUNC_4(&VAR_5, " %s %s (%d%%)\n",
      VAR_3, VAR_6.buf, FUNC_3(VAR_4));
 FUNC_5(&VAR_6);
 FUNC_0(VAR_2, VAR_0,
     VAR_5.buf, VAR_5.len, 0);
 FUNC_2(VAR_2, VAR_4, 0);
 FUNC_5(&VAR_5);
}
