
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dc {TYPE_2__* fbc_compressor; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* disable_fbc ) (TYPE_2__*) ;} ;


 int FUNC_0 (struct dc*) ;
 int FUNC_1 (struct dc*) ;
 int FUNC_2 (struct dc*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct dc *VAR_0)
{
 FUNC_2(VAR_0);

 FUNC_1(VAR_0);

 FUNC_0(VAR_0);

 if (VAR_0->fbc_compressor)
  VAR_0->fbc_compressor->funcs->disable_fbc(VAR_0->fbc_compressor);
}
