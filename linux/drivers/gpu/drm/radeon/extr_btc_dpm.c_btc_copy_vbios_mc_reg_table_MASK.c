
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct evergreen_mc_reg_table {size_t last; size_t num_entries; TYPE_3__* mc_reg_table_entry; TYPE_1__* mc_reg_address; } ;
struct atom_mc_reg_table {scalar_t__ last; size_t num_entries; TYPE_4__* mc_reg_table_entry; TYPE_2__* mc_reg_address; } ;
struct TYPE_8__ {int * mc_data; int mclk_max; } ;
struct TYPE_7__ {int * mc_data; int mclk_max; } ;
struct TYPE_6__ {int s1; } ;
struct TYPE_5__ {int s1; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct atom_mc_reg_table *VAR_3,
           struct evergreen_mc_reg_table *VAR_4)
{
 u8 VAR_5, VAR_6;

 if (VAR_3->last > VAR_2)
  return -VAR_0;

 if (VAR_3->num_entries > VAR_1)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3->last; VAR_5++)
  VAR_4->mc_reg_address[VAR_5].s1 = VAR_3->mc_reg_address[VAR_5].s1;
 VAR_4->last = VAR_3->last;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_entries; VAR_5++) {
  VAR_4->mc_reg_table_entry[VAR_5].mclk_max =
   VAR_3->mc_reg_table_entry[VAR_5].mclk_max;
  for(VAR_6 = 0; VAR_6 < VAR_3->last; VAR_6++)
   VAR_4->mc_reg_table_entry[VAR_5].mc_data[VAR_6] =
    VAR_3->mc_reg_table_entry[VAR_5].mc_data[VAR_6];
 }
 VAR_4->num_entries = VAR_3->num_entries;

 return 0;
}
