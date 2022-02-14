
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isl29501_register_desc {scalar_t__ lsb; scalar_t__ msb; } ;
struct isl29501_private {int lock; int client; } ;
typedef enum isl29501_register_name { ____Placeholder_isl29501_register_name } isl29501_register_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 struct isl29501_register_desc* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static u32 FUNC_3(struct isl29501_private *VAR_4,
       enum isl29501_register_name VAR_5,
       u32 VAR_6)
{
 const struct isl29501_register_desc *VAR_7 = &VAR_3[VAR_5];
 int VAR_8;

 if (!VAR_7->msb && VAR_6 > VAR_2)
  return -VAR_0;

 if (VAR_6 > VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_4->lock);
 if (VAR_7->msb) {
  VAR_8 = FUNC_0(VAR_4->client,
      VAR_7->msb, VAR_6 >> 8);
  if (VAR_8 < 0)
   goto err;
 }

 VAR_8 = FUNC_0(VAR_4->client, VAR_7->lsb, VAR_6);

err:
 FUNC_2(&VAR_4->lock);
 return VAR_8;
}
