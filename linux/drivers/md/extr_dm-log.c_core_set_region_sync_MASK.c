
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_c {int sync_bits; int sync_count; int recovering_bits; } ;
struct dm_dirty_log {scalar_t__ context; } ;
typedef int region_t ;


 int FUNC_0 (struct log_c*,int ,int ) ;
 int FUNC_1 (struct log_c*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct dm_dirty_log *VAR_0, region_t VAR_1,
     int VAR_2)
{
 struct log_c *VAR_3 = (struct log_c *) VAR_0->context;

 FUNC_0(VAR_3, VAR_3->recovering_bits, VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_3, VAR_3->sync_bits, VAR_1);
                VAR_3->sync_count++;
        } else if (FUNC_2(VAR_3->sync_bits, VAR_1)) {
  VAR_3->sync_count--;
  FUNC_0(VAR_3, VAR_3->sync_bits, VAR_1);
 }
}
