
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct checkout_index_entry {int member_0; int member_2; char* member_3; int member_1; } ;
struct TYPE_5__ {int count; char** strings; int member_0; } ;
typedef TYPE_1__ git_strarray ;
struct TYPE_6__ {TYPE_1__ paths; } ;
typedef TYPE_2__ git_checkout_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct checkout_index_entry*,int) ;
 int FUNC_3 (char*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

void FUNC_7(void)
{
 git_checkout_options VAR_11 = VAR_8;
 char *VAR_12[] = { "conflicting-1.txt", "conflicting-3.txt" };
 git_strarray VAR_13 = {0};

 struct checkout_index_entry VAR_14[] = {
  { 0100644, VAR_4, 1, "conflicting-1.txt" },
  { 0100644, VAR_6, 2, "conflicting-1.txt" },
  { 0100644, VAR_7, 3, "conflicting-1.txt" },

  { 0100644, VAR_4, 1, "conflicting-2.txt" },
  { 0100644, VAR_6, 2, "conflicting-2.txt" },
  { 0100644, VAR_7, 3, "conflicting-2.txt" },

  { 0100644, VAR_0, 1, "conflicting-3.txt" },
  { 0100644, VAR_2, 2, "conflicting-3.txt" },
  { 0100644, VAR_3, 3, "conflicting-3.txt" },

  { 0100644, VAR_0, 1, "conflicting-4.txt" },
  { 0100644, VAR_2, 2, "conflicting-4.txt" },
  { 0100644, VAR_3, 3, "conflicting-4.txt" },
 };

 VAR_13.count = 2;
 VAR_13.strings = VAR_12;

 VAR_11.paths = VAR_13;

 FUNC_2(VAR_14, 12);
 FUNC_1(FUNC_5(VAR_9));

 FUNC_1(FUNC_4(VAR_10, VAR_9, &VAR_11));

 FUNC_3("conflicting-1.txt", VAR_5);
 FUNC_0(!FUNC_6("merge-resolve/conflicting-2.txt"));
 FUNC_3("conflicting-3.txt", VAR_1);
 FUNC_0(!FUNC_6("merge-resolve/conflicting-4.txt"));
}
