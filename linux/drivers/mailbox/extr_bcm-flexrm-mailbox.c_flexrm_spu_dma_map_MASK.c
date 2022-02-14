
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
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct brcm_message *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3->spu.src, FUNC_2(VAR_3->spu.src),
   VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3->spu.dst, FUNC_2(VAR_3->spu.dst),
   VAR_0);
 if (VAR_4 < 0) {
  FUNC_1(VAR_2, VAR_3->spu.src, FUNC_2(VAR_3->spu.src),
        VAR_1);
  return VAR_4;
 }

 return 0;
}
