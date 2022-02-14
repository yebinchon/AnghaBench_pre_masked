
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dss_device {int ctx_valid; TYPE_1__* feat; } ;
struct TYPE_2__ {int* outputs; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct dss_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct dss_device *VAR_5)
{
 FUNC_0("dss_save_context\n");

 FUNC_1(VAR_5, VAR_0);

 if (VAR_5->feat->outputs[VAR_1] & VAR_2) {
  FUNC_1(VAR_5, VAR_4);
  FUNC_1(VAR_5, VAR_3);
 }

 VAR_5->ctx_valid = 1;

 FUNC_0("context saved\n");
}
