
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct common_dir {char* path; scalar_t__ ignore_garbage; } ;
struct TYPE_2__ {int different_commondir; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 struct common_dir* VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct strbuf*,char*,int ) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*,int) ;
 TYPE_1__* VAR_3 ;

void FUNC_7(void)
{
 struct strbuf VAR_4 = VAR_1;
 const struct common_dir *VAR_5;
 int VAR_6;

 if (!VAR_3->different_commondir)
  return;
 FUNC_3(&VAR_4, "%s/", FUNC_1());
 VAR_6 = VAR_4.len;
 for (VAR_5 = VAR_2; VAR_5->path; VAR_5++) {
  const char *VAR_7 = VAR_5->path;
  if (VAR_5->ignore_garbage)
   continue;
  FUNC_6(&VAR_4, VAR_6);
  FUNC_4(&VAR_4, VAR_7);
  if (FUNC_0(VAR_4.buf))
   FUNC_2(VAR_0, VAR_4.buf);
 }
 FUNC_5(&VAR_4);
}
