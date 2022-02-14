
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; } ;
struct diff_filespec {int should_free; int * data; int size; int oid; scalar_t__ dirty_submodule; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct strbuf*,char*,int ,char*) ;
 int * FUNC_2 (struct strbuf*,int *) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static int FUNC_4(struct diff_filespec *VAR_1, int VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 char *VAR_4 = "";


 if (VAR_1->dirty_submodule)
  VAR_4 = "-dirty";

 FUNC_1(&VAR_3, "Subproject commit %s%s\n",
      FUNC_0(&VAR_1->oid), VAR_4);
 VAR_1->size = VAR_3.len;
 if (VAR_2) {
  VAR_1->data = ((void*)0);
  FUNC_3(&VAR_3);
 } else {
  VAR_1->data = FUNC_2(&VAR_3, ((void*)0));
  VAR_1->should_free = 1;
 }
 return 0;
}
