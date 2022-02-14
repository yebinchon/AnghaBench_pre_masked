
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_block_manager {int dummy; } ;
struct dm_block {int dummy; } ;
typedef scalar_t__ __le64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__* FUNC_3 (struct dm_block*) ;
 int FUNC_4 (struct dm_block_manager*) ;
 int FUNC_5 (struct dm_block_manager*,int ,int *,struct dm_block**) ;
 int FUNC_6 (struct dm_block*) ;

__attribute__((used)) static int FUNC_7(struct dm_block_manager *VAR_1, bool *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4, VAR_5;
 struct dm_block *VAR_6;
 __le64 *VAR_7, VAR_8 = FUNC_2(0);





 VAR_3 = FUNC_5(VAR_1, VAR_0, ((void*)0), &VAR_6);
 if (VAR_3) {
  FUNC_1("Failed to read_lock superblock");
  return VAR_3;
 }

 VAR_7 = FUNC_3(VAR_6);
 *VAR_2 = 0;


 FUNC_0(FUNC_4(VAR_1) % sizeof(__le64));
 VAR_5 = FUNC_4(VAR_1) / sizeof(__le64);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  if (VAR_7[VAR_4] != VAR_8) {
   *VAR_2 = 1;
   break;
  }
 }

 FUNC_6(VAR_6);

 return 0;
}
