
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {unsigned int usec_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_10)
{
 uint32_t VAR_11;
 unsigned VAR_12;
 VAR_11 = FUNC_1(VAR_7);
 VAR_11 |= VAR_4;
 VAR_11 &= ~VAR_5;
 VAR_11 |= (1 << VAR_6);
 FUNC_2(VAR_9, VAR_11);


 for (VAR_12 = 0; VAR_12 < VAR_10->usec_timeout; VAR_12++) {
  if ((FUNC_1(VAR_8) &
       (VAR_1 |
        VAR_2)) ==
      (VAR_1 |
       VAR_2))
   break;
  FUNC_3(1);
 }
 for (VAR_12 = 0; VAR_12 < VAR_10->usec_timeout; VAR_12++) {
  if (!FUNC_0(FUNC_1(VAR_9), VAR_3, VAR_0))
   break;
  FUNC_3(1);
 }
}
