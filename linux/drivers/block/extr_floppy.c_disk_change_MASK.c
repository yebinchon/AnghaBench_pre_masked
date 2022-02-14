
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dor; } ;
struct TYPE_5__ {int flags; scalar_t__ select_delay; } ;
struct TYPE_4__ {int flags; scalar_t__ keep_data; int last_checked; scalar_t__ maxblock; scalar_t__ select_date; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_2 (int) ;
 TYPE_2__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int*) ;
 int ** VAR_10 ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (int ) ;
 int* VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ,int*) ;
 int FUNC_8 (int ,int*) ;
 scalar_t__ FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(int VAR_13)
{
 int VAR_14 = FUNC_1(VAR_13);

 if (FUNC_9(VAR_12, VAR_9->select_date + VAR_8->select_delay))
  FUNC_0("WARNING disk change called early\n");
 if (!(VAR_0->dor & (0x10 << FUNC_3(VAR_13))) ||
     (VAR_0->dor & 3) != FUNC_3(VAR_13) || VAR_14 != FUNC_1(VAR_13)) {
  FUNC_0("probing disk change on unselected drive\n");
  FUNC_0("drive=%d fdc=%d dor=%x\n", VAR_13, FUNC_1(VAR_13),
         (unsigned int)VAR_0->dor);
 }

 FUNC_5(VAR_8->flags,
    "checking disk change line for drive %d\n", VAR_13);
 FUNC_5(VAR_8->flags, "jiffies=%lu\n", VAR_12);
 FUNC_5(VAR_8->flags, "disk change line=%x\n", FUNC_6(VAR_2) & 0x80);
 FUNC_5(VAR_8->flags, "flags=%lx\n", VAR_9->flags);

 if (VAR_8->flags & VAR_1)
  return FUNC_8(VAR_3, &VAR_9->flags);
 if ((FUNC_6(VAR_2) ^ VAR_8->flags) & 0x80) {
  FUNC_7(VAR_5, &VAR_9->flags);


  if (VAR_9->maxblock)
   FUNC_7(VAR_3, &VAR_9->flags);


  if (VAR_9->keep_data >= 0) {
   if ((VAR_8->flags & VAR_6) &&
       VAR_10[VAR_13] != ((void*)0))
    FUNC_0("Disk type is undefined after disk change\n");
   VAR_10[VAR_13] = ((void*)0);
   VAR_11[FUNC_2(VAR_13)] = VAR_7 << 1;
  }

  return 1;
 } else {
  VAR_9->last_checked = VAR_12;
  FUNC_4(VAR_4, &VAR_9->flags);
 }
 return 0;
}
