
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int (* free ) (TYPE_3__*) ;} ;
struct TYPE_5__ {int ptr; } ;
struct TYPE_6__ {int member_2; int member_1; int member_0; } ;
struct buf_writestream {TYPE_3__ base; TYPE_1__ buf; TYPE_2__ member_0; } ;
typedef int git_filter_list ;
typedef int git_filter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int ,int ) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int ,char*,TYPE_3__*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*) ;

void FUNC_9(void)
{
 git_filter_list *VAR_6;
 git_filter *VAR_7;
 struct buf_writestream VAR_8 = { {
  VAR_4,
  VAR_2,
  VAR_3 } };

 FUNC_2(FUNC_4(
  &VAR_6, VAR_5, VAR_1, 0));

 VAR_7 = FUNC_7(VAR_0);
 FUNC_0(VAR_7 != ((void*)0));

 FUNC_2(FUNC_5(VAR_6, VAR_7, ((void*)0)));

 FUNC_2(FUNC_6(VAR_6, VAR_5, "all-crlf", &VAR_8.base));
 FUNC_1("crlf\ncrlf\ncrlf\ncrlf\n", VAR_8.buf.ptr);

 FUNC_3(VAR_6);
 VAR_8.base.free(&VAR_8.base);
}
