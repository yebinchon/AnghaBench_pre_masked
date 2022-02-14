
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* sc ) (TYPE_2__*,int ,scalar_t__,int ,int ) ;} ;
struct TYPE_4__ {int callback_data; TYPE_1__ callback; } ;
struct iso_context {scalar_t__ header_length; TYPE_2__ base; int header; int last_timestamp; } ;


 int FUNC_0 (TYPE_2__*,int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct iso_context *VAR_0)
{
 VAR_0->base.callback.sc(&VAR_0->base, VAR_0->last_timestamp,
         VAR_0->header_length, VAR_0->header,
         VAR_0->base.callback_data);
 VAR_0->header_length = 0;
}
