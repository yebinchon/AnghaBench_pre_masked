
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char const* hash; } ;
struct tip_table_entry {TYPE_1__ oid; } ;



__attribute__((used)) static const unsigned char *FUNC_0(size_t VAR_0, void *VAR_1)
{
 struct tip_table_entry *VAR_2 = VAR_1;
 return VAR_2[VAR_0].oid.hash;
}
