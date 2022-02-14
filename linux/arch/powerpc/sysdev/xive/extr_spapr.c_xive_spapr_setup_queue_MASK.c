
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct xive_q {int dummy; } ;
struct xive_cpu {struct xive_q* queue; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int) ;
 int * FUNC_3 (unsigned int,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,struct xive_q*,size_t,int *,int ) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_1, struct xive_cpu *VAR_2,
      u8 VAR_3)
{
 struct xive_q *VAR_4 = &VAR_2->queue[VAR_3];
 __be32 *VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_0);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 return FUNC_4(FUNC_2(VAR_1),
       VAR_4, VAR_3, VAR_5, VAR_0);
}
