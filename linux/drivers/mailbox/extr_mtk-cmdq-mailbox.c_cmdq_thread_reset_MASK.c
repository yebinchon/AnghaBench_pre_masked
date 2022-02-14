
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cmdq_thread {scalar_t__ base; } ;
struct TYPE_2__ {int dev; } ;
struct cmdq {scalar_t__ base; TYPE_1__ mbox; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int,int ,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct cmdq *VAR_3, struct cmdq_thread *VAR_4)
{
 u32 VAR_5;

 FUNC_2(VAR_0, VAR_4->base + VAR_1);
 if (FUNC_1(VAR_4->base + VAR_1,
   VAR_5, !(VAR_5 & VAR_0),
   0, 10)) {
  FUNC_0(VAR_3->mbox.dev, "reset GCE thread 0x%x failed\n",
   (u32)(VAR_4->base - VAR_3->base));
  return -VAR_2;
 }

 return 0;
}
