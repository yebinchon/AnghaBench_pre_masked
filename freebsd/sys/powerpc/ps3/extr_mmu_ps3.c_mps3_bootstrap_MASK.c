
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint64_t ;
struct lpteg {int dummy; } ;
typedef int mmu_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,unsigned long,int *,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *,char*,int *,int ) ;

__attribute__((used)) static void
FUNC_7(mmu_t VAR_4, vm_offset_t VAR_5, vm_offset_t VAR_6)
{
 uint64_t VAR_7;

 FUNC_6(&VAR_2, "page table", ((void*)0), VAR_0);

 FUNC_3(VAR_4, VAR_5, VAR_6);


 FUNC_1(0);


 FUNC_0(
     20 , 2 ,
     (24UL << 56) | (16UL << 48) ,
     &VAR_3, &VAR_7
 );

 FUNC_2(VAR_3);

 VAR_1 = VAR_7 / sizeof(struct lpteg);

 FUNC_5(VAR_4, VAR_5, VAR_6);
 FUNC_4(VAR_4, VAR_5, VAR_6);
}
