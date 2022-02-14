
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int rq_flags; int deadline; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct request*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static bool FUNC_4(struct request *VAR_3, unsigned long *VAR_4)
{
 unsigned long VAR_5;

 if (FUNC_1(VAR_3) != VAR_0)
  return 0;
 if (VAR_3->rq_flags & VAR_1)
  return 0;

 VAR_5 = FUNC_0(VAR_3->deadline);
 if (FUNC_3(VAR_2, VAR_5))
  return 1;

 if (*VAR_4 == 0)
  *VAR_4 = VAR_5;
 else if (FUNC_2(*VAR_4, VAR_5))
  *VAR_4 = VAR_5;
 return 0;
}
