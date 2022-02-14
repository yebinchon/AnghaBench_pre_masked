
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct md5_state {int * hash; } ;
struct iv_lmk_private {int * seed; int hash_tfm; } ;
struct dm_crypt_request {int iv_sector; } ;
struct TYPE_7__ {struct iv_lmk_private lmk; } ;
struct crypt_config {int iv_size; TYPE_1__ iv_gen_private; } ;
typedef int buf ;
typedef scalar_t__ __le32 ;
struct TYPE_8__ {int tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,struct md5_state*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *,int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_6 (int *,int **,int ) ;

__attribute__((used)) static int FUNC_7(struct crypt_config *VAR_3, u8 *VAR_4,
       struct dm_crypt_request *VAR_5,
       u8 *VAR_6)
{
 struct iv_lmk_private *VAR_7 = &VAR_3->iv_gen_private.lmk;
 FUNC_0(VAR_2, VAR_7->hash_tfm);
 struct md5_state VAR_8;
 __le32 VAR_9[4];
 int VAR_10, VAR_11;

 VAR_2->tfm = VAR_7->hash_tfm;

 VAR_11 = FUNC_4(VAR_2);
 if (VAR_11)
  return VAR_11;

 if (VAR_7->seed) {
  VAR_11 = FUNC_5(VAR_2, VAR_7->seed, VAR_0);
  if (VAR_11)
   return VAR_11;
 }


 VAR_11 = FUNC_5(VAR_2, VAR_6 + 16, 16 * 31);
 if (VAR_11)
  return VAR_11;


 VAR_9[0] = FUNC_2(VAR_5->iv_sector & 0xFFFFFFFF);
 VAR_9[1] = FUNC_2((((u64)VAR_5->iv_sector >> 32) & 0x00FFFFFF) | 0x80000000);
 VAR_9[2] = FUNC_2(4024);
 VAR_9[3] = 0;
 VAR_11 = FUNC_5(VAR_2, (u8 *)VAR_9, sizeof(VAR_9));
 if (VAR_11)
  return VAR_11;


 VAR_11 = FUNC_3(VAR_2, &VAR_8);
 if (VAR_11)
  return VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  FUNC_1(&VAR_8.hash[VAR_10]);
 FUNC_6(VAR_4, &VAR_8.hash, VAR_3->iv_size);

 return 0;
}
