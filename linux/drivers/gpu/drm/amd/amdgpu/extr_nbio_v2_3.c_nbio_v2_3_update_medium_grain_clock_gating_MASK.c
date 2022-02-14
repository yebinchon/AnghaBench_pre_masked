
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_8,
             bool VAR_9)
{
 uint32_t VAR_10, VAR_11;

 VAR_10 = VAR_11 = FUNC_0(VAR_7);
 if (VAR_9 && (VAR_8->cg_flags & VAR_0)) {
  VAR_11 |= (VAR_1 |
    VAR_3 |
    VAR_4 |
    VAR_6 |
    VAR_5 |
    VAR_2);
 } else {
  VAR_11 &= ~(VAR_1 |
     VAR_3 |
     VAR_4 |
     VAR_6 |
     VAR_5 |
     VAR_2);
 }

 if (VAR_10 != VAR_11)
  FUNC_1(VAR_7, VAR_11);
}
