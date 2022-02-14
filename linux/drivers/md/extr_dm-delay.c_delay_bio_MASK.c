
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_delay_info {unsigned long expires; int list; struct delay_c* context; } ;
struct delay_class {int ops; int delay; } ;
struct delay_c {int delayed_bios; int may_delay; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 struct dm_delay_info* FUNC_1 (struct bio*,int) ;
 unsigned long VAR_3 ;
 int FUNC_2 (int *,int *) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct delay_c*,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct delay_c *VAR_4, struct delay_class *VAR_5, struct bio *VAR_6)
{
 struct dm_delay_info *VAR_7;
 unsigned long VAR_8 = 0;

 if (!VAR_5->delay || !FUNC_0(&VAR_4->may_delay))
  return VAR_0;

 VAR_7 = FUNC_1(VAR_6, sizeof(struct dm_delay_info));

 VAR_7->context = VAR_4;
 VAR_7->expires = VAR_8 = VAR_3 + FUNC_3(VAR_5->delay);

 FUNC_4(&VAR_2);
 VAR_5->ops++;
 FUNC_2(&VAR_7->list, &VAR_4->delayed_bios);
 FUNC_5(&VAR_2);

 FUNC_6(VAR_4, VAR_8);

 return VAR_1;
}
