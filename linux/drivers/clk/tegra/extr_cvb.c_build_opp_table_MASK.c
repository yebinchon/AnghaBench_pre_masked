
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rail_alignment {int dummy; } ;
struct device {int dummy; } ;
struct cvb_table_freq_entry {unsigned long freq; int coefficients; } ;
struct cvb_table {int voltage_scale; int speedo_scale; struct cvb_table_freq_entry* entries; int max_millivolts; int min_millivolts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct device*,unsigned long,int) ;
 int FUNC_2 (int,int ,int *) ;
 int FUNC_3 (int,int ,struct rail_alignment*) ;
 int FUNC_4 (int ,struct rail_alignment*,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, const struct cvb_table *VAR_4,
      struct rail_alignment *VAR_5,
      int VAR_6, unsigned long VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_11 = FUNC_4(VAR_4->min_millivolts, VAR_5, VAR_2);
 VAR_12 = FUNC_4(VAR_4->max_millivolts, VAR_5, VAR_0);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  const struct cvb_table_freq_entry *VAR_13 = &VAR_4->entries[VAR_8];

  if (!VAR_13->freq || (VAR_13->freq > VAR_7))
   break;

  VAR_10 = FUNC_2(VAR_6, VAR_4->speedo_scale,
       &VAR_13->coefficients);
  VAR_10 = FUNC_3(VAR_10, VAR_4->voltage_scale,
         VAR_5);
  VAR_10 = FUNC_0(VAR_10, VAR_11, VAR_12);

  VAR_9 = FUNC_1(VAR_3, VAR_13->freq, VAR_10 * 1000);
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
