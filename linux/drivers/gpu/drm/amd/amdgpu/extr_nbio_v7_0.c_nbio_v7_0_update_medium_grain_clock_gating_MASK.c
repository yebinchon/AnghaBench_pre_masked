
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int cg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct amdgpu_device*,int ) ;
 int FUNC_3 (struct amdgpu_device*,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_7,
             bool VAR_8)
{
 uint32_t VAR_9, VAR_10;


 VAR_9 = VAR_10 = FUNC_0(VAR_6);

 if (VAR_8 && (VAR_7->cg_flags & VAR_0))
  VAR_10 |= VAR_1;
 else
  VAR_10 &= ~VAR_1;

 if (VAR_9 != VAR_10)
  FUNC_1(VAR_6, VAR_10);


 VAR_9 = VAR_10 = FUNC_2(VAR_7, VAR_5);

 if (VAR_8 && (VAR_7->cg_flags & VAR_0))
  VAR_10 |= VAR_3;
 else
  VAR_10 &= ~VAR_3;

 if (VAR_9 != VAR_10)
  FUNC_3(VAR_7, VAR_5, VAR_10);


 VAR_9 = VAR_10 = FUNC_2(VAR_7, VAR_4);

 if (VAR_8 && (VAR_7->cg_flags & VAR_0))
  VAR_10 |= VAR_2;
 else
  VAR_10 &= ~VAR_2;

 if (VAR_9 != VAR_10)
  FUNC_3(VAR_7, VAR_4, VAR_10);
}
