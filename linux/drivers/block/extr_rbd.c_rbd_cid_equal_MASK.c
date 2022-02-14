
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_client_id {scalar_t__ gid; scalar_t__ handle; } ;



__attribute__((used)) static bool FUNC_0(const struct rbd_client_id *VAR_0,
     const struct rbd_client_id *VAR_1)
{
 return VAR_0->gid == VAR_1->gid && VAR_0->handle == VAR_1->handle;
}
