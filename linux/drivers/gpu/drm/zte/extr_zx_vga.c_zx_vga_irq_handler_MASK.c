
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zx_vga {int connected; int complete; scalar_t__ mmio; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_10, void *VAR_11)
{
 struct zx_vga *VAR_12 = VAR_11;
 u32 VAR_13;

 VAR_13 = FUNC_1(VAR_12->mmio + VAR_8);


 FUNC_3(VAR_12->mmio + VAR_8, VAR_4,
         VAR_4);

 if (VAR_13 & VAR_6) {






  VAR_12->connected = 1;
  return VAR_2;
 }

 if (VAR_13 & VAR_7) {
  FUNC_2(VAR_12->mmio + VAR_3,
     VAR_5);
  VAR_12->connected = 0;
  return VAR_2;
 }

 if (VAR_13 & VAR_9) {
  FUNC_0(&VAR_12->complete);
  return VAR_0;
 }

 return VAR_1;
}
