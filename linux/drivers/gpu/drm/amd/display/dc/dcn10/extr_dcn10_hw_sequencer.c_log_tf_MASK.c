
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {TYPE_3__* blue; TYPE_2__* green; TYPE_1__* red; } ;
struct dc_transfer_func {TYPE_4__ tf_pts; } ;
struct dc_context {int logger; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int value; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct dc_context *VAR_1,
    struct dc_transfer_func *VAR_2, uint32_t VAR_3)
{



 int VAR_4 = 0;

 FUNC_0(VAR_1->logger);
 FUNC_3("Gamma Correction TF");
 FUNC_1("Logging all tf points...");
 FUNC_2("Logging all channels...");

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_3("R\t%d\t%llu\n", VAR_4, VAR_2->tf_pts.red[VAR_4].value);
  FUNC_2("G\t%d\t%llu\n", VAR_4, VAR_2->tf_pts.green[VAR_4].value);
  FUNC_2("B\t%d\t%llu\n", VAR_4, VAR_2->tf_pts.blue[VAR_4].value);
 }

 for (VAR_4 = VAR_3; VAR_4 < VAR_0; VAR_4++) {
  FUNC_1("R\t%d\t%llu\n", VAR_4, VAR_2->tf_pts.red[VAR_4].value);
  FUNC_2("G\t%d\t%llu\n", VAR_4, VAR_2->tf_pts.green[VAR_4].value);
  FUNC_2("B\t%d\t%llu\n", VAR_4, VAR_2->tf_pts.blue[VAR_4].value);
 }
}
