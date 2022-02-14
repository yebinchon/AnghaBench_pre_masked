
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct kobj_attribute {scalar_t__ (* show ) (int *,struct kobj_attribute*,char*) ;TYPE_1__ attr; } ;
struct cache_index_dir {int kobj; struct cache* cache; } ;
struct cache {int ofnode; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (struct kobj_attribute**) ;
 int VAR_0 ;
 int VAR_1 ;
 struct kobj_attribute** VAR_2 ;
 char* FUNC_1 (struct cache*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,int ,char const*,...) ;
 scalar_t__ FUNC_5 (int *,struct kobj_attribute*,char*) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct cache_index_dir *VAR_3)
{
 const char *VAR_4;
 struct cache *VAR_5;
 char *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_1, VAR_0);
 if (!VAR_6)
  return;

 VAR_5 = VAR_3->cache;
 VAR_4 = FUNC_1(VAR_5);






 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  struct kobj_attribute *VAR_8;
  ssize_t VAR_9;

  VAR_8 = VAR_2[VAR_7];

  VAR_9 = VAR_8->show(&VAR_3->kobj, VAR_8, VAR_6);
  if (VAR_9 <= 0) {
   FUNC_4("not creating %s attribute for "
     "%pOF(%s) (rc = %zd)\n",
     VAR_8->attr.name, VAR_5->ofnode,
     VAR_4, VAR_9);
   continue;
  }
  if (FUNC_6(&VAR_3->kobj, &VAR_8->attr))
   FUNC_4("could not create %s attribute for %pOF(%s)\n",
     VAR_8->attr.name, VAR_5->ofnode, VAR_4);
 }

 FUNC_2(VAR_6);
}
