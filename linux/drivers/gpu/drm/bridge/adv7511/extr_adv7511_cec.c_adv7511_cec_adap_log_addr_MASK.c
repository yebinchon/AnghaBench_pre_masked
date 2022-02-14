
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cec_adapter {int dummy; } ;
struct adv7511 {scalar_t__ type; int cec_valid_addrs; scalar_t__* cec_addr; int regmap_cec; int cec_enabled_adap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct adv7511* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (int ,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct cec_adapter *VAR_9, u8 VAR_10)
{
 struct adv7511 *VAR_11 = FUNC_0(VAR_9);
 unsigned int VAR_12 = VAR_11->type == VAR_4 ?
     VAR_5 : 0;
 unsigned int VAR_13, VAR_14 = VAR_0;

 if (!VAR_11->cec_enabled_adap)
  return VAR_10 == VAR_6 ? 0 : -VAR_7;

 if (VAR_10 == VAR_6) {
  FUNC_1(VAR_11->regmap_cec,
       VAR_3 + VAR_12,
       0x70, 0);
  VAR_11->cec_valid_addrs = 0;
  return 0;
 }

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  bool VAR_15 = VAR_11->cec_valid_addrs & (1 << VAR_13);

  if (VAR_14 == VAR_0 && !VAR_15)
   VAR_14 = VAR_13;
  if (VAR_15 && VAR_11->cec_addr[VAR_13] == VAR_10)
   return 0;
 }
 if (VAR_13 == VAR_0) {
  VAR_13 = VAR_14;
  if (VAR_13 == VAR_0)
   return -VAR_8;
 }
 VAR_11->cec_addr[VAR_13] = VAR_10;
 VAR_11->cec_valid_addrs |= 1 << VAR_13;

 switch (VAR_13) {
 case 0:

  FUNC_1(VAR_11->regmap_cec,
       VAR_3 + VAR_12,
       0x10, 0x10);

  FUNC_1(VAR_11->regmap_cec,
       VAR_1 + VAR_12,
       0x0f, VAR_10);
  break;
 case 1:

  FUNC_1(VAR_11->regmap_cec,
       VAR_3 + VAR_12,
       0x20, 0x20);

  FUNC_1(VAR_11->regmap_cec,
       VAR_1 + VAR_12,
       0xf0, VAR_10 << 4);
  break;
 case 2:

  FUNC_1(VAR_11->regmap_cec,
       VAR_3 + VAR_12,
       0x40, 0x40);

  FUNC_1(VAR_11->regmap_cec,
       VAR_2 + VAR_12,
       0x0f, VAR_10);
  break;
 }
 return 0;
}
