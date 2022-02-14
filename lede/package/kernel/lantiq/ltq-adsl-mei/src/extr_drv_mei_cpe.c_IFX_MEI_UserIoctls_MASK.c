
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DSL_DRV_file_t ;
typedef int DSL_DEV_Device_t ;


 long VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,unsigned int,unsigned long) ;

__attribute__((used)) static long
FUNC_2 (DSL_DRV_file_t * VAR_1,
     unsigned int VAR_2, unsigned long VAR_3)
{
 int VAR_4 = 0;
 DSL_DEV_Device_t *VAR_5;

 VAR_5 = FUNC_0 (0, 0);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_4 = FUNC_1 (VAR_5, 0, VAR_2, VAR_3);
 return VAR_4;
}
