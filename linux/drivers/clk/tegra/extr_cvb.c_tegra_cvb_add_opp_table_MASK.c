
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rail_alignment {int dummy; } ;
struct device {int dummy; } ;
struct cvb_table {int speedo_id; int process_id; } ;


 int VAR_0 ;
 struct cvb_table const* FUNC_0 (int) ;
 int FUNC_1 (struct device*,struct cvb_table const*,struct rail_alignment*,int,unsigned long) ;

const struct cvb_table *
FUNC_2(struct device *VAR_1, const struct cvb_table *VAR_2,
   size_t VAR_3, struct rail_alignment *VAR_4,
   int VAR_5, int VAR_6, int VAR_7,
   unsigned long VAR_8)
{
 size_t VAR_9;
 int VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  const struct cvb_table *VAR_11 = &VAR_2[VAR_9];

  if (VAR_11->speedo_id != -1 && VAR_11->speedo_id != VAR_6)
   continue;

  if (VAR_11->process_id != -1 && VAR_11->process_id != VAR_5)
   continue;

  VAR_10 = FUNC_1(VAR_1, VAR_11, VAR_4, VAR_7,
          VAR_8);
  return VAR_10 ? FUNC_0(VAR_10) : VAR_11;
 }

 return FUNC_0(-VAR_0);
}
