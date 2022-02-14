
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {unsigned int nr_levels; unsigned int* target_count; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct queue *VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 unsigned VAR_4, VAR_5, VAR_6, VAR_7;

 FUNC_0(VAR_2 > VAR_3);
 FUNC_0(VAR_3 > VAR_0->nr_levels);
 VAR_5 = VAR_3 - VAR_2;
 VAR_6 = FUNC_1(VAR_1, VAR_5);
 VAR_7 = FUNC_2(VAR_1, VAR_5);

 for (VAR_4 = VAR_2; VAR_4 < VAR_3; VAR_4++)
  VAR_0->target_count[VAR_4] =
   (VAR_4 < (VAR_2 + VAR_7)) ? VAR_6 + 1u : VAR_6;
}
