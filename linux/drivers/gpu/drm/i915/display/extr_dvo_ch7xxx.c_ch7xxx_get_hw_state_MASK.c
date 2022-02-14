
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dvo_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct intel_dvo_device*,int ,int*) ;

__attribute__((used)) static bool FUNC_1(struct intel_dvo_device *VAR_3)
{
 u8 VAR_4;

 FUNC_0(VAR_3, VAR_0, &VAR_4);

 if (VAR_4 & (VAR_1 | VAR_2))
  return 1;
 else
  return 0;
}
