
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_origin {int dummy; } ;
struct blame_line_tracker {int dummy; } ;
struct blame_entry {int s_lno; int num_lines; struct blame_entry* next; struct blame_origin* suspect; } ;


 int FUNC_0 (struct blame_origin*) ;
 struct blame_origin* FUNC_1 (struct blame_origin*) ;
 int FUNC_2 (struct blame_line_tracker*) ;
 int FUNC_3 (struct blame_origin*,struct blame_origin*,int,int,int,int,struct blame_line_tracker*) ;
 int FUNC_4 (struct blame_entry*,struct blame_origin*,struct blame_entry**,struct blame_entry**,struct blame_line_tracker*) ;
 struct blame_entry* FUNC_5 (struct blame_entry*,struct blame_entry*) ;
 struct blame_entry* FUNC_6 (struct blame_entry*,int,struct blame_origin*) ;
 struct blame_line_tracker* FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(struct blame_entry ***VAR_0, struct blame_entry ***VAR_1,
   int VAR_2, int VAR_3, int VAR_4, int VAR_5,
   struct blame_origin *VAR_6,
   struct blame_origin *VAR_7, int VAR_8)
{
 struct blame_entry *VAR_9 = **VAR_1;
 struct blame_entry *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 struct blame_line_tracker *VAR_13 = ((void*)0);

 while (VAR_9 && VAR_9->s_lno < VAR_2) {
  struct blame_entry *VAR_14 = VAR_9->next;





  if (VAR_9->s_lno + VAR_9->num_lines > VAR_2) {

   struct blame_entry *VAR_15;

   VAR_15 = FUNC_6(VAR_9, VAR_2 - VAR_9->s_lno, VAR_9->suspect);

   VAR_15->next = VAR_11;
   VAR_11 = VAR_15;
  } else
   FUNC_0(VAR_9->suspect);


  VAR_9->suspect = FUNC_1(VAR_6);
  VAR_9->s_lno += VAR_3;
  VAR_9->next = VAR_10;
  VAR_10 = VAR_9;
  VAR_9 = VAR_14;
 }






 if (VAR_10) {
  **VAR_0 = FUNC_5(VAR_10, **VAR_0);
  *VAR_0 = &VAR_10->next;
 }




 VAR_9 = FUNC_5(VAR_11, VAR_9);





 VAR_10 = ((void*)0);
 VAR_11 = ((void*)0);

 if (VAR_8 && VAR_4 - VAR_2 > 0) {
  VAR_13 = FUNC_7(sizeof(struct blame_line_tracker),
          VAR_4 - VAR_2);
  FUNC_3(VAR_6, VAR_7, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_13);
 }

 while (VAR_9 && VAR_9->s_lno < VAR_4) {
  struct blame_entry *VAR_16 = VAR_9->next;




  if (VAR_9->s_lno + VAR_9->num_lines > VAR_4) {




   struct blame_entry *VAR_17;

   VAR_17 = FUNC_6(VAR_9, VAR_4 - VAR_9->s_lno,
        FUNC_1(VAR_9->suspect));

   VAR_17->next = VAR_10;
   VAR_10 = VAR_17;
  }
  if (VAR_8) {
   FUNC_4(VAR_9, VAR_6, &VAR_11, &VAR_12,
        VAR_13 + VAR_9->s_lno - VAR_2);
  } else {
   VAR_9->next = VAR_11;
   VAR_11 = VAR_9;
  }
  VAR_9 = VAR_16;
 }
 FUNC_2(VAR_13);
 if (VAR_12) {
  **VAR_0 = FUNC_5(VAR_12, **VAR_0);
  *VAR_0 = &VAR_12->next;
 }
 **VAR_1 = FUNC_5(VAR_11, FUNC_5(VAR_10, VAR_9));

 if (VAR_11)
  *VAR_1 = &VAR_11->next;
}
