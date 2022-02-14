
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cm_req_msg {int alt_local_gid; scalar_t__ alt_local_lid; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct cm_req_msg *VAR_0)
{
 return ((VAR_0->alt_local_lid) ||
  (FUNC_0(&VAR_0->alt_local_gid)));
}
