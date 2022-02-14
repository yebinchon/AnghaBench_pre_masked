
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct xive_q {int * qpage; } ;
struct xive_cpu {struct xive_q* queue; } ;


 int FUNC_0 (int ,struct xive_q*,size_t) ;
 int FUNC_1 (unsigned long,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_1, struct xive_cpu *VAR_2, u8 VAR_3)
{
 struct xive_q *VAR_4 = &VAR_2->queue[VAR_3];
 unsigned int VAR_5;





 FUNC_0(FUNC_2(VAR_1), VAR_4, VAR_3);
 VAR_5 = FUNC_3(VAR_0);
 FUNC_1((unsigned long)VAR_4->qpage, VAR_5);
 VAR_4->qpage = ((void*)0);
}
