
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_7;

 if (!VAR_4)
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_6, &VAR_2);
 if (VAR_7 < 0) {
  FUNC_1("IRQ %d setup failed (%d)\n", VAR_6, VAR_7);
  return VAR_7;
 }

 FUNC_0(VAR_0,
     "clockevents/mips/gic/timer:starting",
     VAR_5, VAR_3);
 return 0;
}
