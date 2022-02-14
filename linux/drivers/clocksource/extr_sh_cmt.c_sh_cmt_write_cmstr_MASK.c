
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sh_cmt_channel {TYPE_2__* cmt; scalar_t__ iostart; } ;
struct TYPE_4__ {scalar_t__ mapbase; TYPE_1__* info; } ;
struct TYPE_3__ {int (* write_control ) (scalar_t__,int ,int ) ;} ;


 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct sh_cmt_channel *VAR_0, u32 VAR_1)
{
 if (VAR_0->iostart)
  VAR_0->cmt->info->write_control(VAR_0->iostart, 0, VAR_1);
 else
  VAR_0->cmt->info->write_control(VAR_0->cmt->mapbase, 0, VAR_1);
}
