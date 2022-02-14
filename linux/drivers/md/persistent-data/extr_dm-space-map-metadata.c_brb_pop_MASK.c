
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bop_ring_buffer {int begin; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bop_ring_buffer*) ;
 int FUNC_1 (struct bop_ring_buffer*,int ) ;

__attribute__((used)) static int FUNC_2(struct bop_ring_buffer *VAR_1)
{
 if (FUNC_0(VAR_1))
  return -VAR_0;

 VAR_1->begin = FUNC_1(VAR_1, VAR_1->begin);

 return 0;
}
