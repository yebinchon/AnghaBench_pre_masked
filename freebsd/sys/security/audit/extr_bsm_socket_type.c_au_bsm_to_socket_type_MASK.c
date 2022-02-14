
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct bsm_socket_type {int bst_local_socket_type; } ;


 struct bsm_socket_type* FUNC_0 (int ) ;

int
FUNC_1(u_short VAR_0, int *VAR_1)
{
 const struct bsm_socket_type *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 == ((void*)0) || VAR_2->bst_local_socket_type)
  return (-1);
 *VAR_1 = VAR_2->bst_local_socket_type;
 return (0);
}
