
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5worker_group {int * temp_inactive_list; int work; struct r5worker_group* group; struct r5worker_group* workers; struct r5conf* conf; int loprio_list; int handle_list; } ;
struct r5worker {int * temp_inactive_list; int work; struct r5worker* group; struct r5worker* workers; struct r5conf* conf; int loprio_list; int handle_list; } ;
struct r5conf {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 struct r5worker_group* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct r5worker_group*) ;
 int FUNC_4 () ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct r5conf *VAR_4, int VAR_5,
          int *VAR_6,
          int *VAR_7,
          struct r5worker_group **VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 ssize_t VAR_12;
 struct r5worker *VAR_13;

 *VAR_7 = VAR_5;
 if (VAR_5 == 0) {
  *VAR_6 = 0;
  *VAR_8 = ((void*)0);
  return 0;
 }
 *VAR_6 = FUNC_4();
 VAR_12 = sizeof(struct r5worker) * VAR_5;
 VAR_13 = FUNC_2(VAR_12, *VAR_6, VAR_1);
 *VAR_8 = FUNC_2(*VAR_6, sizeof(struct r5worker_group),
     VAR_1);
 if (!*VAR_8 || !VAR_13) {
  FUNC_3(VAR_13);
  FUNC_3(*VAR_8);
  return -VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < *VAR_6; VAR_9++) {
  struct r5worker_group *VAR_14;

  VAR_14 = &(*VAR_8)[VAR_9];
  FUNC_0(&VAR_14->handle_list);
  FUNC_0(&VAR_14->loprio_list);
  VAR_14->conf = VAR_4;
  VAR_14->workers = VAR_13 + VAR_9 * VAR_5;

  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
   struct r5worker *VAR_15 = VAR_14->workers + VAR_10;
   VAR_15->group = VAR_14;
   FUNC_1(&VAR_15->work, VAR_3);

   for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
    FUNC_0(VAR_15->temp_inactive_list + VAR_11);
  }
 }

 return 0;
}
