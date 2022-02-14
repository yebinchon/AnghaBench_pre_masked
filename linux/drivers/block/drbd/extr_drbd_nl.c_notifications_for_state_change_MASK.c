
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_state_change {int n_connections; int n_devices; } ;



__attribute__((used)) static unsigned int FUNC_0(struct drbd_state_change *VAR_0)
{
 return 1 +
        VAR_0->n_connections +
        VAR_0->n_devices +
        VAR_0->n_devices * VAR_0->n_connections;
}
