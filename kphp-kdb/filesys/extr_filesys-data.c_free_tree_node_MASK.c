
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; scalar_t__ block_length; } ;
typedef TYPE_1__ filesys_tree_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2 (filesys_tree_t *VAR_3) {
  VAR_0--;
  if (VAR_3->data) {
    VAR_2 -= VAR_3->block_length;
    FUNC_0 (VAR_3->data);
  }
  FUNC_1 (VAR_3, sizeof (*VAR_3));
  VAR_1++;
}
