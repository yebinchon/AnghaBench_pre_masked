
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int priority; size_t nattrs; size_t nmatches; struct TYPE_12__* attrdata; struct TYPE_12__* filter_name; TYPE_2__* filter; } ;
typedef TYPE_1__ git_filter_def ;
struct TYPE_13__ {int attributes; } ;
typedef TYPE_2__ git_filter ;
typedef int git_buf ;
struct TYPE_14__ {int filters; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int FUNC_2 (size_t*,size_t,int) ;
 scalar_t__ FUNC_3 (int *,size_t*,size_t*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_9__ VAR_1 ;
 TYPE_1__* FUNC_5 (int,size_t) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (char const*) ;
 TYPE_1__* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(
 const char *VAR_2, git_filter *VAR_3, int VAR_4)
{
 git_filter_def *VAR_5;
 size_t VAR_6 = 0, VAR_7 = 0, VAR_8;
 git_buf VAR_9 = VAR_0;

 if (FUNC_3(&VAR_9, &VAR_6, &VAR_7, VAR_3->attributes) < 0)
  return -1;

 FUNC_2(&VAR_8, VAR_6, 2);
 FUNC_2(&VAR_8, VAR_8, sizeof(char *));
 FUNC_1(&VAR_8, VAR_8, sizeof(git_filter_def));

 VAR_5 = FUNC_5(1, VAR_8);
 FUNC_0(VAR_5);

 VAR_5->filter_name = FUNC_7(VAR_2);
 FUNC_0(VAR_5->filter_name);

 VAR_5->filter = VAR_3;
 VAR_5->priority = VAR_4;
 VAR_5->nattrs = VAR_6;
 VAR_5->nmatches = VAR_7;
 VAR_5->attrdata = FUNC_8(&VAR_9);

 FUNC_4(VAR_5);

 if (FUNC_9(&VAR_1.filters, VAR_5) < 0) {
  FUNC_6(VAR_5->filter_name);
  FUNC_6(VAR_5->attrdata);
  FUNC_6(VAR_5);
  return -1;
 }

 FUNC_10(&VAR_1.filters);
 return 0;
}
