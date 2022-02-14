
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dust_device {int sect_per_block; int quiet_mode; int badblock_count; int badblocklist; } ;
struct badblock {int node; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (char*,unsigned long long) ;
 struct badblock* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct badblock*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(struct dust_device *VAR_0, sector_t VAR_1)
{
 struct badblock *VAR_2 = FUNC_1(&VAR_0->badblocklist, VAR_1);

 if (VAR_2) {
  FUNC_3(&VAR_2->node, &VAR_0->badblocklist);
  VAR_0->badblock_count--;
  FUNC_2(VAR_2);
  if (!VAR_0->quiet_mode) {
   FUNC_4(VAR_1, VAR_0->sect_per_block);
   FUNC_0("block %llu removed from badblocklist by write",
          (unsigned long long)VAR_1);
  }
 }
}
