
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct git_graph {TYPE_2__* revs; } ;
struct TYPE_3__ {int file; } ;
struct TYPE_4__ {TYPE_1__ diffopt; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (struct git_graph*,struct strbuf*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct strbuf*) ;

void FUNC_4(struct git_graph *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;

 FUNC_2(VAR_1);

 if (!VAR_2)
  return;

 FUNC_1(VAR_2, &VAR_3);
 FUNC_0(VAR_3.buf, sizeof(char), VAR_3.len, VAR_2->revs->diffopt.file);
 FUNC_3(&VAR_3);
}
