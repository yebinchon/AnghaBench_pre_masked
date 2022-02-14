
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_constructor {char* real_id; char* id; int name; int right; int left; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char*,char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_3 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;

int FUNC_6 (struct tl_constructor *VAR_4) {
  FUNC_5 ();
  FUNC_3 (VAR_4->real_id ? VAR_4->real_id : VAR_4->id, -1);
  static char VAR_5[10];
  FUNC_1 (VAR_5, "#%08x", VAR_4->name);
  FUNC_3 (VAR_5, -1);
  FUNC_4 (VAR_4->left, 1);
  FUNC_2 ("=", -1);
  FUNC_4 (VAR_4->right, 1);
  if (VAR_2 >= 1) {
    FUNC_0 (VAR_3, "%.*s\n", VAR_1, VAR_0);
  }



  return VAR_4->name;
}
