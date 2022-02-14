
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_store {TYPE_1__* be; } ;
struct files_ref_store {unsigned int store_flags; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,char const*,...) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static struct files_ref_store *FUNC_1(struct ref_store *VAR_1,
           unsigned int VAR_2,
           const char *VAR_3)
{
 struct files_ref_store *VAR_4;

 if (VAR_1->be != &VAR_0)
  FUNC_0("ref_store is type \"%s\" not \"files\" in %s",
      VAR_1->be->name, VAR_3);

 VAR_4 = (struct files_ref_store *)VAR_1;

 if ((VAR_4->store_flags & VAR_2) != VAR_2)
  FUNC_0("operation %s requires abilities 0x%x, but only have 0x%x",
      VAR_3, VAR_2, VAR_4->store_flags);

 return VAR_4;
}
