
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (struct device_node*,int ,int *,int *) ;
 int FUNC_2 (struct device_node*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct device_node*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ,int) ;

void FUNC_11(struct device_node *VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;


 VAR_6 = FUNC_1(VAR_8,
      VAR_1, &VAR_4, ((void*)0));
 if (VAR_6 == ((void*)0)) {
  FUNC_5("FPGA PIC: Unable to allocate host\n");
  return;
 }

 for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
  VAR_2[VAR_10] = FUNC_2(VAR_8, VAR_10);
  if (!VAR_2[VAR_10]) {
   FUNC_7("FPGA PIC: can't get irq%d\n", VAR_10);
   continue;
  }
  FUNC_3(VAR_2[VAR_10],
     VAR_3);
 }

 VAR_5 = FUNC_4(VAR_8, 0);

 FUNC_8(&VAR_7, VAR_9);
 FUNC_10(FUNC_0(0),
   VAR_0 << 16);
 FUNC_10(FUNC_0(1),
   VAR_0 << 16);
 FUNC_10(FUNC_0(2),
   VAR_0 << 16);
 FUNC_9(&VAR_7, VAR_9);

 FUNC_6("FPGA PIC: Setting up Socrates FPGA PIC\n");
}
