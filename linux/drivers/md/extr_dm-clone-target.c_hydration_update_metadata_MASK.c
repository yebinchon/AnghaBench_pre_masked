
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table_bucket {int dummy; } ;
struct dm_clone_region_hydration {scalar_t__ status; int h; int region_nr; struct clone* clone; } ;
struct clone {int cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hash_table_bucket*,unsigned long) ;
 int FUNC_1 (struct hash_table_bucket*,unsigned long) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct clone*) ;
 struct hash_table_bucket* FUNC_4 (struct clone*,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct dm_clone_region_hydration *VAR_3)
{
 int VAR_4 = 0;
 unsigned long VAR_5;
 struct hash_table_bucket *VAR_6;
 struct clone *VAR_7 = VAR_3->clone;

 if (FUNC_7(FUNC_3(VAR_7) >= VAR_1))
  VAR_4 = -VAR_2;


 if (FUNC_6(!VAR_4) && VAR_3->status == VAR_0)
  VAR_4 = FUNC_2(VAR_7->cmd, VAR_3->region_nr);

 VAR_6 = FUNC_4(VAR_7, VAR_3->region_nr);


 FUNC_0(VAR_6, VAR_5);
 FUNC_5(&VAR_3->h);
 FUNC_1(VAR_6, VAR_5);

 return VAR_4;
}
