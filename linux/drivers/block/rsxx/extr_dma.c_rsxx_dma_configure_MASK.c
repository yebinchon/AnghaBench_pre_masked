
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int latency; int count; int mode; } ;
struct TYPE_5__ {int stripe_size; TYPE_1__ intr_coal; } ;
struct TYPE_6__ {TYPE_2__ data; } ;
struct rsxx_cardinfo {TYPE_3__ config; scalar_t__ regmap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct rsxx_cardinfo*,int ) ;

int FUNC_3(struct rsxx_cardinfo *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_1->config.data.intr_coal.mode,
          VAR_1->config.data.intr_coal.count,
          VAR_1->config.data.intr_coal.latency);
 FUNC_1(VAR_2, VAR_1->regmap + VAR_0);

 return FUNC_2(VAR_1, VAR_1->config.data.stripe_size);
}
