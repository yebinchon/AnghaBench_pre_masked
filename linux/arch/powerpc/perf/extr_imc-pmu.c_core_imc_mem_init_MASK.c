
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct imc_mem_info {int id; int * vbase; } ;
struct TYPE_4__ {struct imc_mem_info* mem_info; } ;
struct TYPE_3__ {int id; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*) ;
 struct page* FUNC_1 (int,int,int ) ;
 TYPE_2__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int * FUNC_8 (struct page*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_9(int VAR_9, int VAR_10)
{
 int VAR_11, VAR_12 = 0, VAR_13 = (VAR_9 / VAR_8);
 struct imc_mem_info *VAR_14;
 struct page *VAR_15;





 VAR_11 = FUNC_2(VAR_9);
 VAR_14 = &VAR_6->mem_info[VAR_13];
 VAR_14->id = VAR_13;


 VAR_15 = FUNC_1(VAR_11,
    VAR_1 | VAR_5 | VAR_4 |
    VAR_3, FUNC_5(VAR_10));
 if (!VAR_15)
  return -VAR_0;
 VAR_14->vbase = FUNC_8(VAR_15);


 VAR_7[VAR_13].id = VAR_13;
 FUNC_6(&VAR_7[VAR_13].lock);

 VAR_12 = FUNC_7(VAR_2,
    FUNC_0((void *)VAR_14->vbase),
    FUNC_4(VAR_9));
 if (VAR_12) {
  FUNC_3((u64)VAR_14->vbase, FUNC_5(VAR_10));
  VAR_14->vbase = ((void*)0);
 }

 return VAR_12;
}
