
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef enum ps3_spu_resource_type { ____Placeholder_ps3_spu_resource_type } ps3_spu_resource_type ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ,int ,unsigned int,int ,void**,void**) ;

int FUNC_3(unsigned int VAR_1,
 enum ps3_spu_resource_type *VAR_2, unsigned int *VAR_3)
{
 int VAR_4;
 u64 VAR_5 = 0;
 u64 VAR_6 = 0;

 VAR_4 = FUNC_2(VAR_0,
  FUNC_1("bi", 0),
  FUNC_0("spursv", 0),
  VAR_1,
  0,
  &VAR_5, &VAR_6);
 *VAR_2 = VAR_5;
 *VAR_3 = VAR_6;
 return VAR_4;
}
