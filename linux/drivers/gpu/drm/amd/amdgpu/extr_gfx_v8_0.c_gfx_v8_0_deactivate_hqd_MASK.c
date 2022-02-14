
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int usec_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_8, u32 VAR_9)
{
 int VAR_10, VAR_11 = 0;

 if (FUNC_0(VAR_4) & VAR_0) {
  FUNC_2(VAR_1, VAR_2, VAR_9);
  for (VAR_10 = 0; VAR_10 < VAR_8->usec_timeout; VAR_10++) {
   if (!(FUNC_0(VAR_4) & VAR_0))
    break;
   FUNC_3(1);
  }
  if (VAR_10 == VAR_8->usec_timeout)
   VAR_11 = -VAR_3;
 }
 FUNC_1(VAR_5, 0);
 FUNC_1(VAR_6, 0);
 FUNC_1(VAR_7, 0);

 return VAR_11;
}
