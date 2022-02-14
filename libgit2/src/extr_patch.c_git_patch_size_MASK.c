
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t content_size; int delta; scalar_t__ header_size; scalar_t__ context_size; } ;
typedef TYPE_1__ git_patch ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int *,int ) ;
 int FUNC_4 () ;

size_t FUNC_5(
 git_patch *VAR_1,
 int VAR_2,
 int VAR_3,
 int VAR_4)
{
 size_t VAR_5;

 FUNC_0(VAR_1);

 VAR_5 = VAR_1->content_size;

 if (!VAR_2)
  VAR_5 -= VAR_1->context_size;

 if (VAR_3)
  VAR_5 += VAR_1->header_size;

 if (VAR_4) {
  git_buf VAR_6 = VAR_0;

  if (FUNC_3(
   &VAR_6, VAR_1->delta, ((void*)0), ((void*)0), 0) < 0)
   FUNC_4();
  else
   VAR_5 += FUNC_2(&VAR_6);

  FUNC_1(&VAR_6);
 }

 return VAR_5;
}
