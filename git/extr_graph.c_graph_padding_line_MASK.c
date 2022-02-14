
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct git_graph {scalar_t__ state; int num_columns; scalar_t__ commit; int num_parents; int prev_state; struct column* columns; } ;
struct column {scalar_t__ commit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct git_graph*,struct strbuf*) ;
 int FUNC_1 (struct git_graph*,struct strbuf*,int) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,char,int) ;
 int FUNC_4 (struct strbuf*,struct column*,char) ;

__attribute__((used)) static void FUNC_5(struct git_graph *VAR_2, struct strbuf *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;

 if (VAR_2->state != VAR_0) {
  FUNC_0(VAR_2, VAR_3);
  return;
 }
 for (VAR_4 = 0; VAR_4 < VAR_2->num_columns; VAR_4++) {
  struct column *VAR_6 = &VAR_2->columns[VAR_4];

  FUNC_4(VAR_3, VAR_6, '|');
  VAR_5++;

  if (VAR_6->commit == VAR_2->commit && VAR_2->num_parents > 2) {
   int VAR_7 = (VAR_2->num_parents - 2) * 2;
   FUNC_3(VAR_3, ' ', VAR_7);
   VAR_5 += VAR_7;
  } else {
   FUNC_2(VAR_3, ' ');
   VAR_5++;
  }
 }

 FUNC_1(VAR_2, VAR_3, VAR_5);




 VAR_2->prev_state = VAR_1;
}
