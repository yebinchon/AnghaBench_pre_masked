
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
struct TYPE_2__ {scalar_t__ mr_size; } ;


 int FUNC_0 (int ,int ,int *,int ) ;
 long VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;
 long VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(void *VAR_13)
{
 vm_paddr_t VAR_14;
 int VAR_15;

 VAR_14 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
  VAR_14 += VAR_8[VAR_15].mr_size;
 FUNC_4("real memory  = %lu (%lu MB)\n", VAR_14,
     VAR_14 / (1024 * 1024));
 VAR_6 = (long)VAR_14 / VAR_0;

 FUNC_7(&VAR_5);

 FUNC_2();
 FUNC_8();

 FUNC_0(VAR_7, VAR_11, ((void*)0),
     VAR_1);

 FUNC_4("avail memory = %lu (%lu MB)\n", FUNC_6() * VAR_0,
     FUNC_6() / ((1024 * 1024) / VAR_0));

 if (VAR_2)
  FUNC_4("machine: %s\n", VAR_9);

 FUNC_3(FUNC_5(VAR_12), FUNC_1(VAR_3), VAR_4);
}
