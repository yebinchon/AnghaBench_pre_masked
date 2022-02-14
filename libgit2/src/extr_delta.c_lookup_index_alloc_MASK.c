
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_entry {int dummy; } ;
struct git_delta_index {int dummy; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (size_t*,size_t,size_t) ;
 int FUNC_2 (size_t*,size_t,int) ;
 int VAR_0 ;
 int FUNC_3 (size_t) ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(
 void **VAR_1, unsigned long *VAR_2, size_t VAR_3, size_t VAR_4)
{
 size_t VAR_5, VAR_6, VAR_7;

 FUNC_2(&VAR_5, VAR_3, sizeof(struct index_entry));
 FUNC_2(&VAR_6, VAR_4, sizeof(struct index_entry *));

 FUNC_1(&VAR_7, sizeof(struct git_delta_index), VAR_5);
 FUNC_1(&VAR_7, VAR_7, VAR_6);

 if (!FUNC_3(VAR_7)) {
  FUNC_5(VAR_0, "overly large delta");
  return -1;
 }

 *VAR_1 = FUNC_4(VAR_7);
 FUNC_0(*VAR_1);

 *VAR_2 = (unsigned long)VAR_7;
 return 0;
}
