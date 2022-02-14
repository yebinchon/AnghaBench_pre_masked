
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct efa_ucontext {int mmap_xa; } ;
struct efa_mmap_entry {scalar_t__ length; int address; int obj; } ;
struct efa_dev {int ibdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct efa_mmap_entry*) ;
 int FUNC_1 (int *,char*,int ,scalar_t__,int ,scalar_t__) ;
 struct efa_mmap_entry* FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static struct efa_mmap_entry *FUNC_3(struct efa_dev *VAR_3,
          struct efa_ucontext *VAR_4,
          u64 VAR_5, u64 VAR_6)
{
 struct efa_mmap_entry *VAR_7;
 u64 VAR_8;

 VAR_8 = (VAR_5 & VAR_0) >> VAR_1;
 if (VAR_8 > VAR_2)
  return ((void*)0);

 VAR_7 = FUNC_2(&VAR_4->mmap_xa, VAR_8);
 if (!VAR_7 || FUNC_0(VAR_7) != VAR_5 || VAR_7->length != VAR_6)
  return ((void*)0);

 FUNC_1(&VAR_3->ibdev,
    "mmap: obj[0x%p] key[%#llx] addr[%#llx] len[%#llx] removed\n",
    VAR_7->obj, VAR_5, VAR_7->address, VAR_7->length);

 return VAR_7;
}
