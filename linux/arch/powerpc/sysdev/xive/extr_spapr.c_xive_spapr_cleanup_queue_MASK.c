
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct xive_q {int * qpage; } ;
struct xive_cpu {struct xive_q* queue; } ;


 int FUNC_0 (unsigned long,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 long FUNC_2 (int ,int,size_t,int ,int ) ;
 int FUNC_3 (char*,long,int,size_t) ;
 unsigned int FUNC_4 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_1, struct xive_cpu *VAR_2,
      u8 VAR_3)
{
 struct xive_q *VAR_4 = &VAR_2->queue[VAR_3];
 unsigned int VAR_5;
 long VAR_6;
 int VAR_7 = FUNC_1(VAR_1);

 VAR_6 = FUNC_2(0, VAR_7, VAR_3, 0, 0);
 if (VAR_6)
  FUNC_3("Error %ld setting queue for CPU %d prio %d\n", VAR_6,
         VAR_7, VAR_3);

 VAR_5 = FUNC_4(VAR_0);
 FUNC_0((unsigned long)VAR_4->qpage, VAR_5);
 VAR_4->qpage = ((void*)0);
}
