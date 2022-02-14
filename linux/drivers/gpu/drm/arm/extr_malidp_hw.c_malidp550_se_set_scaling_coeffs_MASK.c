
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct malidp_se_config {int hcoeff; int vcoeff; } ;
struct malidp_hw_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct malidp_hw_device*,int,int ) ;
 int FUNC_3 (struct malidp_hw_device*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct malidp_hw_device *VAR_2,
        struct malidp_se_config *VAR_3,
        struct malidp_se_config *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_1) |
     FUNC_0(VAR_1);
 u32 VAR_6 = FUNC_1(VAR_3->vcoeff) |
   FUNC_0(VAR_3->hcoeff);

 FUNC_2(VAR_2, VAR_5, VAR_0);
 FUNC_3(VAR_2, VAR_6, VAR_0);
 return 0;
}
