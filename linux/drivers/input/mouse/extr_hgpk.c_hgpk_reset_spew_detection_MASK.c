
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hgpk_data {int spew_flag; scalar_t__ y_tally; scalar_t__ x_tally; scalar_t__ dupe_count; scalar_t__ spew_count; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hgpk_data *VAR_1)
{
 VAR_1->spew_count = 0;
 VAR_1->dupe_count = 0;
 VAR_1->x_tally = 0;
 VAR_1->y_tally = 0;
 VAR_1->spew_flag = VAR_0;
}
