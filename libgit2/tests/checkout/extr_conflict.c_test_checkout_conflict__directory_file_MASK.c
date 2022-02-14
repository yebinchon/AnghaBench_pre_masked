
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
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct checkout_index_entry*,int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ) ;

void FUNC_5(void)
{
 git_checkout_options VAR_7 = VAR_3;

 struct checkout_index_entry VAR_8[] = {
  { 0100644, VAR_0, 1, "df-1" },
  { 0100644, VAR_1, 2, "df-1" },
  { 0100644, VAR_2, 0, "df-1/file" },

  { 0100644, VAR_0, 1, "df-2" },
  { 0100644, VAR_2, 3, "df-2" },
  { 0100644, VAR_1, 0, "df-2/file" },

  { 0100644, VAR_2, 3, "df-3" },
  { 0100644, VAR_0, 1, "df-3/file" },
  { 0100644, VAR_1, 2, "df-3/file" },

  { 0100644, VAR_1, 2, "df-4" },
  { 0100644, VAR_0, 1, "df-4/file" },
  { 0100644, VAR_2, 3, "df-4/file" },
 };

 VAR_7.checkout_strategy |= VAR_4;

 FUNC_1(VAR_8, 12);
 FUNC_0(FUNC_4(VAR_5));

 FUNC_0(FUNC_3(VAR_6, VAR_5, &VAR_7));

 FUNC_2("df-1/file", VAR_2);
 FUNC_2("df-1~ours", VAR_1);
 FUNC_2("df-2/file", VAR_1);
 FUNC_2("df-2~theirs", VAR_2);
 FUNC_2("df-3/file", VAR_1);
 FUNC_2("df-3~theirs", VAR_2);
 FUNC_2("df-4~ours", VAR_1);
 FUNC_2("df-4/file", VAR_2);
}
