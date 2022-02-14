
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hv_ring_buffer_info {int dummy; } ;


 void* FUNC_0 (struct hv_ring_buffer_info*) ;
 int FUNC_1 (struct hv_ring_buffer_info*) ;
 int FUNC_2 (void*,void const*,int) ;

__attribute__((used)) static u32 FUNC_3(
 struct hv_ring_buffer_info *VAR_0,
 u32 VAR_1,
 const void *VAR_2,
 u32 VAR_3)
{
 void *VAR_4 = FUNC_0(VAR_0);
 u32 VAR_5 = FUNC_1(VAR_0);

 FUNC_2(VAR_4 + VAR_1, VAR_2, VAR_3);

 VAR_1 += VAR_3;
 if (VAR_1 >= VAR_5)
  VAR_1 -= VAR_5;

 return VAR_1;
}
