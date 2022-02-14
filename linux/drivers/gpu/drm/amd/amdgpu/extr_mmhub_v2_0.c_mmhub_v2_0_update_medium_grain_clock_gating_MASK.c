
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
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_11,
       bool VAR_12)
{
 uint32_t VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_13 = VAR_14 = FUNC_0(VAR_7, 0, VAR_10);

 VAR_15 = VAR_16 = FUNC_0(VAR_7, 0, VAR_9);

 if (VAR_12 && (VAR_11->cg_flags & VAR_0)) {
  VAR_14 |= VAR_8;

  VAR_16 &= ~(VAR_5 |
             VAR_6 |
             VAR_1 |
             VAR_2 |
             VAR_4 |
             VAR_3);

 } else {
  VAR_14 &= ~VAR_8;

  VAR_16 |= (VAR_5 |
     VAR_6 |
     VAR_1 |
     VAR_2 |
     VAR_4 |
     VAR_3);
 }

 if (VAR_13 != VAR_14)
  FUNC_1(VAR_7, 0, VAR_10, VAR_14);

 if (VAR_15 != VAR_16)
  FUNC_1(VAR_7, 0, VAR_9, VAR_16);
}
