
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iadc_chip {int complete; int poll_eoc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct iadc_chip*,int) ;
 int FUNC_1 (struct iadc_chip*,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct iadc_chip *VAR_16, int VAR_17)
{
 u8 VAR_18, VAR_19;
 int VAR_20;


 VAR_19 = (VAR_13 << VAR_14) | VAR_15;
 VAR_20 = FUNC_1(VAR_16, VAR_12, VAR_19);
 if (VAR_20 < 0)
  return VAR_20;


 VAR_20 = FUNC_1(VAR_16, VAR_0, VAR_17);
 if (VAR_20 < 0)
  return VAR_20;


 VAR_18 = VAR_4 << VAR_6;
 VAR_20 = FUNC_1(VAR_16, VAR_7, VAR_18);
 if (VAR_20 < 0)
  return VAR_20;


 VAR_20 = FUNC_1(VAR_16, VAR_11, VAR_5);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_1(VAR_16, VAR_8, VAR_3);
 if (VAR_20 < 0)
  return VAR_20;

 if (VAR_3)
  VAR_20 = FUNC_1(VAR_16, VAR_9, VAR_10);
 else
  VAR_20 = FUNC_1(VAR_16, VAR_9, 0);

 if (VAR_20 < 0)
  return VAR_20;

 if (!VAR_16->poll_eoc)
  FUNC_2(&VAR_16->complete);

 VAR_20 = FUNC_0(VAR_16, 1);
 if (VAR_20 < 0)
  return VAR_20;


 return FUNC_1(VAR_16, VAR_1, VAR_2);
}
