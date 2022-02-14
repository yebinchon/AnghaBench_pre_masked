
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr; TYPE_1__* objects; } ;
struct rev_info {int max_parents; int prefix; TYPE_2__ pending; } ;
struct patch_ids {int dummy; } ;
struct object {unsigned int flags; int oid; } ;
struct commit {int dummy; } ;
struct TYPE_3__ {struct object* item; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct commit*,struct patch_ids*) ;
 int FUNC_2 (struct rev_info*,struct object*,char*) ;
 int FUNC_3 (struct commit*,unsigned int) ;
 int FUNC_4 (int ) ;
 struct commit* FUNC_5 (struct rev_info*) ;
 int FUNC_6 (int ,struct patch_ids*) ;
 struct commit* FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (struct rev_info*) ;
 int FUNC_9 (int ,struct rev_info*,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_10(struct rev_info *VAR_5, struct patch_ids *VAR_6)
{
 struct rev_info VAR_7;
 struct commit *VAR_8, *VAR_9, *VAR_10;
 struct object *VAR_11, *VAR_12;
 unsigned VAR_13, VAR_14;

 if (VAR_5->pending.nr != 2)
  FUNC_4(FUNC_0("need exactly one range"));

 VAR_11 = VAR_5->pending.objects[0].item;
 VAR_12 = VAR_5->pending.objects[1].item;
 VAR_13 = VAR_11->flags;
 VAR_14 = VAR_12->flags;
 VAR_9 = FUNC_7(VAR_4, &VAR_11->oid);
 VAR_10 = FUNC_7(VAR_4, &VAR_12->oid);

 if ((VAR_13 & VAR_3) == (VAR_14 & VAR_3))
  FUNC_4(FUNC_0("not a range"));

 FUNC_6(VAR_4, VAR_6);


 FUNC_9(VAR_4, &VAR_7, VAR_5->prefix);
 VAR_7.max_parents = 1;
 VAR_11->flags ^= VAR_3;
 VAR_12->flags ^= VAR_3;
 FUNC_2(&VAR_7, VAR_11, "o1");
 FUNC_2(&VAR_7, VAR_12, "o2");
 if (FUNC_8(&VAR_7))
  FUNC_4(FUNC_0("revision walk setup failed"));

 while ((VAR_8 = FUNC_5(&VAR_7)) != ((void*)0)) {
  FUNC_1(VAR_8, VAR_6);
 }


 FUNC_3(VAR_9, VAR_1 | VAR_3 | VAR_2 | VAR_0);
 FUNC_3(VAR_10, VAR_1 | VAR_3 | VAR_2 | VAR_0);
 VAR_11->flags = VAR_13;
 VAR_12->flags = VAR_14;
}
