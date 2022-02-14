
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_verity {scalar_t__ data_blocks; int validated_blocks; struct dm_target* ti; } ;
struct dm_target {char* error; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct dm_verity *VAR_4)
{
 struct dm_target *VAR_5 = VAR_4->ti;


 if (VAR_4->data_blocks > VAR_3) {
  VAR_5->error = "device too large to use check_at_most_once";
  return -VAR_0;
 }

 VAR_4->validated_blocks = FUNC_1(FUNC_0(VAR_4->data_blocks),
           sizeof(unsigned long),
           VAR_2);
 if (!VAR_4->validated_blocks) {
  VAR_5->error = "failed to allocate bitset for check_at_most_once";
  return -VAR_1;
 }

 return 0;
}
