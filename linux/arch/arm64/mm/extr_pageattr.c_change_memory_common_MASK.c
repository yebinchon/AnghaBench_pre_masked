
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct vm_struct {unsigned long size; int flags; int nr_pages; int * pages; scalar_t__ addr; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long,unsigned long,int ,int ) ;
 struct vm_struct* FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(unsigned long VAR_6, int VAR_7,
    pgprot_t VAR_8, pgprot_t VAR_9)
{
 unsigned long VAR_10 = VAR_6;
 unsigned long VAR_11 = VAR_2*VAR_7;
 unsigned long VAR_12 = VAR_10 + VAR_11;
 struct vm_struct *VAR_13;
 int VAR_14;

 if (!FUNC_0(VAR_6)) {
  VAR_10 &= VAR_1;
  VAR_12 = VAR_10 + VAR_11;
  FUNC_1(1);
 }
 VAR_13 = FUNC_3((void *)VAR_6);
 if (!VAR_13 ||
     VAR_12 > (unsigned long)VAR_13->addr + VAR_13->size ||
     !(VAR_13->flags & VAR_4))
  return -VAR_0;

 if (!VAR_7)
  return 0;





 if (VAR_5 && (FUNC_5(VAR_8) == VAR_3 ||
       FUNC_5(VAR_9) == VAR_3)) {
  for (VAR_14 = 0; VAR_14 < VAR_13->nr_pages; VAR_14++) {
   FUNC_2((u64)FUNC_4(VAR_13->pages[VAR_14]),
            VAR_2, VAR_8, VAR_9);
  }
 }





 FUNC_6();

 return FUNC_2(VAR_10, VAR_11, VAR_8, VAR_9);
}
