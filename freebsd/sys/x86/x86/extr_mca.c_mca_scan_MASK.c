
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mca_record {int mr_status; } ;
typedef enum scan_mode { ____Placeholder_scan_mode } scan_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int) ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,int,int,struct mca_record*) ;
 int FUNC_3 (int,struct mca_record*) ;
 int VAR_9 ;
 int FUNC_4 (struct mca_record*) ;
 int FUNC_5 (int,struct mca_record*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(enum scan_mode VAR_10, int *VAR_11)
{
 struct mca_record VAR_12;
 uint64_t VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_15 = 0;
 VAR_17 = 1;
 VAR_14 = VAR_5 | VAR_4;


 if (VAR_10 == VAR_1)
  VAR_14 |= VAR_3;
 VAR_13 = FUNC_8(VAR_6);
 for (VAR_16 = 0; VAR_16 < (VAR_13 & VAR_2); VAR_16++) {
  VAR_18 = FUNC_3(VAR_16, &VAR_12);
  if (VAR_18) {
   VAR_15++;
   if (VAR_12.mr_status & VAR_14) {
    VAR_17 = 0;
    FUNC_6(&VAR_9);
    FUNC_4(&VAR_12);
    FUNC_7(&VAR_9);
   }
   FUNC_5(VAR_10, &VAR_12);
  }
 }
 if (VAR_11 != ((void*)0))
  *VAR_11 = VAR_17;
 return (VAR_15);
}
