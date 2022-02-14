
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dm_cache_metadata {scalar_t__ clean_when_opened; } ;
struct dm_array_cursor {int dummy; } ;
typedef int mapping ;
typedef int (* load_mapping_fn ) (void*,int ,int ,int,int ,int) ;
typedef int hint ;
typedef int dm_oblock_t ;
typedef int __le64 ;
typedef int __le32 ;


 int FUNC_0 (char*,unsigned long long) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct dm_array_cursor*,void**) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,unsigned int*) ;

__attribute__((used)) static int FUNC_7(struct dm_cache_metadata *VAR_2,
        uint64_t VAR_3, bool VAR_4,
        struct dm_array_cursor *VAR_5,
        struct dm_array_cursor *VAR_6,
        load_mapping_fn VAR_7, void *VAR_8)
{
 int VAR_9 = 0;

 __le64 VAR_10;
 __le32 VAR_11 = 0;

 __le64 *VAR_12;
 __le32 *VAR_13;

 dm_oblock_t VAR_14;
 unsigned VAR_15;
 bool VAR_16 = 1;

 FUNC_1(VAR_5, (void **) &VAR_12);
 FUNC_4(&VAR_10, VAR_12, sizeof(VAR_10));
 FUNC_6(VAR_10, &VAR_14, &VAR_15);

 if (VAR_15 & VAR_1) {
  if (VAR_4) {
   FUNC_1(VAR_6, (void **) &VAR_13);
   FUNC_4(&VAR_11, VAR_13, sizeof(VAR_11));
  }
  if (VAR_2->clean_when_opened)
   VAR_16 = VAR_15 & VAR_0;

  VAR_9 = VAR_7(VAR_8, VAR_14, FUNC_5(VAR_3), VAR_16,
         FUNC_3(VAR_11), VAR_4);
  if (VAR_9) {
   FUNC_0("policy couldn't load cache block %llu",
         (unsigned long long) FUNC_2(FUNC_5(VAR_3)));
  }
 }

 return VAR_9;
}
