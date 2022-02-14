
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_xor_chan {int lock; } ;


 int FUNC_0 (struct mv_xor_chan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct mv_xor_chan *VAR_1 = (struct mv_xor_chan *) VAR_0;

 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->lock);
}
