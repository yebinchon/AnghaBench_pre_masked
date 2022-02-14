
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct pack_idx_entry {int dummy; } ;
struct object_entry {int hash; } ;
struct hashfile {int dummy; } ;
typedef int hash_value ;


 int FUNC_0 (struct hashfile*,size_t*,int) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hashfile *VAR_0,
        struct pack_idx_entry **VAR_1,
        uint32_t VAR_2)
{
 uint32_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  struct object_entry *VAR_4 = (struct object_entry *)VAR_1[VAR_3];
  uint32_t VAR_5 = FUNC_1(VAR_4->hash);
  FUNC_0(VAR_0, &VAR_5, sizeof(VAR_5));
 }
}
