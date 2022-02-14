
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rxe_mem {scalar_t__ state; TYPE_2__** map; } ;
struct TYPE_4__ {TYPE_1__* buf; } ;
struct TYPE_3__ {size_t size; scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rxe_mem*,scalar_t__,int*,int*,size_t*) ;
 scalar_t__ FUNC_1 (struct rxe_mem*,scalar_t__,int) ;
 int FUNC_2 (char*) ;

void *FUNC_3(struct rxe_mem *VAR_1, u64 VAR_2, int VAR_3)
{
 size_t VAR_4;
 int VAR_5, VAR_6;
 void *VAR_7;

 if (VAR_1->state != VAR_0) {
  FUNC_2("mem not in valid state\n");
  VAR_7 = ((void*)0);
  goto out;
 }

 if (!VAR_1->map) {
  VAR_7 = (void *)(uintptr_t)VAR_2;
  goto out;
 }

 if (FUNC_1(VAR_1, VAR_2, VAR_3)) {
  FUNC_2("range violation\n");
  VAR_7 = ((void*)0);
  goto out;
 }

 FUNC_0(VAR_1, VAR_2, &VAR_5, &VAR_6, &VAR_4);

 if (VAR_4 + VAR_3 > VAR_1->map[VAR_5]->buf[VAR_6].size) {
  FUNC_2("crosses page boundary\n");
  VAR_7 = ((void*)0);
  goto out;
 }

 VAR_7 = (void *)(uintptr_t)VAR_1->map[VAR_5]->buf[VAR_6].addr + VAR_4;

out:
 return VAR_7;
}
