
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void child_device_config ;
struct bdb_general_definitions {int child_dev_size; int * devices; } ;



__attribute__((used)) static const struct child_device_config *
FUNC_0(const struct bdb_general_definitions *VAR_0, int VAR_1)
{
 return (const void *) &VAR_0->devices[VAR_1 * VAR_0->child_dev_size];
}
