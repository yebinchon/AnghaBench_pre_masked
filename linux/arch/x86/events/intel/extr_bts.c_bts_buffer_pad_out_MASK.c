
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bts_phys {unsigned long offset; scalar_t__ size; int page; } ;


 int FUNC_0 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct bts_phys *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2 = VAR_1 - VAR_0->offset;

 FUNC_0(FUNC_1(VAR_0->page) + VAR_2, 0, VAR_0->size - VAR_2);
}
