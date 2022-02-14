
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct multicall_space {int mc; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef enum pt_level { ____Placeholder_pt_level } pt_level ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct page*) ;
 unsigned int FUNC_2 (struct page*) ;
 int VAR_4 ;
 struct multicall_space FUNC_3 (int ) ;
 void* FUNC_4 (struct page*) ;
 unsigned long FUNC_5 (struct page*) ;
 int FUNC_6 (unsigned long,int ) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,int *) ;
 int * FUNC_9 (struct page*,struct mm_struct*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(struct mm_struct *VAR_6, struct page *VAR_7,
   enum pt_level VAR_8)
{
 unsigned VAR_9 = FUNC_2(VAR_7);
 int VAR_10;

 if (VAR_9)
  VAR_10 = 0;
 else if (FUNC_1(VAR_7))


  VAR_10 = 1;
 else {
  void *VAR_11 = FUNC_4(VAR_7);
  unsigned long VAR_12 = FUNC_5(VAR_7);
  struct multicall_space VAR_13 = FUNC_3(0);
  spinlock_t *VAR_14;

  VAR_10 = 0;
  VAR_14 = ((void*)0);
  if (VAR_8 == VAR_3)
   VAR_14 = FUNC_9(VAR_7, VAR_6);

  FUNC_0(VAR_13.mc, (unsigned long)VAR_11,
     FUNC_6(VAR_12, VAR_1),
     VAR_8 == VAR_2 ? VAR_4 : 0);

  if (VAR_14) {
   FUNC_7(VAR_0, VAR_12);



   FUNC_8(VAR_5, VAR_14);
  }
 }

 return VAR_10;
}
