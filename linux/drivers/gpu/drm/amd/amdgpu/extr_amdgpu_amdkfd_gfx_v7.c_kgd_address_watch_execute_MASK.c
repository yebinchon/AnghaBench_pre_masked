
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int valid; } ;
union TCP_WATCH_CNTL_BITS {int u32All; TYPE_1__ bitfields; } ;
typedef int uint32_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 struct amdgpu_device* FUNC_1 (struct kgd_dev*) ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_2(struct kgd_dev *VAR_5,
     unsigned int VAR_6,
     uint32_t VAR_7,
     uint32_t VAR_8,
     uint32_t VAR_9)
{
 struct amdgpu_device *VAR_10 = FUNC_1(VAR_5);
 union TCP_WATCH_CNTL_BITS VAR_11;

 VAR_11.u32All = VAR_7;


 VAR_11.bitfields.valid = 0;
 FUNC_0(VAR_4[VAR_6 * VAR_3 +
  VAR_2], VAR_11.u32All);

 FUNC_0(VAR_4[VAR_6 * VAR_3 +
  VAR_0], VAR_8);

 FUNC_0(VAR_4[VAR_6 * VAR_3 +
  VAR_1], VAR_9);


 VAR_11.bitfields.valid = 1;

 FUNC_0(VAR_4[VAR_6 * VAR_3 +
  VAR_2], VAR_11.u32All);

 return 0;
}
