
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned long avail_in; unsigned long avail_out; unsigned long total_out; void* next_out; void* next_in; } ;
typedef TYPE_1__ git_zstream ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 unsigned long FUNC_2 (TYPE_1__*,unsigned long) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_2 ;
 void* FUNC_5 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_6(void **VAR_3, unsigned long VAR_4)
{
 git_zstream VAR_5;
 void *VAR_6, *VAR_7;
 unsigned long VAR_8;

 FUNC_4(&VAR_5, VAR_2);
 VAR_8 = FUNC_2(&VAR_5, VAR_4);

 VAR_6 = *VAR_3;
 VAR_7 = FUNC_5(VAR_8);
 *VAR_3 = VAR_7;

 VAR_5.next_in = VAR_6;
 VAR_5.avail_in = VAR_4;
 VAR_5.next_out = VAR_7;
 VAR_5.avail_out = VAR_8;
 while (FUNC_1(&VAR_5, VAR_0) == VAR_1)
  ;
 FUNC_3(&VAR_5);

 FUNC_0(VAR_6);
 return VAR_5.total_out;
}
