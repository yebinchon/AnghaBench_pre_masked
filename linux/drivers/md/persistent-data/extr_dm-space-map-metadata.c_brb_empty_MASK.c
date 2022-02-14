
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bop_ring_buffer {scalar_t__ begin; scalar_t__ end; } ;



__attribute__((used)) static bool FUNC_0(struct bop_ring_buffer *VAR_0)
{
 return VAR_0->begin == VAR_0->end;
}
