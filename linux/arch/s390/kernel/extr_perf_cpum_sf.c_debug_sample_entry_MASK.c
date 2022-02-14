
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hws_trailer_entry {int f; } ;
struct hws_basic_entry {int def; } ;


 int FUNC_0 (int ,int,char*,int ,int ,struct hws_basic_entry*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct hws_basic_entry *VAR_1,
          struct hws_trailer_entry *VAR_2)
{
 FUNC_0(VAR_0, 4, "hw_collect_samples: Found unknown "
       "sampling data entry: te->f=%i basic.def=%04x "
       "(%p)\n",
       VAR_2->f, VAR_1->def, VAR_1);
}
