
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_8)
{
 uint32_t VAR_9, VAR_10;


 VAR_9 = VAR_10 = FUNC_0(FUNC_1(VAR_0, 0, VAR_6));
 VAR_10 |= VAR_4;
 if (VAR_10 != VAR_9)
  FUNC_2(FUNC_1(VAR_0, 0, VAR_6), VAR_10);


 VAR_9 = VAR_10 = FUNC_0(FUNC_1(VAR_0, 0, VAR_5));
 VAR_10 |= VAR_1;
 if (VAR_10 != VAR_9)
  FUNC_2(FUNC_1(VAR_0, 0, VAR_5), VAR_10);


 VAR_9 = VAR_10 = FUNC_0(FUNC_1(VAR_0, 0, VAR_6));
 VAR_10 &= ~VAR_2;
 VAR_10 |= (VAR_7 & VAR_2);

 VAR_10 &= ~VAR_3;
 VAR_10 |= (VAR_7 & VAR_3);
 if(VAR_10 != VAR_9)
  FUNC_2(FUNC_1(VAR_0, 0, VAR_6), VAR_10);
}
