
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_2__ {int regs; } ;
struct sun4i_backend {TYPE_1__ engine; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct sun4i_backend *VAR_2,
     int VAR_3, uint32_t VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_4(VAR_4, &VAR_5);
 if (VAR_6) {
  FUNC_0("Invalid format\n");
  return VAR_6;
 }

 FUNC_3(VAR_2->engine.regs,
      FUNC_1(VAR_3),
      VAR_0,
      VAR_0);

 FUNC_3(VAR_2->engine.regs,
      FUNC_2(VAR_3),
      VAR_1, VAR_5);

 return 0;
}
