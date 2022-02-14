
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_selector {int dummy; } ;
struct path_info {int repeat_count; } ;
struct dm_path {struct path_info* pscontext; } ;
typedef int status_type_t ;


 int FUNC_0 (char*,...) ;



__attribute__((used)) static int FUNC_1(struct path_selector *VAR_0, struct dm_path *VAR_1,
       status_type_t VAR_2, char *VAR_3, unsigned int VAR_4)
{
 struct path_info *VAR_5;
 int VAR_6 = 0;

 if (!VAR_1)
  FUNC_0("0 ");
 else {
  switch(VAR_2) {
  case 129:
   break;
  case 128:
   VAR_5 = VAR_1->pscontext;
   FUNC_0("%u ", VAR_5->repeat_count);
   break;
  }
 }

 return VAR_6;
}
