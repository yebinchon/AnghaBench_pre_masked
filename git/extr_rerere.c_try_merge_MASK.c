
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct rerere_id {int dummy; } ;
struct index_state {int dummy; } ;
struct TYPE_7__ {int ptr; int member_1; int * member_0; } ;
typedef TYPE_1__ mmfile_t ;
typedef int mmbuffer_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,TYPE_1__*,int *,TYPE_1__*,char*,TYPE_1__*,char*,struct index_state*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct rerere_id const*,char*) ;

__attribute__((used)) static int FUNC_4(struct index_state *VAR_0,
       const struct rerere_id *VAR_1, const char *VAR_2,
       mmfile_t *VAR_3, mmbuffer_t *VAR_4)
{
 int VAR_5;
 mmfile_t VAR_6 = {((void*)0), 0}, VAR_7 = {((void*)0), 0};

 if (FUNC_2(&VAR_6, FUNC_3(VAR_1, "preimage")) ||
     FUNC_2(&VAR_7, FUNC_3(VAR_1, "postimage")))
  VAR_5 = 1;
 else




  VAR_5 = FUNC_1(VAR_4, VAR_2, &VAR_6, ((void*)0), VAR_3, "", &VAR_7, "",
          VAR_0, ((void*)0));

 FUNC_0(VAR_6.ptr);
 FUNC_0(VAR_7.ptr);

 return VAR_5;
}
