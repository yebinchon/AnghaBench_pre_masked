
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tempfile {int list; int filename; scalar_t__ active; } ;


 int FUNC_0 (struct tempfile*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct tempfile *VAR_0)
{
 VAR_0->active = 0;
 FUNC_1(&VAR_0->filename);
 FUNC_2(&VAR_0->list);
 FUNC_0(VAR_0);
}
