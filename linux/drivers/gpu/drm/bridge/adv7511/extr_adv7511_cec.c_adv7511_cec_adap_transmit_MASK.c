
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef int u32 ;
struct cec_msg {unsigned int len; int* msg; } ;
struct cec_adapter {int dummy; } ;
struct adv7511 {scalar_t__ type; int regmap_cec; int regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 struct adv7511* FUNC_1 (struct cec_adapter*) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (int ,scalar_t__,int,int) ;
 int FUNC_4 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct cec_adapter *VAR_6, u8 VAR_7,
         u32 VAR_8, struct cec_msg *VAR_9)
{
 struct adv7511 *VAR_10 = FUNC_1(VAR_6);
 unsigned int VAR_11 = VAR_10->type == VAR_4 ?
     VAR_5 : 0;
 u8 VAR_12 = VAR_9->len;
 unsigned int VAR_13;






 FUNC_3(VAR_10->regmap_cec,
      VAR_3 + VAR_11,
      0x70, FUNC_2(1, VAR_7 - 1) << 4);


 FUNC_3(VAR_10->regmap, FUNC_0(1), 0x38, 0x38);


 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
  FUNC_4(VAR_10->regmap_cec,
        VAR_13 + VAR_1 + VAR_11,
        VAR_9->msg[VAR_13]);


 FUNC_4(VAR_10->regmap_cec,
       VAR_2 + VAR_11, VAR_12);

 FUNC_4(VAR_10->regmap_cec,
       VAR_0 + VAR_11, 0x01);
 return 0;
}
