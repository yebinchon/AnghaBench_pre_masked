
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_5,
          bool VAR_6)
{
 uint32_t VAR_7 = 0;
 uint32_t VAR_8 = 0;

 VAR_8 = VAR_7 = FUNC_0(FUNC_1(VAR_0, 0, VAR_4));
 if (VAR_6 == 1) {

  VAR_7 |= VAR_3;
  if(VAR_8 != VAR_7)
   FUNC_2(FUNC_1(VAR_0, 0, VAR_4), VAR_7);


  VAR_7 &= ~VAR_1;
  VAR_7 |= (2 << VAR_2);
  if(VAR_8 != VAR_7)
   FUNC_2(FUNC_1(VAR_0, 0, VAR_4), VAR_7);
 } else {

  VAR_7 &= ~VAR_3;
  if(VAR_8 != VAR_7)
   FUNC_2(FUNC_1(VAR_0, 0, VAR_4), VAR_7);
 }
}
