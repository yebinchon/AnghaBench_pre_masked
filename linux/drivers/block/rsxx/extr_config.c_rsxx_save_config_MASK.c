
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsxx_cardinfo {int config; } ;
struct TYPE_2__ {scalar_t__ version; int crc; } ;
struct rsxx_card_cfg {TYPE_1__ hdr; } ;
typedef int cfg ;


 int FUNC_0 (struct rsxx_cardinfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct rsxx_card_cfg*) ;
 int FUNC_2 (struct rsxx_card_cfg*) ;
 int FUNC_3 (struct rsxx_card_cfg*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (struct rsxx_card_cfg*,int *,int) ;
 int FUNC_7 (struct rsxx_cardinfo*,int ,int,struct rsxx_card_cfg*,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct rsxx_cardinfo *VAR_3)
{
 struct rsxx_card_cfg VAR_4;
 int VAR_5;

 FUNC_6(&VAR_4, &VAR_3->config, sizeof(VAR_4));

 if (FUNC_8(VAR_4.hdr.version != VAR_2)) {
  FUNC_5(FUNC_0(VAR_3),
   "Cannot save config with invalid version %d\n",
   VAR_4.hdr.version);
  return -VAR_1;
 }


 FUNC_1(&VAR_4);

 VAR_4.hdr.crc = FUNC_2(&VAR_4);





 FUNC_3(&VAR_4);
 FUNC_4(&VAR_4.hdr);

 VAR_5 = FUNC_7(VAR_3, VAR_0, sizeof(VAR_4), &VAR_4, 1);
 if (VAR_5)
  return VAR_5;

 return 0;
}
