
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtget {scalar_t__ mt_dsreg; scalar_t__ mt_resid; scalar_t__ mt_fileno; scalar_t__ mt_blkno; int mt_comp3; int mt_density3; int mt_blksiz3; int mt_comp2; int mt_density2; int mt_blksiz2; int mt_comp1; int mt_density1; int mt_blksiz1; int mt_comp0; int mt_density0; int mt_blksiz0; int mt_comp; int mt_density; int mt_blksiz; } ;
typedef scalar_t__ daddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char const*,...) ;
 int FUNC_6 (char*,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct mtget *VAR_2)
{
 FUNC_5("Mode      Density              Blocksize      bpi      "
        "Compression\n"
        "Current:  %-17s    %-12s   %-7d  %s\n"
        "---------available modes---------\n"
        "0:        %-17s    %-12s   %-7d  %s\n"
        "1:        %-17s    %-12s   %-7d  %s\n"
        "2:        %-17s    %-12s   %-7d  %s\n"
        "3:        %-17s    %-12s   %-7d  %s\n",
        FUNC_1(VAR_2->mt_density), FUNC_3(VAR_2->mt_blksiz),
        FUNC_4(VAR_2->mt_density, VAR_1), FUNC_0(VAR_2->mt_comp),
        FUNC_1(VAR_2->mt_density0), FUNC_3(VAR_2->mt_blksiz0),
        FUNC_4(VAR_2->mt_density0, VAR_1), FUNC_0(VAR_2->mt_comp0),
        FUNC_1(VAR_2->mt_density1), FUNC_3(VAR_2->mt_blksiz1),
        FUNC_4(VAR_2->mt_density1, VAR_1), FUNC_0(VAR_2->mt_comp1),
        FUNC_1(VAR_2->mt_density2), FUNC_3(VAR_2->mt_blksiz2),
        FUNC_4(VAR_2->mt_density2, VAR_1), FUNC_0(VAR_2->mt_comp2),
        FUNC_1(VAR_2->mt_density3), FUNC_3(VAR_2->mt_blksiz3),
        FUNC_4(VAR_2->mt_density3, VAR_1), FUNC_0(VAR_2->mt_comp3));

 if (VAR_2->mt_dsreg != VAR_0) {
  const char VAR_3[] = "Current Driver State: %s.\n";
  FUNC_5("---------------------------------\n");
  const char *VAR_4;

  VAR_4 = FUNC_2(VAR_2->mt_dsreg);
  if (VAR_4 == ((void*)0)) {
   char VAR_5[32];
   (void) FUNC_6(VAR_5, "Unknown state 0x%x", VAR_2->mt_dsreg);
   FUNC_5(VAR_3, VAR_5);
  } else {
   FUNC_5(VAR_3, VAR_4);
  }
 }
 if (VAR_2->mt_resid == 0 && VAR_2->mt_fileno == (daddr_t) -1 &&
     VAR_2->mt_blkno == (daddr_t) -1)
  return;
 FUNC_5("---------------------------------\n");
 FUNC_5("File Number: %ld\tRecord Number: %ld\tResidual Count %ld\n",
     VAR_2->mt_fileno, VAR_2->mt_blkno, VAR_2->mt_resid);
}
