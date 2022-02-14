
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pg_state {int to_dmesg; int check_wx; scalar_t__ wx_pages; void* current_address; } ;
typedef int pgprotval_t ;
typedef int pgd_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct seq_file*,struct pg_state*,int ,int,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (struct seq_file*,struct pg_state*,int ,int,int) ;

__attribute__((used)) static void FUNC_11(struct seq_file *VAR_5, pgd_t *VAR_6,
           bool VAR_7, bool VAR_8)
{
 pgd_t *VAR_9 = VAR_0;
 pgprotval_t VAR_10, VAR_11;
 int VAR_12;
 struct pg_state VAR_13 = {};

 if (VAR_6) {
  VAR_9 = VAR_6;
  VAR_13.to_dmesg = VAR_8;
 }

 VAR_13.check_wx = VAR_7;
 if (VAR_7)
  VAR_13.wx_pages = 0;

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  VAR_13.current_address = FUNC_3(VAR_12 * VAR_1);
  if (!FUNC_7(*VAR_9) && !FUNC_2(VAR_12)) {
   VAR_10 = FUNC_5(*VAR_9);



   VAR_11 = VAR_10;

   if (FUNC_6(*VAR_9) || !FUNC_8(*VAR_9)) {
    FUNC_4(VAR_5, &VAR_13, FUNC_0(VAR_10), VAR_11, 1);
   } else {
    FUNC_10(VAR_5, &VAR_13, *VAR_9, VAR_11,
            VAR_12 * VAR_1);
   }
  } else
   FUNC_4(VAR_5, &VAR_13, FUNC_0(0), 0, 1);

  FUNC_1();
  VAR_9++;
 }


 VAR_13.current_address = FUNC_3(VAR_2*VAR_1);
 FUNC_4(VAR_5, &VAR_13, FUNC_0(0), 0, 0);
 if (!VAR_7)
  return;
 if (VAR_13.wx_pages)
  FUNC_9("x86/mm: Checked W+X mappings: FAILED, %lu W+X pages found.\n",
   VAR_13.wx_pages);
 else
  FUNC_9("x86/mm: Checked W+X mappings: passed, no W+X pages found.\n");
}
