
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cmdq_thread {scalar_t__ base; } ;
struct TYPE_2__ {int dev; } ;
struct cmdq {scalar_t__ base; TYPE_1__ mbox; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int,int,int ,int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct cmdq *VAR_7, struct cmdq_thread *VAR_8)
{
 u32 VAR_9;

 FUNC_3(VAR_4, VAR_8->base + VAR_5);


 if (!(FUNC_1(VAR_8->base + VAR_2) & VAR_1))
  return 0;

 if (FUNC_2(VAR_8->base + VAR_0,
   VAR_9, VAR_9 & VAR_3, 0, 10)) {
  FUNC_0(VAR_7->mbox.dev, "suspend GCE thread 0x%x failed\n",
   (u32)(VAR_8->base - VAR_7->base));
  return -VAR_6;
 }

 return 0;
}
