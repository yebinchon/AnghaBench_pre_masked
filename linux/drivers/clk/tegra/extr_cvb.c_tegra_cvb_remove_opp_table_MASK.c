
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cvb_table_freq_entry {unsigned long freq; } ;
struct cvb_table {struct cvb_table_freq_entry* entries; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct device*,unsigned long) ;

void FUNC_1(struct device *VAR_1,
    const struct cvb_table *VAR_2,
    unsigned long VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  const struct cvb_table_freq_entry *VAR_5 = &VAR_2->entries[VAR_4];

  if (!VAR_5->freq || (VAR_5->freq > VAR_3))
   break;

  FUNC_0(VAR_1, VAR_5->freq);
 }
}
