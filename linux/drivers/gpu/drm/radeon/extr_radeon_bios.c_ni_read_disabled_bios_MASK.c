
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*) ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static bool FUNC_4(struct radeon_device *VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 bool VAR_16;

 VAR_11 = FUNC_1(VAR_7);
 VAR_12 = FUNC_1(VAR_0);
 VAR_13 = FUNC_1(VAR_1);
 VAR_14 = FUNC_1(VAR_4);
 VAR_15 = FUNC_1(VAR_8);


 FUNC_2(VAR_7, (VAR_11 & ~VAR_6));
 if (!FUNC_0(VAR_10)) {

  FUNC_2(VAR_0,
         (VAR_12 & ~(VAR_2 |
       VAR_3)));
  FUNC_2(VAR_1,
         (VAR_13 & ~(VAR_2 |
       VAR_3)));
  FUNC_2(VAR_4,
         (VAR_14 & ~VAR_5));
 }
 FUNC_2(VAR_8, VAR_15 | VAR_9);

 VAR_16 = FUNC_3(VAR_10);


 FUNC_2(VAR_7, VAR_11);
 if (!FUNC_0(VAR_10)) {
  FUNC_2(VAR_0, VAR_12);
  FUNC_2(VAR_1, VAR_13);
  FUNC_2(VAR_4, VAR_14);
 }
 FUNC_2(VAR_8, VAR_15);
 return VAR_16;
}
