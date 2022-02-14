
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dss_device {TYPE_1__* feat; int ctx_valid; } ;
struct TYPE_2__ {int* outputs; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dss_device*,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct dss_device *VAR_5)
{
 FUNC_0("dss_restore_context\n");

 if (!VAR_5->ctx_valid)
  return;

 FUNC_1(VAR_5, VAR_0);

 if (VAR_5->feat->outputs[VAR_1] & VAR_2) {
  FUNC_1(VAR_5, VAR_4);
  FUNC_1(VAR_5, VAR_3);
 }

 FUNC_0("context restored\n");
}
