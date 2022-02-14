
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int real_vram_size; } ;
struct radeon_device {int vram_usage; TYPE_1__ mc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static u64 FUNC_2(struct radeon_device *VAR_0)
{
 u64 VAR_1 = VAR_0->mc.real_vram_size;
 u64 VAR_2 = FUNC_0(&VAR_0->vram_usage);
 u64 VAR_3 = VAR_1 >> 1;
 u64 VAR_4 = VAR_2 >= VAR_3 ? 0 : VAR_3 - VAR_2;
 u64 VAR_5 = VAR_4 >> 1;
 return FUNC_1(VAR_5, 1024*1024ull);
}
