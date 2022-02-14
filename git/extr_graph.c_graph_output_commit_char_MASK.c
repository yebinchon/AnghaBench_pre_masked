
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct git_graph {TYPE_3__* commit; TYPE_2__* revs; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ object; } ;
struct TYPE_5__ {int boundary; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,int ) ;

__attribute__((used)) static void FUNC_4(struct git_graph *VAR_1, struct strbuf *VAR_2)
{




 if (VAR_1->commit->object.flags & VAR_0) {
  FUNC_0(VAR_1->revs->boundary);
  FUNC_2(VAR_2, 'o');
  return;
 }




 FUNC_3(VAR_2, FUNC_1(VAR_1->revs, VAR_1->commit));
}
