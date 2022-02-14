
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct malidp_se_config {scalar_t__ hcoeff; scalar_t__ vcoeff; } ;
struct malidp_hw_device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (struct malidp_hw_device*,int,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct malidp_hw_device *VAR_4,
        struct malidp_se_config *VAR_5,
        struct malidp_se_config *VAR_6)
{

 u8 VAR_7 = (u8)VAR_5->hcoeff - 1;
 u8 VAR_8 = (u8)VAR_5->vcoeff - 1;

 if (FUNC_1(VAR_7 >= FUNC_0(VAR_3) ||
      VAR_8 >= FUNC_0(VAR_3)))
  return -VAR_0;

 if ((VAR_7 == VAR_8) && (VAR_5->hcoeff != VAR_6->hcoeff ||
    VAR_5->vcoeff != VAR_6->vcoeff)) {
  FUNC_2(VAR_4,
            (VAR_2 |
      VAR_1),
            0, VAR_8);
 } else {
  if (VAR_5->vcoeff != VAR_6->vcoeff)
   FUNC_2(VAR_4,
             VAR_2,
             0, VAR_8);
  if (VAR_5->hcoeff != VAR_6->hcoeff)
   FUNC_2(VAR_4,
             VAR_1,
             0, VAR_7);
 }

 return 0;
}
