
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int src; int dst; } ;
struct brcm_message {TYPE_1__ spu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_2, struct brcm_message *VAR_3)
{
 FUNC_0(VAR_2, VAR_3->spu.dst, FUNC_1(VAR_3->spu.dst),
       VAR_0);
 FUNC_0(VAR_2, VAR_3->spu.src, FUNC_1(VAR_3->spu.src),
       VAR_1);
}
