
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {int cpu_port; } ;
struct rtl_priv {scalar_t__ do_cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct switch_dev*) ;
 int FUNC_3 (struct switch_dev*,int ,int) ;
 struct rtl_priv* FUNC_4 (struct switch_dev*) ;

__attribute__((used)) static void
FUNC_5(struct switch_dev *VAR_17)
{
 struct rtl_priv *VAR_18 = FUNC_4(VAR_17);
 int VAR_19 = 1 << VAR_17->cpu_port;
 int VAR_20;

 FUNC_3(VAR_17, VAR_12, 0);
 FUNC_3(VAR_17, VAR_13, 0);
 FUNC_3(VAR_17, VAR_10, 0);
 FUNC_3(VAR_17, VAR_11, 0);


 if (VAR_18->do_cpu) {
  FUNC_3(VAR_17, VAR_5, VAR_17->cpu_port);
  FUNC_3(VAR_17, VAR_6, 1);
 } else {
  FUNC_3(VAR_17, VAR_5, 7);
  FUNC_3(VAR_17, VAR_6, 0);
 }
 FUNC_3(VAR_17, VAR_9, 0);
 FUNC_3(VAR_17, VAR_8, 0);
 FUNC_3(VAR_17, VAR_7, 0);


 for (VAR_20 = 0; VAR_20 < VAR_4; VAR_20++) {
  FUNC_3(VAR_17, FUNC_1(VAR_20, VAR_15), VAR_20);
  FUNC_3(VAR_17, FUNC_1(VAR_20, VAR_1), 0);
 }


 for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++) {
  unsigned long VAR_21;

  if ((1 << VAR_20) == VAR_19)
   VAR_21 = ((1 << VAR_3) - 1) & ~VAR_19;
  else
   VAR_21 = VAR_19 | (1 << VAR_20);

  FUNC_3(VAR_17, FUNC_1(VAR_20, VAR_1), VAR_21);
  FUNC_3(VAR_17, FUNC_0(VAR_20, VAR_2), VAR_20);
  FUNC_3(VAR_17, FUNC_0(VAR_20, VAR_0), 1);
  FUNC_3(VAR_17, FUNC_0(VAR_20, VAR_16), 1);
  FUNC_3(VAR_17, FUNC_0(VAR_20, VAR_14), 3);
 }
 FUNC_2(VAR_17);
}
