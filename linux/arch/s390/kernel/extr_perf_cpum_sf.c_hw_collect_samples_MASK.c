
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int hw; } ;
struct hws_trailer_entry {int f; } ;
struct hws_basic_entry {int def; scalar_t__ I; scalar_t__ W; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hws_basic_entry*,struct hws_trailer_entry*) ;
 int FUNC_2 (struct perf_event*,int ) ;
 unsigned long long FUNC_3 (struct perf_event*,struct hws_basic_entry*) ;
 scalar_t__ FUNC_4 (unsigned long) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_0, unsigned long *VAR_1,
          unsigned long long *VAR_2)
{
 struct hws_trailer_entry *VAR_3;
 struct hws_basic_entry *VAR_4;

 VAR_3 = (struct hws_trailer_entry *) FUNC_4(*VAR_1);
 VAR_4 = (struct hws_basic_entry *) *VAR_1;
 while ((unsigned long *) VAR_4 < (unsigned long *) VAR_3) {

  if (!VAR_4->def)
   break;


  FUNC_2(VAR_0, FUNC_0(&VAR_0->hw));


  if (VAR_4->def == 0x0001) {




   if (!*VAR_2) {

    if (VAR_4->I == 0 && VAR_4->W == 0) {

     *VAR_2 = FUNC_3(VAR_0,
             VAR_4);
    }
   } else

    *VAR_2 += 1;
  } else {
   FUNC_1(VAR_4, VAR_3);
   if (!VAR_3->f)
    break;
  }


  VAR_4->def = 0;
  VAR_4++;
 }
}
