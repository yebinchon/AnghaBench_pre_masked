
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct amdgpu_device {int cg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_9,
            bool VAR_10)
{
 uint32_t VAR_11, VAR_12, VAR_13;

 if (VAR_9->cg_flags & VAR_0) {
  VAR_12 = VAR_11 = FUNC_1(VAR_5, 0, VAR_8);
  VAR_13 = VAR_10 ? 0 : 1;
  VAR_11 = FUNC_0(VAR_11, VAR_3,
         VAR_1, VAR_13);
  VAR_11 = FUNC_0(VAR_11, VAR_3,
         VAR_6, VAR_13);
  VAR_11 = FUNC_0(VAR_11, VAR_3,
         VAR_4, VAR_13);
  VAR_11 = FUNC_0(VAR_11, VAR_3,
         VAR_2, VAR_13);
  VAR_11 = FUNC_0(VAR_11, VAR_3,
         VAR_7, VAR_13);
  if (VAR_12 != VAR_11)
   FUNC_2(VAR_5, 0, VAR_8, VAR_11);
 }

 return;
}
