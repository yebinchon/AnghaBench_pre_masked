
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct object {int dummy; } ;
struct all_refs_cb {int all_flags; TYPE_1__* all_revs; } ;
struct TYPE_4__ {int ref_excludes; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char const*,struct object_id const*,int ) ;
 int FUNC_1 (TYPE_1__*,struct object*,char const*,int ,int ) ;
 struct object* FUNC_2 (TYPE_1__*,char const*,struct object_id const*,int ) ;
 scalar_t__ FUNC_3 (int ,char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, const struct object_id *VAR_2,
     int VAR_3, void *VAR_4)
{
 struct all_refs_cb *VAR_5 = VAR_4;
 struct object *VAR_6;

 if (FUNC_3(VAR_5->all_revs->ref_excludes, VAR_1))
     return 0;

 VAR_6 = FUNC_2(VAR_5->all_revs, VAR_1, VAR_2, VAR_5->all_flags);
 FUNC_1(VAR_5->all_revs, VAR_6, VAR_1, VAR_0, VAR_5->all_flags);
 FUNC_0(VAR_5->all_revs, VAR_1, VAR_2, VAR_5->all_flags);
 return 0;
}
