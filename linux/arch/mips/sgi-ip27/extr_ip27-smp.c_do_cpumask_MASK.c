
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int nasid_t ;
struct TYPE_12__ {scalar_t__ brd_nasid; } ;
typedef TYPE_2__ lboard_t ;
typedef int klinfo_t ;
struct TYPE_11__ {size_t virtid; int flags; } ;
struct TYPE_13__ {TYPE_1__ cpu_info; } ;
typedef TYPE_3__ klcpu_t ;
typedef size_t cpuid_t ;
typedef int cnodeid_t ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (size_t,int) ;
 int * VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (size_t,int) ;

__attribute__((used)) static int FUNC_8(cnodeid_t VAR_5, nasid_t VAR_6, int VAR_7)
{
 static int VAR_8 = 0;
 lboard_t *VAR_9;
 klcpu_t *VAR_10;
 int VAR_11 = 0;
 cpuid_t VAR_12;

 VAR_9 = FUNC_5((lboard_t *)FUNC_1(VAR_6), VAR_2);

 do {
  VAR_10 = (klcpu_t *)FUNC_4(VAR_9, VAR_1);
  while (VAR_10) {
   VAR_12 = VAR_10->cpu_info.virtid;

   if (FUNC_6(VAR_9) == VAR_9->brd_nasid)
    VAR_4[VAR_12] = VAR_5;
   if (VAR_12 > VAR_7)
    VAR_7 = VAR_12;

   if ((VAR_10->cpu_info.flags & VAR_0) &&
       (VAR_8 != VAR_3)) {
    FUNC_7(VAR_12, 1);
    FUNC_2(VAR_12, VAR_8);
    VAR_11++;
    VAR_8++;
   }
   VAR_10 = (klcpu_t *)FUNC_3(VAR_9, (klinfo_t *)VAR_10,
        VAR_1);
  }
  VAR_9 = FUNC_0(VAR_9);
  if (!VAR_9)
   break;

  VAR_9 = FUNC_5(VAR_9, VAR_2);
 } while (VAR_9);

 return VAR_7;
}
