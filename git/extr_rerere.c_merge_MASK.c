
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rerere_id {int dummy; } ;
struct index_state {int dummy; } ;
struct TYPE_6__ {int ptr; int member_1; int * member_0; } ;
typedef TYPE_1__ mmfile_t ;
struct TYPE_7__ {int ptr; int size; int member_1; int * member_0; } ;
typedef TYPE_2__ mmbuffer_t ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,int *) ;
 scalar_t__ FUNC_6 (struct index_state*,char const*,int *,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (struct rerere_id const*,char*) ;
 int FUNC_9 (struct index_state*,struct rerere_id const*,char const*,TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct index_state *VAR_0, const struct rerere_id *VAR_1, const char *VAR_2)
{
 FILE *VAR_3;
 int VAR_4;
 mmfile_t VAR_5 = {((void*)0), 0};
 mmbuffer_t VAR_6 = {((void*)0), 0};





 if ((FUNC_6(VAR_0, VAR_2, ((void*)0), FUNC_8(VAR_1, "thisimage")) < 0) ||
     FUNC_7(&VAR_5, FUNC_8(VAR_1, "thisimage"))) {
  VAR_4 = 1;
  goto out;
 }

 VAR_4 = FUNC_9(VAR_0, VAR_1, VAR_2, &VAR_5, &VAR_6);
 if (VAR_4)
  goto out;





 if (FUNC_10(FUNC_8(VAR_1, "postimage"), ((void*)0)) < 0)
  FUNC_11(FUNC_0("failed utime() on '%s'"),
         FUNC_8(VAR_1, "postimage"));


 VAR_3 = FUNC_3(VAR_2, "w");
 if (!VAR_3)
  return FUNC_1(FUNC_0("could not open '%s'"), VAR_2);
 if (FUNC_5(VAR_6.ptr, VAR_6.size, 1, VAR_3) != 1)
  FUNC_1(FUNC_0("could not write '%s'"), VAR_2);
 if (FUNC_2(VAR_3))
  return FUNC_1(FUNC_0("writing '%s' failed"), VAR_2);

out:
 FUNC_4(VAR_5.ptr);
 FUNC_4(VAR_6.ptr);

 return VAR_4;
}
