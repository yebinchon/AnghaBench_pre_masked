
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bop_ring_buffer {int bops; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static unsigned FUNC_1(struct bop_ring_buffer *VAR_0, unsigned VAR_1)
{
 unsigned VAR_2 = VAR_1 + 1;
 return VAR_2 >= FUNC_0(VAR_0->bops) ? 0 : VAR_2;
}
