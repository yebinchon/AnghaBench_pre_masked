
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_umem {size_t length; unsigned long address; int owning_mm; int writable; int ibdev; } ;
struct ib_umem_odp {int page_shift; struct ib_umem umem; int is_implicit_odp; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_umem_odp* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ib_umem_odp*) ;
 int FUNC_3 (struct ib_umem_odp*) ;
 struct ib_umem_odp* FUNC_4 (int,int ) ;

struct ib_umem_odp *FUNC_5(struct ib_umem_odp *VAR_4,
         unsigned long VAR_5, size_t VAR_6)
{




 struct ib_umem_odp *VAR_7;
 struct ib_umem *VAR_8;
 int VAR_9;

 if (FUNC_1(!VAR_4->is_implicit_odp))
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);
 VAR_8 = &VAR_7->umem;
 VAR_8->ibdev = VAR_4->umem.ibdev;
 VAR_8->length = VAR_6;
 VAR_8->address = VAR_5;
 VAR_8->writable = VAR_4->umem.writable;
 VAR_8->owning_mm = VAR_4->umem.owning_mm;
 VAR_7->page_shift = VAR_3;

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9) {
  FUNC_3(VAR_7);
  return FUNC_0(VAR_9);
 }
 return VAR_7;
}
