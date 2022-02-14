
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_2__ {int mem_base; int mem_size; int gws; int oa; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (struct amdgpu_ring*,int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_ring *VAR_3,
       uint32_t VAR_4,
       uint32_t VAR_5, uint32_t VAR_6,
       uint32_t VAR_7, uint32_t VAR_8,
       uint32_t VAR_9, uint32_t VAR_10)
{

 FUNC_3(VAR_3, FUNC_0(VAR_1, 3));
 FUNC_3(VAR_3, (FUNC_2(0) |
    FUNC_1(0)));
 FUNC_3(VAR_3, VAR_2[VAR_4].mem_base);
 FUNC_3(VAR_3, 0);
 FUNC_3(VAR_3, VAR_5);


 FUNC_3(VAR_3, FUNC_0(VAR_1, 3));
 FUNC_3(VAR_3, (FUNC_2(0) |
    FUNC_1(0)));
 FUNC_3(VAR_3, VAR_2[VAR_4].mem_size);
 FUNC_3(VAR_3, 0);
 FUNC_3(VAR_3, VAR_6);


 FUNC_3(VAR_3, FUNC_0(VAR_1, 3));
 FUNC_3(VAR_3, (FUNC_2(0) |
    FUNC_1(0)));
 FUNC_3(VAR_3, VAR_2[VAR_4].gws);
 FUNC_3(VAR_3, 0);
 FUNC_3(VAR_3, VAR_8 << VAR_0 | VAR_7);


 FUNC_3(VAR_3, FUNC_0(VAR_1, 3));
 FUNC_3(VAR_3, (FUNC_2(0) |
    FUNC_1(0)));
 FUNC_3(VAR_3, VAR_2[VAR_4].oa);
 FUNC_3(VAR_3, 0);
 FUNC_3(VAR_3, (1 << (VAR_10 + VAR_9)) - (1 << VAR_9));
}
