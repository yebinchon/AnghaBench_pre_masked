
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int cg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_6,
             bool VAR_7)
{
 uint32_t VAR_8, VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_8 = VAR_9 = FUNC_0(VAR_2, 0,
     VAR_5,
     VAR_10 * VAR_3);

  if (VAR_7 && (VAR_6->cg_flags & VAR_0))
   VAR_9 |= VAR_1;
  else
   VAR_9 &= ~VAR_1;

  if (VAR_8 != VAR_9)
   FUNC_1(VAR_2, 0, VAR_5,
    VAR_10 * VAR_3, VAR_9);
 }
}
