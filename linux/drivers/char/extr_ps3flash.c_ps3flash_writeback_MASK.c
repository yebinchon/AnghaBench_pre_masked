
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3flash_private {int dirty; scalar_t__ tag; } ;
struct ps3_storage_device {int sbd; } ;


 struct ps3flash_private* FUNC_0 (int *) ;
 int FUNC_1 (struct ps3_storage_device*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct ps3_storage_device *VAR_0)
{
 struct ps3flash_private *VAR_1 = FUNC_0(&VAR_0->sbd);
 int VAR_2;

 if (!VAR_1->dirty || VAR_1->tag < 0)
  return 0;

 VAR_2 = FUNC_1(VAR_0, VAR_1->tag, 1);
 if (VAR_2)
  return VAR_2;

 VAR_1->dirty = 0;
 return 0;
}
