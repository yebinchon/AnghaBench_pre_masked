
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_sid_entry {scalar_t__ base; int limit; int offset; } ;
struct host1x_info {unsigned int num_sid_entries; struct host1x_sid_entry* sid_table; } ;
struct host1x {struct host1x_info* info; } ;


 int FUNC_0 (struct host1x*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct host1x *VAR_0)
{
 const struct host1x_info *VAR_1 = VAR_0->info;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_sid_entries; VAR_2++) {
  const struct host1x_sid_entry *VAR_3 = &VAR_1->sid_table[VAR_2];

  FUNC_0(VAR_0, VAR_3->offset, VAR_3->base);
  FUNC_0(VAR_0, VAR_3->limit, VAR_3->base + 4);
 }
}
