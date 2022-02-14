
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fsck_options {int dummy; } ;
struct fsck_gitmodules_data {int ret; struct fsck_options* options; TYPE_1__* obj; } ;
struct config_options {int error_action; int member_0; } ;
struct TYPE_3__ {int oid; } ;
struct blob {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,char*,char const*,unsigned long,struct fsck_gitmodules_data*,struct config_options*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct fsck_options*,TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct fsck_options*,TYPE_1__*,int ,char*) ;

__attribute__((used)) static int FUNC_5(struct blob *VAR_7, const char *VAR_8,
       unsigned long VAR_9, struct fsck_options *VAR_10)
{
 struct fsck_gitmodules_data VAR_11;
 struct config_options VAR_12 = { 0 };

 if (!FUNC_2(&VAR_6, &VAR_7->object.oid))
  return 0;
 FUNC_3(&VAR_5, &VAR_7->object.oid);

 if (FUNC_1(VAR_10, &VAR_7->object))
  return 0;

 if (!VAR_8) {





  return FUNC_4(VAR_10, &VAR_7->object,
         VAR_2,
         ".gitmodules too large to parse");
 }

 VAR_11.obj = &VAR_7->object;
 VAR_11.options = VAR_10;
 VAR_11.ret = 0;
 VAR_12.error_action = VAR_0;
 if (FUNC_0(VAR_4, VAR_1,
    ".gitmodules", VAR_8, VAR_9, &VAR_11, &VAR_12))
  VAR_11.ret |= FUNC_4(VAR_10, &VAR_7->object,
       VAR_3,
       "could not parse gitmodules blob");

 return VAR_11.ret;
}
