
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned long avail_in; unsigned long avail_out; unsigned long total_out; void* next_out; void* next_in; } ;
typedef TYPE_1__ git_zstream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 unsigned long FUNC_2 (TYPE_1__*,unsigned long) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 void* FUNC_5 (unsigned long) ;

__attribute__((used)) static void *FUNC_6(void *VAR_3, unsigned long VAR_4,
         int VAR_5,
         unsigned long *VAR_6)
{
 git_zstream VAR_7;
 unsigned long VAR_8;
 void *VAR_9;
 int VAR_10;

 FUNC_4(&VAR_7, VAR_5);
 VAR_8 = FUNC_2(&VAR_7, VAR_4);
 VAR_9 = FUNC_5(VAR_8);

 VAR_7.next_in = VAR_3;
 VAR_7.avail_in = VAR_4;
 VAR_7.next_out = VAR_9;
 VAR_7.avail_out = VAR_8;

 do {
  VAR_10 = FUNC_1(&VAR_7, VAR_0);
 } while (VAR_10 == VAR_1);

 if (VAR_10 != VAR_2) {
  FUNC_0(VAR_9);
  return ((void*)0);
 }

 FUNC_3(&VAR_7);
 *VAR_6 = VAR_7.total_out;

 return VAR_9;
}
