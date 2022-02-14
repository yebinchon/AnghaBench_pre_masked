
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {char* path; unsigned short mode; struct object_id const oid; } ;
struct tree_desc {TYPE_1__ entry; } ;



__attribute__((used)) static inline const struct object_id *FUNC_0(struct tree_desc *VAR_0, const char **VAR_1, unsigned short *VAR_2)
{
 *VAR_1 = VAR_0->entry.path;
 *VAR_2 = VAR_0->entry.mode;
 return &VAR_0->entry.oid;
}
