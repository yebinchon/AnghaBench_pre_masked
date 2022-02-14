
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_mp2_dev {scalar_t__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct amd_mp2_dev *VAR_4)
{
 int VAR_5;

 for (VAR_5 = VAR_0; VAR_5 <= VAR_1; VAR_5 += 4)
  FUNC_0(0, VAR_4->mmio + VAR_5);

 for (VAR_5 = VAR_2; VAR_5 <= VAR_3; VAR_5 += 4)
  FUNC_0(0, VAR_4->mmio + VAR_5);
}
