
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gart_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct gart_device*,unsigned long) ;
 int FUNC_2 (struct gart_device*,unsigned long,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline int FUNC_4(struct gart_device *VAR_2,
         unsigned long VAR_3)
{
 if (FUNC_3(VAR_1 && !FUNC_1(VAR_2, VAR_3))) {
  FUNC_0(VAR_2->dev, "Page entry is invalid\n");
  return -VAR_0;
 }

 FUNC_2(VAR_2, VAR_3, 0);

 return 0;
}
