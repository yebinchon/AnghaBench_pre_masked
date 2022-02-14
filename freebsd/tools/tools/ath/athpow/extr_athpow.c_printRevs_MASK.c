
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ah_devid; int ah_subvendorid; int ah_macVersion; int ah_macRev; int ah_phyRev; int ah_analog5GhzRev; int ah_analog2GhzRev; } ;
typedef TYPE_1__ HAL_REVS ;
typedef int FILE ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int *,char*,int,int,...) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_0, const HAL_REVS *VAR_1)
{
 const char *VAR_2;

 FUNC_3(VAR_0, "PCI device id 0x%x subvendor id 0x%x\n",
  VAR_1->ah_devid, VAR_1->ah_subvendorid);
 FUNC_3(VAR_0, "mac %d.%d phy %d.%d"
  , VAR_1->ah_macVersion, VAR_1->ah_macRev
  , VAR_1->ah_phyRev >> 4, VAR_1->ah_phyRev & 0xf
 );
 VAR_2 = FUNC_2(VAR_1) ? "5413" :
      FUNC_0(VAR_1) ? "2413" :
      FUNC_1(VAR_1) ? "5112" :
        "5111";
 if (VAR_1->ah_analog5GhzRev && VAR_1->ah_analog2GhzRev)
  FUNC_3(VAR_0, " 5ghz radio %d.%d 2ghz radio %d.%d (%s)\n"
   , VAR_1->ah_analog5GhzRev >> 4
   , VAR_1->ah_analog5GhzRev & 0xf
   , VAR_1->ah_analog2GhzRev >> 4
   , VAR_1->ah_analog2GhzRev & 0xf
   , VAR_2
  );
 else
  FUNC_3(VAR_0, " radio %d.%d (%s)\n"
   , VAR_1->ah_analog5GhzRev >> 4
   , VAR_1->ah_analog5GhzRev & 0xf
   , VAR_2
  );
}
