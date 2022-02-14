
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct diff_filespec {size_t size; int should_free; int is_stdin; int data; scalar_t__ should_munmap; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct strbuf*,size_t*) ;
 scalar_t__ FUNC_2 (struct strbuf*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct diff_filespec *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;
 size_t VAR_3 = 0;

 if (FUNC_2(&VAR_2, 0, 0) < 0)
  return FUNC_0("error while reading from stdin");

 VAR_1->should_munmap = 0;
 VAR_1->data = FUNC_1(&VAR_2, &VAR_3);
 VAR_1->size = VAR_3;
 VAR_1->should_free = 1;
 VAR_1->is_stdin = 1;
 return 0;
}
