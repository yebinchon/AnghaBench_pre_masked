
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct isl29501_register_desc {scalar_t__ lsb; scalar_t__ msb; } ;
struct isl29501_private {int lock; int client; } ;
typedef scalar_t__ s32 ;
typedef enum isl29501_register_name { ____Placeholder_isl29501_register_name } isl29501_register_name ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 struct isl29501_register_desc* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct isl29501_private *VAR_1,
      enum isl29501_register_name VAR_2,
      u32 *VAR_3)
{
 const struct isl29501_register_desc *VAR_4 = &VAR_0[VAR_2];
 u8 VAR_5 = 0, VAR_6 = 0;
 s32 VAR_7;

 FUNC_1(&VAR_1->lock);
 if (VAR_4->msb) {
  VAR_7 = FUNC_0(VAR_1->client, VAR_4->msb);
  if (VAR_7 < 0)
   goto err;
  VAR_5 = VAR_7;
 }

 if (VAR_4->lsb) {
  VAR_7 = FUNC_0(VAR_1->client, VAR_4->lsb);
  if (VAR_7 < 0)
   goto err;
  VAR_6 = VAR_7;
 }
 FUNC_2(&VAR_1->lock);

 *VAR_3 = (VAR_5 << 8) + VAR_6;

 return 0;
err:
 FUNC_2(&VAR_1->lock);

 return VAR_7;
}
