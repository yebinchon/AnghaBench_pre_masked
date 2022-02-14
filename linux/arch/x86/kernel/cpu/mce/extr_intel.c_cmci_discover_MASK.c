
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ bios_cmci_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,unsigned long*) ;
 int FUNC_3 (int,unsigned long*) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 unsigned long* VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int,unsigned long*) ;
 scalar_t__ FUNC_9 (int,unsigned long*) ;
 unsigned long* FUNC_10 (int *) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static void FUNC_12(int VAR_8)
{
 unsigned long *VAR_9 = (void *)FUNC_10(&VAR_6);
 unsigned long VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 FUNC_5(&VAR_3, VAR_10);
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  u64 VAR_13;
  int VAR_14 = 0;

  if (FUNC_9(VAR_11, VAR_9))
   continue;


  if (FUNC_9(VAR_11, VAR_5))
   continue;

  FUNC_7(FUNC_0(VAR_11), VAR_13);


  if (VAR_13 & VAR_1) {
   FUNC_3(VAR_11, VAR_9);
   FUNC_2(VAR_11, FUNC_10(VAR_7));
   continue;
  }

  if (!VAR_4.bios_cmci_threshold) {
   VAR_13 &= ~VAR_2;
   VAR_13 |= VAR_0;
  } else if (!(VAR_13 & VAR_2)) {





   VAR_14 = 1;
   VAR_13 |= VAR_0;
  }

  VAR_13 |= VAR_1;
  FUNC_11(FUNC_0(VAR_11), VAR_13);
  FUNC_7(FUNC_0(VAR_11), VAR_13);


  if (VAR_13 & VAR_1) {
   FUNC_8(VAR_11, VAR_9);
   FUNC_2(VAR_11, FUNC_10(VAR_7));






   if (VAR_4.bios_cmci_threshold && VAR_14 &&
     (VAR_13 & VAR_2))
    VAR_12 = 1;
  } else {
   FUNC_1(!FUNC_9(VAR_11, FUNC_10(VAR_7)));
  }
 }
 FUNC_6(&VAR_3, VAR_10);
 if (VAR_4.bios_cmci_threshold && VAR_12) {
  FUNC_4(
   "bios_cmci_threshold: Some banks do not have valid thresholds set\n");
  FUNC_4(
   "bios_cmci_threshold: Make sure your BIOS supports this boot option\n");
 }
}
