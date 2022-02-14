
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int cg_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_3,
      bool VAR_4)
{
 int VAR_5;
 u32 VAR_6, VAR_7;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  VAR_6 = VAR_7 = FUNC_1(VAR_2[VAR_5]);
  if (VAR_4 && (VAR_3->cg_flags & VAR_0))
   VAR_7 |= VAR_1[VAR_5];
  else
   VAR_7 &= ~VAR_1[VAR_5];
  if (VAR_7 != VAR_6)
   FUNC_2(VAR_2[VAR_5], VAR_7);
 }
}
