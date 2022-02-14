
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef unsigned int u32 ;
struct cec_msg {unsigned int len; unsigned int* msg; } ;
struct adv7511 {scalar_t__ type; int cec_adap; int regmap_cec; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct adv7511*,unsigned int) ;
 int FUNC_1 (int ,struct cec_msg*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,unsigned int*) ;
 int FUNC_3 (int ,scalar_t__,int) ;

void FUNC_4(struct adv7511 *VAR_9, unsigned int VAR_10)
{
 unsigned int VAR_11 = VAR_9->type == VAR_7 ?
     VAR_8 : 0;
 const u32 VAR_12 = VAR_2 |
    VAR_1 |
    VAR_3;
 struct cec_msg VAR_13 = {};
 unsigned int VAR_14;
 unsigned int VAR_15;
 u8 VAR_16;

 if (VAR_10 & VAR_12)
  FUNC_0(VAR_9, VAR_10);

 if (!(VAR_10 & VAR_0))
  return;

 if (FUNC_2(VAR_9->regmap_cec,
   VAR_6 + VAR_11, &VAR_14))
  return;

 VAR_13.len = VAR_14 & 0x1f;

 if (VAR_13.len > 16)
  VAR_13.len = 16;

 if (!VAR_13.len)
  return;

 for (VAR_16 = 0; VAR_16 < VAR_13.len; VAR_16++) {
  FUNC_2(VAR_9->regmap_cec,
       VAR_16 + VAR_5 + VAR_11, &VAR_15);
  VAR_13.msg[VAR_16] = VAR_15;
 }


 FUNC_3(VAR_9->regmap_cec,
       VAR_4 + VAR_11, 1);
 FUNC_3(VAR_9->regmap_cec,
       VAR_4 + VAR_11, 0);
 FUNC_1(VAR_9->cec_adap, &VAR_13);
}
