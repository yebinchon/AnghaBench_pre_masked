
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct git_graph {int num_parents; int expansion_row; int num_columns; scalar_t__ commit; scalar_t__ prev_state; int prev_commit_index; struct column* columns; } ;
struct column {scalar_t__ commit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct git_graph*,struct strbuf*,int) ;
 int FUNC_2 (struct git_graph*,int ) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char,int) ;
 int FUNC_5 (struct strbuf*,struct column*,char) ;

__attribute__((used)) static void FUNC_6(struct git_graph *VAR_2,
      struct strbuf *VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;
 FUNC_0(VAR_2->num_parents >= 3);
 VAR_4 = (VAR_2->num_parents - 2) * 2;





 FUNC_0(0 <= VAR_2->expansion_row &&
        VAR_2->expansion_row < VAR_4);




 VAR_6 = 0;
 VAR_7 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2->num_columns; VAR_5++) {
  struct column *VAR_8 = &VAR_2->columns[VAR_5];
  if (VAR_8->commit == VAR_2->commit) {
   VAR_6 = 1;
   FUNC_5(VAR_3, VAR_8, '|');
   FUNC_4(VAR_3, ' ', VAR_2->expansion_row);
   VAR_7 += 1 + VAR_2->expansion_row;
  } else if (VAR_6 && (VAR_2->expansion_row == 0)) {
   if (VAR_2->prev_state == VAR_1 &&
       VAR_2->prev_commit_index < VAR_5)
    FUNC_5(VAR_3, VAR_8, '\\');
   else
    FUNC_5(VAR_3, VAR_8, '|');
   VAR_7++;
  } else if (VAR_6 && (VAR_2->expansion_row > 0)) {
   FUNC_5(VAR_3, VAR_8, '\\');
   VAR_7++;
  } else {
   FUNC_5(VAR_3, VAR_8, '|');
   VAR_7++;
  }
  FUNC_3(VAR_3, ' ');
  VAR_7++;
 }

 FUNC_1(VAR_2, VAR_3, VAR_7);





 VAR_2->expansion_row++;
 if (VAR_2->expansion_row >= VAR_4)
  FUNC_2(VAR_2, VAR_0);
}
