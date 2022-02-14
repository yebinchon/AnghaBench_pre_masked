
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct fetch_task {int free_sub; scalar_t__ sub; } ;


 int FUNC_0 (struct fetch_task*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (struct fetch_task*,int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct repository*,int *,char const*) ;
 struct fetch_task* FUNC_4 (int) ;

__attribute__((used)) static struct fetch_task *FUNC_5(struct repository *VAR_1,
         const char *VAR_2)
{
 struct fetch_task *VAR_3 = FUNC_4(sizeof(*VAR_3));
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->sub = FUNC_3(VAR_1, &VAR_0, VAR_2);
 if (!VAR_3->sub) {





  VAR_3->sub = FUNC_1(VAR_2);
  if (!VAR_3->sub) {
   FUNC_0(VAR_3);
   return ((void*)0);
  }

  VAR_3->free_sub = 1;
 }

 return VAR_3;
}
