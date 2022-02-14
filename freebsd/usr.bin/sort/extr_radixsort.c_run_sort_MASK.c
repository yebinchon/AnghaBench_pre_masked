
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_list_item {int dummy; } ;
struct sort_level {size_t tosort_num; size_t tosort_sz; struct sort_list_item** tosort; } ;
typedef int pthread_mutexattr_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sort_level*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sort_level*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct sort_level*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;
 size_t VAR_6 ;
 struct sort_level* FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12(struct sort_list_item **VAR_7, size_t VAR_8)
{
 struct sort_level *VAR_9;
 VAR_9 = FUNC_11(sizeof(struct sort_level));
 FUNC_1(VAR_9, 0, sizeof(struct sort_level));

 VAR_9->tosort = VAR_7;
 VAR_9->tosort_num = VAR_8;
 VAR_9->tosort_sz = VAR_8;





 FUNC_8(VAR_9);

 FUNC_0(VAR_9);
}
