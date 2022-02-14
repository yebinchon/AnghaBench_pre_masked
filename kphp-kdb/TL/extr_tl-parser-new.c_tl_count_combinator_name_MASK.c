
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_constructor {int name; int right; int left; scalar_t__ id; scalar_t__ real_id; } ;


 int FUNC_0 (struct tl_constructor*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;

int FUNC_6 (struct tl_constructor *VAR_2) {
  FUNC_0 (VAR_2);
  FUNC_5 ();
  FUNC_3 (VAR_2->real_id ? VAR_2->real_id : VAR_2->id, -1);
  FUNC_4 (VAR_2->left, 1);
  FUNC_2 ("=", -1);
  FUNC_4 (VAR_2->right, 1);

  if (!VAR_2->name) {
    VAR_2->name = FUNC_1 (VAR_0, VAR_1);
  }
  return VAR_2->name;
}
