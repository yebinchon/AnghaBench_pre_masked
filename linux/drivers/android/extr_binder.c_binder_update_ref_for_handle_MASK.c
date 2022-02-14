
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct binder_ref_data {int dummy; } ;
struct binder_ref {struct binder_ref_data data; } ;
struct binder_proc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct binder_ref*,int) ;
 int FUNC_1 (struct binder_ref*) ;
 struct binder_ref* FUNC_2 (struct binder_proc*,int ,int) ;
 int FUNC_3 (struct binder_ref*,int,int *) ;
 int FUNC_4 (struct binder_proc*) ;
 int FUNC_5 (struct binder_proc*) ;

__attribute__((used)) static int FUNC_6(struct binder_proc *VAR_1,
  uint32_t VAR_2, bool VAR_3, bool VAR_4,
  struct binder_ref_data *VAR_5)
{
 int VAR_6 = 0;
 struct binder_ref *VAR_7;
 bool VAR_8 = 0;

 FUNC_4(VAR_1);
 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_4);
 if (!VAR_7) {
  VAR_6 = -VAR_0;
  goto err_no_ref;
 }
 if (VAR_3)
  VAR_6 = FUNC_3(VAR_7, VAR_4, ((void*)0));
 else
  VAR_8 = FUNC_0(VAR_7, VAR_4);

 if (VAR_5)
  *VAR_5 = VAR_7->data;
 FUNC_5(VAR_1);

 if (VAR_8)
  FUNC_1(VAR_7);
 return VAR_6;

err_no_ref:
 FUNC_5(VAR_1);
 return VAR_6;
}
