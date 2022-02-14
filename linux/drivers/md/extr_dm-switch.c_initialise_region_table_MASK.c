
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_ctx {unsigned long nr_regions; unsigned int nr_paths; } ;


 int FUNC_0 (struct switch_ctx*,unsigned long,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct switch_ctx *VAR_0)
{
 unsigned VAR_1 = 0;
 unsigned long VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_regions; VAR_2++) {
  FUNC_0(VAR_0, VAR_2, VAR_1);
  if (++VAR_1 >= VAR_0->nr_paths)
   VAR_1 = 0;
 }
}
