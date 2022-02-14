
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_18,
        bool VAR_19)
{
 uint32_t VAR_20, VAR_21;
 uint32_t VAR_22;

 if (!(VAR_18->cg_flags & (VAR_1 |
    VAR_0 |
    VAR_2)))
  return;

 VAR_20 = VAR_21 = FUNC_1(VAR_3, 0, VAR_16);
 VAR_22 = FUNC_1(VAR_3, 0, VAR_17);



 VAR_20 = FUNC_0(VAR_20, VAR_4,
         VAR_6, 1);
 VAR_20 = FUNC_0(VAR_20, VAR_4,
         VAR_11, 1);
 FUNC_2(VAR_3, 0, VAR_16, VAR_20);



 VAR_22 = FUNC_0(VAR_22, VAR_5,
      VAR_7, 0);
 VAR_22 = FUNC_0(VAR_22, VAR_5,
      VAR_9, 0);
 VAR_22 = FUNC_0(VAR_22, VAR_5,
      VAR_8, 0);
 VAR_22 = FUNC_0(VAR_22, VAR_5,
      VAR_10, 0);
 VAR_22 = FUNC_0(VAR_22, VAR_5,
      VAR_12, 0);
 VAR_22 = FUNC_0(VAR_22, VAR_5,
      VAR_14, 0);
 VAR_22 = FUNC_0(VAR_22, VAR_5,
      VAR_13, 0);
 VAR_22 = FUNC_0(VAR_22, VAR_5,
      VAR_15, 0);
 FUNC_2(VAR_3, 0, VAR_17, VAR_22);


 if (VAR_18->cg_flags & VAR_1) {
  VAR_22 = FUNC_0(VAR_22,
       VAR_5,
       VAR_9, VAR_19);
  VAR_22 = FUNC_0(VAR_22,
       VAR_5,
       VAR_14, VAR_19);
 } else if (VAR_18->cg_flags & VAR_0) {
  VAR_22 = FUNC_0(VAR_22,
       VAR_5,
       VAR_8, VAR_19);
  VAR_22 = FUNC_0(VAR_22,
       VAR_5,
       VAR_13, VAR_19);
 } else if (VAR_18->cg_flags & VAR_2) {
  VAR_22 = FUNC_0(VAR_22,
       VAR_5,
       VAR_10, VAR_19);

  VAR_22 = FUNC_0(VAR_22,
       VAR_5,
       VAR_13, VAR_19);
 }

 FUNC_2(VAR_3, 0, VAR_17, VAR_22);


 FUNC_2(VAR_3, 0, VAR_16, VAR_21);
}
