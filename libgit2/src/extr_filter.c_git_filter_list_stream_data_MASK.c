
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int (* write ) (TYPE_1__*,int ,int ) ;int (* close ) (TYPE_1__*) ;} ;
typedef TYPE_1__ git_writestream ;
typedef int git_vector ;
typedef int git_filter_list ;
struct TYPE_11__ {int size; int ptr; } ;
typedef TYPE_2__ git_buf ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__**,int *,int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(
 git_filter_list *VAR_1,
 git_buf *VAR_2,
 git_writestream *VAR_3)
{
 git_vector VAR_4 = VAR_0;
 git_writestream *VAR_5;
 int VAR_6, VAR_7 = 0;

 FUNC_0(VAR_2);

 if ((VAR_6 = FUNC_2(&VAR_5, &VAR_4, VAR_1, VAR_3)) < 0)
  goto out;
 VAR_7 = 1;

 if ((VAR_6 = VAR_5->write(
   VAR_5, VAR_2->ptr, VAR_2->size)) < 0)
  goto out;

out:
 if (VAR_7)
  VAR_6 |= VAR_5->close(VAR_5);

 FUNC_1(&VAR_4);
 return VAR_6;
}
