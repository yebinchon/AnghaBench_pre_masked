
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct commit_list {struct commit* item; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {int len; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 struct commit_list** FUNC_1 (struct commit*,struct commit_list**) ;
 scalar_t__ FUNC_2 (int ,int ,struct object_id*,struct commit_list*,struct object_id*,int *,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct commit*,struct commit_list*,struct object_id*,char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_6 (struct commit_list*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (struct object_id*) ;

__attribute__((used)) static int FUNC_11(struct commit *VAR_5, struct commit_list *VAR_6)
{
 struct object_id VAR_7, VAR_8;
 struct commit_list *VAR_9, **VAR_10 = &VAR_9;

 if (FUNC_8(VAR_0, VAR_1, 0) < 0)
  return FUNC_4(FUNC_0("Unable to write index."));

 FUNC_10(&VAR_7);
 FUNC_7(FUNC_0("Wonderful.\n"));
 VAR_10 = FUNC_1(VAR_5, VAR_10);
 VAR_10 = FUNC_1(VAR_6->item, VAR_10);
 FUNC_6(VAR_6);
 if (FUNC_2(VAR_2.buf, VAR_2.len, &VAR_7, VAR_9,
   &VAR_8, ((void*)0), VAR_3))
  FUNC_3(FUNC_0("failed to write commit object"));
 FUNC_5(VAR_5, VAR_6, &VAR_8, "In-index merge");
 FUNC_9(VAR_4);
 return 0;
}
