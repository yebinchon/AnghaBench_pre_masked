
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tl_type {int name; } ;
struct hash_elem_tl_type_name {struct tl_type* x; } ;
struct TYPE_3__ {int ht_tname; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 struct hash_elem_tl_type_name* FUNC_1 (int ,struct tl_type*) ;

struct tl_type *FUNC_2 (int VAR_1) {
  FUNC_0 (VAR_0);
  struct tl_type VAR_2;
  VAR_2.name = VAR_1;

  struct hash_elem_tl_type_name *VAR_3 = FUNC_1 (VAR_0->ht_tname, &VAR_2);
  return VAR_3 ? VAR_3->x : 0;
}
