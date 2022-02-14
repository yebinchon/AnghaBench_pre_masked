
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid5_percpu {int * scribble; int * spare_page; } ;
struct r5conf {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct r5conf *VAR_0, struct raid5_percpu *VAR_1)
{
 FUNC_1(VAR_1->spare_page);
 VAR_1->spare_page = ((void*)0);
 FUNC_0(VAR_1->scribble);
 VAR_1->scribble = ((void*)0);
}
