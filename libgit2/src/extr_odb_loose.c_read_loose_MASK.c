
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int type; scalar_t__ len; int * data; } ;
typedef TYPE_1__ git_rawobj ;
struct TYPE_14__ {int size; scalar_t__ ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (unsigned char*,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(git_rawobj *VAR_2, git_buf *VAR_3)
{
 int VAR_4;
 git_buf VAR_5 = VAR_0;

 FUNC_0(VAR_2 && VAR_3);

 if (FUNC_2(VAR_3))
  return -1;

 VAR_2->data = ((void*)0);
 VAR_2->len = 0;
 VAR_2->type = VAR_1;

 if ((VAR_4 = FUNC_3(&VAR_5, VAR_3->ptr)) < 0)
  goto done;

 if (!FUNC_4((unsigned char *)VAR_5.ptr, VAR_5.size))
  VAR_4 = FUNC_5(VAR_2, &VAR_5);
 else
  VAR_4 = FUNC_6(VAR_2, &VAR_5);

done:
 FUNC_1(&VAR_5);
 return VAR_4;
}
