
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore {int dummy; } ;
struct dm_exception_store {scalar_t__ context; } ;



__attribute__((used)) static struct pstore *FUNC_0(struct dm_exception_store *VAR_0)
{
 return (struct pstore *) VAR_0->context;
}
