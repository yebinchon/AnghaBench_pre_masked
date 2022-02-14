
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dvo_device {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_dvo_device*,int ,unsigned char*) ;
 int FUNC_1 (struct intel_dvo_device*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct intel_dvo_device *VAR_2, bool VAR_3)
{
 int VAR_4;
 unsigned char VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_1, &VAR_5);
 if (VAR_4 == 0)
  return;

 if (VAR_3)
  VAR_5 |= VAR_0;
 else
  VAR_5 &= ~VAR_0;

 FUNC_1(VAR_2, VAR_1, VAR_5);
 return;
}
