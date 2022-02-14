
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mca_record {int mr_status; } ;
struct cmc_state {int last_intr; int max_threshold; } ;
typedef enum scan_mode { ____Placeholder_scan_mode } scan_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 struct cmc_state** VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int,int,int ,int,int,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(enum scan_mode VAR_6, int VAR_7, int VAR_8, struct mca_record *VAR_9)
{
 struct cmc_state *VAR_10;
 uint64_t VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;


 VAR_10 = &VAR_3[FUNC_1(VAR_4)][VAR_7];
 VAR_11 = FUNC_2(FUNC_0(VAR_7));
 VAR_14 = (VAR_9->mr_status & VAR_2) >> 38;
 VAR_12 = VAR_11 & VAR_1;

 VAR_13 = FUNC_3(VAR_6, VAR_8, VAR_10->last_intr, VAR_14,
     VAR_12, VAR_10->max_threshold);

 if (VAR_6 == VAR_0 && VAR_8)
  VAR_10->last_intr = VAR_5;
 if (VAR_13 != VAR_12) {
  VAR_11 &= ~VAR_1;
  VAR_11 |= VAR_13;
  FUNC_4(FUNC_0(VAR_7), VAR_11);
 }
}
