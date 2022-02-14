
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ tmpbuf; int mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,void*,scalar_t__) ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,char*,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(uint64_t *VAR_5, uint64_t *VAR_6)
{

 if (!FUNC_3(&VAR_3.mtx))
  FUNC_2(&VAR_3.mtx, "uart_opal", ((void*)0),
      VAR_2 | VAR_1 | VAR_0);

 if (!VAR_4)
  return;

 FUNC_4(&VAR_3.mtx);

 VAR_3.size = *(uint64_t *)(*VAR_6) =
     FUNC_1(sizeof(VAR_3.tmpbuf), *(uint64_t *)(*VAR_6));
 FUNC_0(VAR_3.tmpbuf, (void *)(*VAR_5),
     *(uint64_t *)(*VAR_6));
 *VAR_5 = (uint64_t)VAR_3.tmpbuf;
 *VAR_6 = (uint64_t)&VAR_3.size;
}
