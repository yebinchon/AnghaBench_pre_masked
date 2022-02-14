
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_selector {int dummy; } ;
struct path_info {int repeat_count; int qlen; } ;
struct dm_path {struct path_info* pscontext; } ;
typedef int status_type_t ;


 int FUNC_0 (char*,...) ;


 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct path_selector *VAR_0, struct dm_path *VAR_1,
       status_type_t VAR_2, char *VAR_3, unsigned VAR_4)
{
 unsigned VAR_5 = 0;
 struct path_info *VAR_6;


 if (!VAR_1)
  FUNC_0("0 ");
 else {
  VAR_6 = VAR_1->pscontext;

  switch (VAR_2) {
  case 129:
   FUNC_0("%d ", FUNC_1(&VAR_6->qlen));
   break;
  case 128:
   FUNC_0("%u ", VAR_6->repeat_count);
   break;
  }
 }

 return VAR_5;
}
