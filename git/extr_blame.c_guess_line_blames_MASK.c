
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_origin {int num_lines; int fingerprints; } ;
struct blame_line_tracker {int is_parent; int s_lno; } ;


 int FUNC_0 (int*) ;
 int* FUNC_1 (struct blame_origin*,struct blame_origin*,int,int,int,int) ;
 int FUNC_2 (int ,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct blame_origin *VAR_0,
         struct blame_origin *VAR_1,
         int VAR_2, int VAR_3, int VAR_4, int VAR_5,
         struct blame_line_tracker *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 int VAR_10 = VAR_2 + VAR_3;
 int *VAR_11;

 VAR_11 = FUNC_1(VAR_0, VAR_1,
        VAR_2, VAR_10, VAR_4,
        VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_4 - VAR_2; VAR_7++) {
  VAR_9 = VAR_2 + VAR_7;
  if (VAR_11 && VAR_11[VAR_7] >= 0) {
   VAR_8 = VAR_11[VAR_7];
  } else {
   VAR_8 = FUNC_2(VAR_0->fingerprints,
           VAR_1->fingerprints,
           VAR_9, 0,
           VAR_0->num_lines);
  }
  if (VAR_8 >= 0) {
   VAR_6[VAR_7].is_parent = 1;
   VAR_6[VAR_7].s_lno = VAR_8;
  } else {
   VAR_6[VAR_7].is_parent = 0;
   VAR_6[VAR_7].s_lno = VAR_9;
  }
 }
 FUNC_0(VAR_11);
}
