
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct printer {int tof; char* form_feed; int no_formfeed; scalar_t__ short_banner; } ;


 char* VAR_0 ;
 char* FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct printer*,int ,char*,char) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct printer *VAR_2, char *VAR_3, char *VAR_4)
{
 time_t VAR_5;

 FUNC_3(&VAR_5);
 if (!VAR_2->no_formfeed && !VAR_2->tof)
  (void) FUNC_4(VAR_1, VAR_2->form_feed, FUNC_2(VAR_2->form_feed));
 if (VAR_2->short_banner) {
  if (VAR_0[0]) {
   (void) FUNC_4(VAR_1, VAR_0, FUNC_2(VAR_0));
   (void) FUNC_4(VAR_1, ":", 1);
  }
  (void) FUNC_4(VAR_1, VAR_3, FUNC_2(VAR_3));
  (void) FUNC_4(VAR_1, "  Job: ", 7);
  (void) FUNC_4(VAR_1, VAR_4, FUNC_2(VAR_4));
  (void) FUNC_4(VAR_1, "  Date: ", 8);
  (void) FUNC_4(VAR_1, FUNC_0(&VAR_5), 24);
  (void) FUNC_4(VAR_1, "\n", 1);
 } else {
  (void) FUNC_4(VAR_1, "\n\n\n", 3);
  FUNC_1(VAR_2, VAR_1, VAR_3, '\0');
  (void) FUNC_4(VAR_1, "\n\n", 2);
  FUNC_1(VAR_2, VAR_1, VAR_4, '\0');
  if (VAR_0[0]) {
   (void) FUNC_4(VAR_1,"\n\n\n",3);
   FUNC_1(VAR_2, VAR_1, VAR_0, '\0');
  }
  (void) FUNC_4(VAR_1, "\n\n\n\n\t\t\t\t\tJob:  ", 15);
  (void) FUNC_4(VAR_1, VAR_4, FUNC_2(VAR_4));
  (void) FUNC_4(VAR_1, "\n\t\t\t\t\tDate: ", 12);
  (void) FUNC_4(VAR_1, FUNC_0(&VAR_5), 24);
  (void) FUNC_4(VAR_1, "\n", 1);
 }
 if (!VAR_2->no_formfeed)
  (void) FUNC_4(VAR_1, VAR_2->form_feed, FUNC_2(VAR_2->form_feed));
 VAR_2->tof = 1;
}
