
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {char const* buf; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct commit_list {TYPE_2__* item; scalar_t__ next; } ;
struct commit {int dummy; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int FUNC_0 (struct commit_list*) ;
 struct commit* FUNC_1 (struct repository*,struct object_id*,int ) ;
 int FUNC_2 (struct object_id*,int *) ;
 struct commit_list* FUNC_3 (struct repository*,struct commit*,struct commit*) ;
 int FUNC_4 (struct repository*,char const*,struct object_id*) ;
 int FUNC_5 (struct repository*,char const*,struct object_id*) ;
 int FUNC_6 (struct strbuf*,char const*,int) ;
 int FUNC_7 (struct strbuf*,int) ;
 int FUNC_8 (struct strbuf*) ;
 char* FUNC_9 (char const*,char*) ;

int FUNC_10(struct repository *VAR_0,
      const char *VAR_1,
      struct object_id *VAR_2)
{
 struct commit *VAR_3, *VAR_4;
 struct commit_list *VAR_5;
 struct object_id VAR_6;
 const char *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_9(VAR_1, "...");
 if (!VAR_7)
  return FUNC_4(VAR_0, VAR_1, VAR_2);
 if (VAR_7 == VAR_1)
  VAR_8 = FUNC_4(VAR_0, "HEAD", &VAR_6);
 else {
  struct strbuf VAR_9;
  FUNC_7(&VAR_9, VAR_7 - VAR_1);
  FUNC_6(&VAR_9, VAR_1, VAR_7 - VAR_1);
  VAR_8 = FUNC_5(VAR_0, VAR_9.buf, &VAR_6);
  FUNC_8(&VAR_9);
 }
 if (VAR_8)
  return VAR_8;
 VAR_3 = FUNC_1(VAR_0, &VAR_6, 0);
 if (!VAR_3)
  return -1;

 if (FUNC_5(VAR_0, VAR_7[3] ? (VAR_7 + 3) : "HEAD", &VAR_6))
  return -1;
 VAR_4 = FUNC_1(VAR_0, &VAR_6, 0);
 if (!VAR_4)
  return -1;
 VAR_5 = FUNC_3(VAR_0, VAR_3, VAR_4);
 if (!VAR_5 || VAR_5->next)
  VAR_8 = -1;
 else {
  VAR_8 = 0;
  FUNC_2(VAR_2, &VAR_5->item->object.oid);
 }
 FUNC_0(VAR_5);
 return VAR_8;
}
