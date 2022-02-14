
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct git_graph {TYPE_1__* revs; } ;
struct TYPE_5__ {int file; } ;
struct TYPE_4__ {TYPE_2__ diffopt; } ;


 struct strbuf VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ,int,int ,int ) ;
 scalar_t__ FUNC_1 (struct git_graph*) ;
 int FUNC_2 (struct git_graph*,struct strbuf*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct git_graph*) ;
 int FUNC_5 (char,int ) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*,int ) ;

void FUNC_8(struct git_graph *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 int VAR_4 = 0;

 FUNC_3(VAR_1);

 if (!VAR_2)
  return;






 if (FUNC_1(VAR_2)) {
  FUNC_4(VAR_2);
  VAR_4 = 1;
 }

 while (!VAR_4 && !FUNC_1(VAR_2)) {
  VAR_4 = FUNC_2(VAR_2, &VAR_3);
  FUNC_0(VAR_3.buf, sizeof(char), VAR_3.len,
   VAR_2->revs->diffopt.file);
  if (!VAR_4) {
   FUNC_5('\n', VAR_2->revs->diffopt.file);
   FUNC_3(&VAR_2->revs->diffopt);
  }
  FUNC_7(&VAR_3, 0);
 }

 FUNC_6(&VAR_3);
}
