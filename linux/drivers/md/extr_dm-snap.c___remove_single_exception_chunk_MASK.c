
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snapshot {int complete; } ;
struct dm_exception {scalar_t__ old_chunk; int new_chunk; } ;
typedef scalar_t__ chunk_t ;


 int FUNC_0 (char*,unsigned long long,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct dm_exception*) ;
 int FUNC_2 (struct dm_exception*) ;
 struct dm_exception* FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct dm_exception*) ;
 int FUNC_5 (struct dm_exception*) ;

__attribute__((used)) static int FUNC_6(struct dm_snapshot *VAR_1,
        chunk_t VAR_2)
{
 struct dm_exception *VAR_3;

 VAR_3 = FUNC_3(&VAR_1->complete, VAR_2);
 if (!VAR_3) {
  FUNC_0("Corruption detected: exception for block %llu is "
        "on disk but not in memory",
        (unsigned long long)VAR_2);
  return -VAR_0;
 }




 if (!FUNC_1(VAR_3)) {
  FUNC_4(VAR_3);
  FUNC_5(VAR_3);
  return 0;
 }
 if (VAR_2 == VAR_3->old_chunk) {
  VAR_3->old_chunk++;
  VAR_3->new_chunk++;
 } else if (VAR_2 != VAR_3->old_chunk +
     FUNC_1(VAR_3)) {
  FUNC_0("Attempt to merge block %llu from the "
        "middle of a chunk range [%llu - %llu]",
        (unsigned long long)VAR_2,
        (unsigned long long)VAR_3->old_chunk,
        (unsigned long long)
        VAR_3->old_chunk + FUNC_1(VAR_3));
  return -VAR_0;
 }

 FUNC_2(VAR_3);

 return 0;
}
