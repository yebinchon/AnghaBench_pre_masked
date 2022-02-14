
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lowcore {unsigned long mcesad; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (void*) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_2 () ;

int FUNC_3(struct lowcore *VAR_4)
{
 unsigned long VAR_5;

 if (!FUNC_2())
  return 0;
 VAR_5 = (unsigned long) FUNC_0(VAR_2, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1((void *) VAR_5);
 VAR_4->mcesad = VAR_5 | VAR_3;
 return 0;
}
