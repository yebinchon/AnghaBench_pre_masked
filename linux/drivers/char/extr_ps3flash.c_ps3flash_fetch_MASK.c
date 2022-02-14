
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ps3flash_private {int tag; } ;
struct ps3_storage_device {int sbd; } ;


 struct ps3flash_private* FUNC_0 (int *) ;
 int FUNC_1 (struct ps3_storage_device*,int,int ) ;
 int FUNC_2 (struct ps3_storage_device*) ;

__attribute__((used)) static int FUNC_3(struct ps3_storage_device *VAR_0, u64 VAR_1)
{
 struct ps3flash_private *VAR_2 = FUNC_0(&VAR_0->sbd);
 int VAR_3;

 if (VAR_1 == VAR_2->tag)
  return 0;

 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_2->tag = -1;

 VAR_3 = FUNC_1(VAR_0, VAR_1, 0);
 if (VAR_3)
  return VAR_3;

 VAR_2->tag = VAR_1;
 return 0;
}
