
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cma_device {int* default_gid_type; int device; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ,unsigned int) ;

int FUNC_3(struct cma_device *VAR_1,
        unsigned int VAR_2,
        enum ib_gid_type VAR_3)
{
 unsigned long VAR_4;

 if (!FUNC_0(VAR_1->device, VAR_2))
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_1->device, VAR_2);

 if (!(VAR_4 & 1 << VAR_3))
  return -VAR_0;

 VAR_1->default_gid_type[VAR_2 - FUNC_1(VAR_1->device)] =
  VAR_3;

 return 0;
}
