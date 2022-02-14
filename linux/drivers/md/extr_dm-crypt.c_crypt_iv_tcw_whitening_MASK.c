
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct iv_tcw_private {int crc32_tfm; scalar_t__ whitening; } ;
struct dm_crypt_request {int iv_sector; } ;
struct TYPE_7__ {struct iv_tcw_private tcw; } ;
struct crypt_config {TYPE_1__ iv_gen_private; } ;
typedef int buf ;
typedef int __le64 ;
struct TYPE_8__ {int tfm; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,scalar_t__,int *,int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(struct crypt_config *VAR_3,
      struct dm_crypt_request *VAR_4,
      u8 *VAR_5)
{
 struct iv_tcw_private *VAR_6 = &VAR_3->iv_gen_private.tcw;
 __le64 VAR_7 = FUNC_1(VAR_4->iv_sector);
 u8 VAR_8[VAR_1];
 FUNC_0(VAR_2, VAR_6->crc32_tfm);
 int VAR_9, VAR_10;


 FUNC_6(VAR_8, VAR_6->whitening, (u8 *)&VAR_7, 8);
 FUNC_6(&VAR_8[8], VAR_6->whitening + 8, (u8 *)&VAR_7, 8);


 VAR_2->tfm = VAR_6->crc32_tfm;
 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  VAR_10 = FUNC_3(VAR_2);
  if (VAR_10)
   goto out;
  VAR_10 = FUNC_4(VAR_2, &VAR_8[VAR_9 * 4], 4);
  if (VAR_10)
   goto out;
  VAR_10 = FUNC_2(VAR_2, &VAR_8[VAR_9 * 4]);
  if (VAR_10)
   goto out;
 }
 FUNC_5(&VAR_8[0], &VAR_8[12], 4);
 FUNC_5(&VAR_8[4], &VAR_8[8], 4);


 for (VAR_9 = 0; VAR_9 < ((1 << VAR_0) / 8); VAR_9++)
  FUNC_5(VAR_5 + VAR_9 * 8, VAR_8, 8);
out:
 FUNC_7(VAR_8, sizeof(VAR_8));
 return VAR_10;
}
