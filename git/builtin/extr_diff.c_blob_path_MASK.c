
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_array_entry {char const* path; char const* name; } ;



__attribute__((used)) static const char *FUNC_0(struct object_array_entry *VAR_0)
{
 return VAR_0->path ? VAR_0->path : VAR_0->name;
}
