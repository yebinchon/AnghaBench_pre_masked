
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int progress_payload; int (* progress_cb ) (char const*,int ,int ,int ) ;} ;
struct TYPE_5__ {TYPE_1__ opts; int total_steps; int completed_steps; } ;
typedef TYPE_2__ checkout_data ;


 int FUNC_0 (char const*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(
 checkout_data *VAR_0,
 const char *VAR_1)
{
 if (VAR_0->opts.progress_cb)
  VAR_0->opts.progress_cb(
   VAR_1, VAR_0->completed_steps, VAR_0->total_steps,
   VAR_0->opts.progress_payload);
}
