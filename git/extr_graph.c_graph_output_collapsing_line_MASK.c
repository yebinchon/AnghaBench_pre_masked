
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct git_graph {int mapping_size; int* new_mapping; int* mapping; int * new_columns; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct git_graph*) ;
 int FUNC_3 (struct git_graph*,struct strbuf*,int) ;
 int FUNC_4 (struct git_graph*,int ) ;
 int FUNC_5 (struct strbuf*,char) ;
 int FUNC_6 (struct strbuf*,int *,char) ;

__attribute__((used)) static void FUNC_7(struct git_graph *VAR_1, struct strbuf *VAR_2)
{
 int VAR_3;
 short VAR_4 = 0;
 int VAR_5 = -1;
 int VAR_6 = -1;




 for (VAR_3 = 0; VAR_3 < VAR_1->mapping_size; VAR_3++)
  VAR_1->new_mapping[VAR_3] = -1;

 for (VAR_3 = 0; VAR_3 < VAR_1->mapping_size; VAR_3++) {
  int VAR_7 = VAR_1->mapping[VAR_3];
  if (VAR_7 < 0)
   continue;
  FUNC_1(VAR_7 * 2 <= VAR_3);

  if (VAR_7 * 2 == VAR_3) {




   FUNC_1(VAR_1->new_mapping[VAR_3] == -1);
   VAR_1->new_mapping[VAR_3] = VAR_7;
  } else if (VAR_1->new_mapping[VAR_3 - 1] < 0) {




   VAR_1->new_mapping[VAR_3 - 1] = VAR_7;




   if (VAR_5 == -1) {
    int VAR_8;
    VAR_5 = VAR_3;
    VAR_6 = VAR_7;






    for (VAR_8 = (VAR_7 * 2)+3; VAR_8 < (VAR_3 - 2); VAR_8 += 2)
     VAR_1->new_mapping[VAR_8] = VAR_7;
   }
  } else if (VAR_1->new_mapping[VAR_3 - 1] == VAR_7) {
  } else {
   FUNC_1(VAR_1->new_mapping[VAR_3 - 1] > VAR_7);
   FUNC_1(VAR_1->new_mapping[VAR_3 - 2] < 0);
   FUNC_1(VAR_1->new_mapping[VAR_3 - 3] == VAR_7);
   VAR_1->new_mapping[VAR_3 - 2] = VAR_7;





   if (VAR_5 == -1)
    VAR_5 = VAR_3;
  }
 }




 if (VAR_1->new_mapping[VAR_1->mapping_size - 1] < 0)
  VAR_1->mapping_size--;




 for (VAR_3 = 0; VAR_3 < VAR_1->mapping_size; VAR_3++) {
  int VAR_9 = VAR_1->new_mapping[VAR_3];
  if (VAR_9 < 0)
   FUNC_5(VAR_2, ' ');
  else if (VAR_9 * 2 == VAR_3)
   FUNC_6(VAR_2, &VAR_1->new_columns[VAR_9], '|');
  else if (VAR_9 == VAR_6 &&
    VAR_3 != VAR_5 - 1) {





    if (VAR_3 != (VAR_9 * 2)+3)
     VAR_1->new_mapping[VAR_3] = -1;
    VAR_4 = 1;
   FUNC_6(VAR_2, &VAR_1->new_columns[VAR_9], '_');
  } else {
   if (VAR_4 && VAR_3 < VAR_5)
    VAR_1->new_mapping[VAR_3] = -1;
   FUNC_6(VAR_2, &VAR_1->new_columns[VAR_9], '/');

  }
 }

 FUNC_3(VAR_1, VAR_2, VAR_1->mapping_size);




 FUNC_0(VAR_1->mapping, VAR_1->new_mapping);






 if (FUNC_2(VAR_1))
  FUNC_4(VAR_1, VAR_0);
}
