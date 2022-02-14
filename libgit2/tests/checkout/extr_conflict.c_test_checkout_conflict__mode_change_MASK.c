
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct checkout_index_entry {int member_0; int member_2; char* member_3; int member_1; } ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct checkout_index_entry*,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (int ) ;

void FUNC_7(void)
{
 git_checkout_options VAR_8 = VAR_4;

 struct checkout_index_entry VAR_9[] = {
  { 0100644, VAR_0, 1, "executable-1" },
  { 0100755, VAR_0, 2, "executable-1" },
  { 0100644, VAR_3, 3, "executable-1" },

  { 0100644, VAR_0, 1, "executable-2" },
  { 0100644, VAR_2, 2, "executable-2" },
  { 0100755, VAR_0, 3, "executable-2" },

  { 0100755, VAR_0, 1, "executable-3" },
  { 0100644, VAR_0, 2, "executable-3" },
  { 0100755, VAR_3, 3, "executable-3" },

  { 0100755, VAR_0, 1, "executable-4" },
  { 0100755, VAR_2, 2, "executable-4" },
  { 0100644, VAR_0, 3, "executable-4" },

  { 0100644, VAR_0, 1, "executable-5" },
  { 0100755, VAR_2, 2, "executable-5" },
  { 0100644, VAR_3, 3, "executable-5" },

  { 0100755, VAR_0, 1, "executable-6" },
  { 0100644, VAR_2, 2, "executable-6" },
  { 0100755, VAR_3, 3, "executable-6" },
 };

 VAR_8.checkout_strategy |= VAR_5;

 FUNC_1(VAR_9, 18);
 FUNC_0(FUNC_6(VAR_6));

 FUNC_0(FUNC_5(VAR_7, VAR_6, &VAR_8));


 FUNC_4("executable-1", VAR_3);
 FUNC_3("executable-1", 0100755);

 FUNC_4("executable-2", VAR_2);
 FUNC_3("executable-2", 0100755);

 FUNC_4("executable-3", VAR_3);
 FUNC_3("executable-3", 0100644);

 FUNC_4("executable-4", VAR_2);
 FUNC_3("executable-4", 0100644);

 FUNC_2("executable-5", VAR_1);
 FUNC_3("executable-5", 0100755);

 FUNC_2("executable-6", VAR_1);
 FUNC_3("executable-6", 0100644);
}
