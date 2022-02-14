
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int atc; int mask; scalar_t__ valid; } ;
union TCP_WATCH_CNTL_BITS {scalar_t__ u32All; TYPE_1__ bitfields; } ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct amdgpu_device* FUNC_1 (struct kgd_dev*) ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_2(struct kgd_dev *VAR_5)
{
 struct amdgpu_device *VAR_6 = FUNC_1(VAR_5);
 union TCP_WATCH_CNTL_BITS VAR_7;
 unsigned int VAR_8;

 VAR_7.u32All = 0;

 VAR_7.bitfields.valid = 0;
 VAR_7.bitfields.mask = VAR_1;
 VAR_7.bitfields.atc = 1;


 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  FUNC_0(VAR_4[VAR_8 * VAR_2 +
   VAR_0], VAR_7.u32All);

 return 0;
}
