
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct push_buffer {scalar_t__ size; scalar_t__ mapped; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct push_buffer *VAR_0)
{
 *(u32 *)(VAR_0->mapped + VAR_0->size) = FUNC_0(0);
}
