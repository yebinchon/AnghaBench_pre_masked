
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int dummy; } ;
struct object {int flags; int oid; } ;
struct commit {struct object object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct rev_info*,struct object*,int ) ;
 int FUNC_2 (struct rev_info*,char*,int *,int) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct commit*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct rev_info*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct rev_info*) ;
 int FUNC_9 (int ,struct rev_info*,int *) ;
 int FUNC_10 (int ,int *,struct rev_info*,int *) ;
 int FUNC_11 (struct commit*,struct rev_info*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_12(struct commit *VAR_4, struct commit *VAR_5)
{
 struct rev_info VAR_6;
 struct object *VAR_7 = &VAR_4->object;

 FUNC_9(VAR_3, &VAR_6, ((void*)0));
 FUNC_10(0, ((void*)0), &VAR_6, ((void*)0));

 VAR_7->flags &= ~VAR_1;
 FUNC_1(&VAR_6, VAR_7, FUNC_7(&VAR_7->oid));

 FUNC_6(VAR_2, &VAR_6);
 if (VAR_5)
  FUNC_2(&VAR_6, "HEAD",
    &VAR_5->object.oid,
    VAR_1);

 if (FUNC_8(&VAR_6))
  FUNC_5(FUNC_0("internal error in revision walk"));
 if (!(VAR_4->object.flags & VAR_1))
  FUNC_11(VAR_4, &VAR_6);
 else
  FUNC_4(FUNC_0("Previous HEAD position was"), VAR_4);


 FUNC_3(VAR_0);
}
