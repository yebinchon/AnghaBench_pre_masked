
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int sectors_per_block; scalar_t__ migration_threshold; int nr_io_migrations; int tracker; } ;
typedef scalar_t__ sector_t ;
typedef enum busy { ____Placeholder_busy } busy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static enum busy FUNC_2(struct cache *VAR_3)
{
 bool VAR_4 = FUNC_1(&VAR_3->tracker, VAR_1);
 sector_t VAR_5 = (FUNC_0(&VAR_3->nr_io_migrations) + 1) *
  VAR_3->sectors_per_block;

 if (VAR_4 && VAR_5 <= VAR_3->migration_threshold)
  return VAR_2;
 else
  return VAR_0;
}
