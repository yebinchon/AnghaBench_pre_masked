
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct dispc_device*,int ,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct dispc_device*,int ) ;

void FUNC_4(struct dispc_device *VAR_2, bool VAR_3)
{
 if (!FUNC_3(VAR_2, VAR_1)) {
  FUNC_2(VAR_3);
  return;
 }

 FUNC_0("FIFO merge %s\n", VAR_3 ? "enabled" : "disabled");
 FUNC_1(VAR_2, VAR_0, VAR_3 ? 1 : 0, 14, 14);
}
