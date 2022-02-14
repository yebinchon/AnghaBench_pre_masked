
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct checkout_index_entry*,int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ) ;

void FUNC_5(void)
{
 git_checkout_options VAR_10 = VAR_3;

 struct checkout_index_entry VAR_11[] = {
  { 0100644, VAR_0, 1, "link-1" },
  { 0100644, VAR_1, 2, "link-1" },
  { 0120000, VAR_7, 3, "link-1" },

  { 0100644, VAR_0, 1, "link-2" },
  { 0120000, VAR_6, 2, "link-2" },
  { 0100644, VAR_2, 3, "link-2" },

  { 0120000, VAR_5, 1, "link-3" },
  { 0100644, VAR_1, 2, "link-3" },
  { 0120000, VAR_7, 3, "link-3" },

  { 0120000, VAR_5, 1, "link-4" },
  { 0120000, VAR_6, 2, "link-4" },
  { 0100644, VAR_2, 3, "link-4" },
 };

 VAR_10.checkout_strategy |= VAR_4;

 FUNC_1(VAR_11, 12);
 FUNC_0(FUNC_4(VAR_8));

 FUNC_0(FUNC_3(VAR_9, VAR_8, &VAR_10));


 FUNC_2("link-1", VAR_1);
 FUNC_2("link-2", VAR_2);
 FUNC_2("link-3", VAR_1);
 FUNC_2("link-4", VAR_2);
}
