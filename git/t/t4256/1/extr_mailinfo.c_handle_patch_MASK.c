
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct mailinfo {int patch_lines; int patchfile; } ;


 int FUNC_0 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mailinfo *VAR_0, const struct strbuf *VAR_1)
{
 FUNC_0(VAR_1->buf, 1, VAR_1->len, VAR_0->patchfile);
 VAR_0->patch_lines++;
}
