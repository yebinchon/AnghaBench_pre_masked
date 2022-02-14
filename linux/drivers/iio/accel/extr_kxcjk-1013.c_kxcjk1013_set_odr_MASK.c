
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kxcjk1013_data {scalar_t__ chipset; TYPE_1__* client; int odr_bits; } ;
struct kx_odr_map {int wuf_bits; int odr_bits; } ;
typedef enum kxcjk1013_mode { ____Placeholder_kxcjk1013_mode } kxcjk1013_mode ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kx_odr_map const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct kx_odr_map const*) ;
 int VAR_4 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 struct kx_odr_map* FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (struct kxcjk1013_data*,int*) ;
 int FUNC_7 (struct kxcjk1013_data*,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(struct kxcjk1013_data *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;
 enum kxcjk1013_mode VAR_11;
 const struct kx_odr_map *VAR_12;

 VAR_10 = FUNC_6(VAR_7, &VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_7->chipset == VAR_2)
  VAR_12 = FUNC_5(VAR_5,
             FUNC_0(VAR_5),
             VAR_8, VAR_9);
 else
  VAR_12 = FUNC_5(VAR_6,
             FUNC_0(VAR_6),
             VAR_8, VAR_9);

 if (FUNC_1(VAR_12))
  return FUNC_2(VAR_12);


 VAR_10 = FUNC_7(VAR_7, VAR_4);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_4(VAR_7->client, VAR_1,
     VAR_12->odr_bits);
 if (VAR_10 < 0) {
  FUNC_3(&VAR_7->client->dev, "Error writing data_ctrl\n");
  return VAR_10;
 }

 VAR_7->odr_bits = VAR_12->odr_bits;

 VAR_10 = FUNC_4(VAR_7->client, VAR_0,
     VAR_12->wuf_bits);
 if (VAR_10 < 0) {
  FUNC_3(&VAR_7->client->dev, "Error writing reg_ctrl2\n");
  return VAR_10;
 }

 if (VAR_11 == VAR_3) {
  VAR_10 = FUNC_7(VAR_7, VAR_3);
  if (VAR_10 < 0)
   return VAR_10;
 }

 return 0;
}
