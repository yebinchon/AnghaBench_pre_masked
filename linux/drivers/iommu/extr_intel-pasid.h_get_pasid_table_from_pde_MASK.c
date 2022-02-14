
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasid_entry {int dummy; } ;
struct pasid_dir_entry {int val; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pasid_dir_entry*) ;
 struct pasid_entry* FUNC_2 (int) ;

__attribute__((used)) static inline struct pasid_entry *
FUNC_3(struct pasid_dir_entry *VAR_1)
{
 if (!FUNC_1(VAR_1))
  return ((void*)0);

 return FUNC_2(FUNC_0(VAR_1->val) & VAR_0);
}
