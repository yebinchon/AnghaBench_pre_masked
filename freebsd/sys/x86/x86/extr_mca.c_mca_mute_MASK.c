
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_record {scalar_t__ mr_bank; int mr_status; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(const struct mca_record *VAR_4)
{
 if (VAR_2 == VAR_0 &&
     FUNC_0(VAR_1) == 0x6 &&
     (FUNC_1(VAR_1) == 0x3c ||
     FUNC_1(VAR_1) == 0x3d ||
     FUNC_1(VAR_1) == 0x45 ||
     FUNC_1(VAR_1) == 0x46) &&
     VAR_4->mr_bank == 0 &&
     (VAR_4->mr_status & 0xa0000000ffffffff) == 0x80000000000f0005 &&
     !VAR_3)
      return (1);

 return (0);
}
