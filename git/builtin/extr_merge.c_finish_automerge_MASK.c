
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct object_id {int dummy; } ;
struct commit_list {int dummy; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {int len; int buf; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct commit*,struct commit_list**) ;
 scalar_t__ FUNC_2 (int ,int ,struct object_id*,struct commit_list*,struct object_id*,int *,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct commit*,struct commit_list*,struct object_id*,int ) ;
 int FUNC_5 (struct commit_list*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_6 (struct commit_list*) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (struct strbuf*,char*,char const*) ;
 int FUNC_9 (struct strbuf*) ;
 int VAR_5 ;
 int FUNC_10 (struct object_id*) ;

__attribute__((used)) static int FUNC_11(struct commit *VAR_6,
       int VAR_7,
       struct commit_list *VAR_8,
       struct commit_list *VAR_9,
       struct object_id *VAR_10,
       const char *VAR_11)
{
 struct commit_list *VAR_12 = ((void*)0);
 struct strbuf VAR_13 = VAR_1;
 struct object_id VAR_14;

 FUNC_10(VAR_10);
 FUNC_5(VAR_8);
 VAR_12 = VAR_9;
 if (!VAR_7 || VAR_2 == VAR_0)
  FUNC_1(VAR_6, &VAR_12);
 FUNC_6(VAR_9);
 if (FUNC_2(VAR_3.buf, VAR_3.len, VAR_10, VAR_12,
   &VAR_14, ((void*)0), VAR_4))
  FUNC_3(FUNC_0("failed to write commit object"));
 FUNC_8(&VAR_13, "Merge made by the '%s' strategy.", VAR_11);
 FUNC_4(VAR_6, VAR_9, &VAR_14, VAR_13.buf);
 FUNC_9(&VAR_13);
 FUNC_7(VAR_5);
 return 0;
}
