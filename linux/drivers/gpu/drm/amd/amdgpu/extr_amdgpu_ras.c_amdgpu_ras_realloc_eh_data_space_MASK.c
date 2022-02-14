
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ras_err_handler_data {unsigned int count; unsigned int space_left; void* bps; } ;
struct amdgpu_device {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (void*,void*,int) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_2,
  struct ras_err_handler_data *VAR_3, int VAR_4)
{
 unsigned int VAR_5 = VAR_3->count + VAR_3->space_left;
 unsigned int VAR_6 = VAR_5 + VAR_4;
 unsigned int VAR_7 = FUNC_0(VAR_6, 1024);
 void *VAR_8 = FUNC_2(VAR_7 * sizeof(*VAR_3->bps), VAR_1);

 if (!VAR_8)
  return -VAR_0;

 if (VAR_3->bps) {
  FUNC_3(VAR_8, VAR_3->bps,
    VAR_3->count * sizeof(*VAR_3->bps));
  FUNC_1(VAR_3->bps);
 }

 VAR_3->bps = VAR_8;
 VAR_3->space_left += VAR_7 - VAR_5;
 return 0;
}
