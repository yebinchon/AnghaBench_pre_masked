
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tempfile {int fd; int filename; int list; scalar_t__ owner; scalar_t__ active; int * fp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct tempfile* FUNC_2 (int) ;

__attribute__((used)) static struct tempfile *FUNC_3(void)
{
 struct tempfile *VAR_0 = FUNC_2(sizeof(*VAR_0));
 VAR_0->fd = -1;
 VAR_0->fp = ((void*)0);
 VAR_0->active = 0;
 VAR_0->owner = 0;
 FUNC_0(&VAR_0->list);
 FUNC_1(&VAR_0->filename, 0);
 return VAR_0;
}
