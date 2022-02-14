
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* path; struct TYPE_5__* fname; int fp; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(void)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_2(VAR_0->fp);
 FUNC_3(VAR_0->fname);
 FUNC_3(VAR_0->path);
 FUNC_1(VAR_0, VAR_2);
 FUNC_3(VAR_0);

 VAR_0 = FUNC_0(&VAR_1);
}
