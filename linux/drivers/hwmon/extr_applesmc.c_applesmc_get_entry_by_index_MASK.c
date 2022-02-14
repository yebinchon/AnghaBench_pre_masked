
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef struct applesmc_entry {int valid; void* flags; int type; void* len; int key; } const applesmc_entry ;
typedef int __be32 ;
struct TYPE_2__ {int mutex; struct applesmc_entry const* cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct applesmc_entry const* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,void**,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,void**,void**,int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static const struct applesmc_entry *FUNC_6(int VAR_3)
{
 struct applesmc_entry *VAR_4 = &VAR_2.cache[VAR_3];
 u8 VAR_5[4], VAR_6[6];
 __be32 VAR_7;
 int VAR_8 = 0;

 if (VAR_4->valid)
  return VAR_4;

 FUNC_3(&VAR_2.mutex);

 if (VAR_4->valid)
  goto out;
 VAR_7 = FUNC_1(VAR_3);
 VAR_8 = FUNC_5(VAR_0, (u8 *)&VAR_7, VAR_5, 4);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_5(VAR_1, VAR_5, VAR_6, 6);
 if (VAR_8)
  goto out;

 FUNC_2(VAR_4->key, VAR_5, 4);
 VAR_4->len = VAR_6[0];
 FUNC_2(VAR_4->type, &VAR_6[1], 4);
 VAR_4->flags = VAR_6[5];
 VAR_4->valid = 1;

out:
 FUNC_4(&VAR_2.mutex);
 if (VAR_8)
  return FUNC_0(VAR_8);
 return VAR_4;
}
