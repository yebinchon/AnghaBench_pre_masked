
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int verify_fn ;
typedef int uint32_t ;
struct repository {int dummy; } ;
struct progress {int dummy; } ;
struct packed_git {int index_data; } ;
struct pack_window {int dummy; } ;


 int FUNC_0 (struct pack_window**) ;
 int FUNC_1 (struct packed_git*) ;
 int FUNC_2 (struct repository*,struct packed_git*,struct pack_window**,int ,struct progress*,int ) ;

int FUNC_3(struct repository *VAR_0, struct packed_git *VAR_1, verify_fn VAR_2,
  struct progress *VAR_3, uint32_t VAR_4)
{
 int VAR_5 = 0;
 struct pack_window *VAR_6 = ((void*)0);

 VAR_5 |= FUNC_1(VAR_1);
 if (!VAR_1->index_data)
  return -1;

 VAR_5 |= FUNC_2(VAR_0, VAR_1, &VAR_6, VAR_2, VAR_3, VAR_4);
 FUNC_0(&VAR_6);

 return VAR_5;
}
