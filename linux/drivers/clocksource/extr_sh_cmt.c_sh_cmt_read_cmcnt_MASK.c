
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sh_cmt_channel {int ioctrl; TYPE_2__* cmt; } ;
struct TYPE_4__ {TYPE_1__* info; } ;
struct TYPE_3__ {int (* read_count ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct sh_cmt_channel *VAR_1)
{
 return VAR_1->cmt->info->read_count(VAR_1->ioctrl, VAR_0);
}
