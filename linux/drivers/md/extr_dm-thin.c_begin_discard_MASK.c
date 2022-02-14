
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int dummy; } ;
struct discard_op {int * bio; struct bio* parent_bio; int plug; struct thin_c* tc; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct discard_op *VAR_0, struct thin_c *VAR_1, struct bio *VAR_2)
{
 FUNC_0(!VAR_2);

 VAR_0->tc = VAR_1;
 FUNC_1(&VAR_0->plug);
 VAR_0->parent_bio = VAR_2;
 VAR_0->bio = ((void*)0);
}
