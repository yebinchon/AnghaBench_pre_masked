
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gart_device {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct gart_device*,unsigned long) ;
 int FUNC_2 (struct gart_device*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline int FUNC_4(struct gart_device *VAR_3, unsigned long VAR_4,
       unsigned long VAR_5)
{
 if (FUNC_3(VAR_2 && FUNC_1(VAR_3, VAR_4))) {
  FUNC_0(VAR_3->dev, "Page entry is in-use\n");
  return -VAR_0;
 }

 FUNC_2(VAR_3, VAR_4, VAR_1 | VAR_5);

 return 0;
}
