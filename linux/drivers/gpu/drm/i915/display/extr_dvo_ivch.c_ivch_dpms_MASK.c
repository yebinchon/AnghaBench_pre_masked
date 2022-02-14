
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct intel_dvo_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct intel_dvo_device*,int ,int*) ;
 int FUNC_1 (struct intel_dvo_device*) ;
 int FUNC_2 (struct intel_dvo_device*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct intel_dvo_device *VAR_6, bool VAR_7)
{
 int VAR_8;
 u16 VAR_9, VAR_10, VAR_11;

 FUNC_1(VAR_6);


 if (!FUNC_0(VAR_6, VAR_0, &VAR_9))
  return;

 if (VAR_7)
  VAR_11 = 1;
 else
  VAR_11 = 0;

 FUNC_2(VAR_6, VAR_5, VAR_11);

 if (VAR_7)
  VAR_9 |= VAR_2 | VAR_1;
 else
  VAR_9 &= ~(VAR_2 | VAR_1);

 FUNC_2(VAR_6, VAR_0, VAR_9);


 for (VAR_8 = 0; VAR_8 < 100; VAR_8++) {
  if (!FUNC_0(VAR_6, VAR_3, &VAR_10))
   break;

  if (((VAR_10 & VAR_4) != 0) == VAR_7)
   break;
  FUNC_3(1000);
 }

 FUNC_3(16 * 1000);
}
