
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xpparam_t ;
typedef int xdfenv_t ;
struct hashmap {int alloc; struct entry* entries; int * env; int const* xpp; int * file2; int * file1; } ;
struct entry {int dummy; } ;
typedef int mmfile_t ;


 int FUNC_0 (int const*,int ,struct hashmap*,int) ;
 int FUNC_1 (struct entry*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(mmfile_t *VAR_0, mmfile_t *VAR_1,
  xpparam_t const *VAR_2, xdfenv_t *VAR_3,
  struct hashmap *VAR_4,
  int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 VAR_4->file1 = VAR_0;
 VAR_4->file2 = VAR_1;
 VAR_4->xpp = VAR_2;
 VAR_4->env = VAR_3;


 VAR_4->alloc = VAR_6 * 2;
 VAR_4->entries = (struct entry *)
  FUNC_2(VAR_4->alloc * sizeof(struct entry));
 if (!VAR_4->entries)
  return -1;
 FUNC_1(VAR_4->entries, 0, VAR_4->alloc * sizeof(struct entry));


 while (VAR_6--)
  FUNC_0(VAR_2, VAR_5++, VAR_4, 1);


 while (VAR_8--)
  FUNC_0(VAR_2, VAR_7++, VAR_4, 2);

 return 0;
}
