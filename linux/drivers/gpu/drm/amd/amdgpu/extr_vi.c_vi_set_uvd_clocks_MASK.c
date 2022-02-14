
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct amdgpu_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_9, u32 VAR_10, u32 VAR_11)
{
 int VAR_12;

 if (VAR_9->flags & VAR_0) {
  VAR_12 = FUNC_0(VAR_9, VAR_10, VAR_7, VAR_8);
  if (VAR_12)
   return VAR_12;

  VAR_12 = FUNC_0(VAR_9, VAR_11, VAR_5, VAR_6);
  if (VAR_12)
   return VAR_12;
 } else {
  VAR_12 = FUNC_0(VAR_9, VAR_10, VAR_3, VAR_4);
  if (VAR_12)
   return VAR_12;

  VAR_12 = FUNC_0(VAR_9, VAR_11, VAR_1, VAR_2);
  if (VAR_12)
   return VAR_12;
 }

 return 0;
}
