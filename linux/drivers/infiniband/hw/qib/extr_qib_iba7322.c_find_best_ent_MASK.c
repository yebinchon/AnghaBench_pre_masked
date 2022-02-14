
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct txdds_ent {int dummy; } ;
struct vendor_txdds_ent {struct txdds_ent qdr; struct txdds_ent ddr; struct txdds_ent sdr; int partnum; int oui; } ;
struct qib_qsfp_cache {scalar_t__* atten; int tech; int partnum; int oui; } ;
struct qib_pportdata {int port; TYPE_3__* dd; TYPE_2__* cpspec; } ;
struct TYPE_7__ {int board_atten; int unit; } ;
struct TYPE_5__ {struct qib_qsfp_cache cache; } ;
struct TYPE_6__ {int no_eep; TYPE_1__ qsfp_data; } ;


 int FUNC_0 (struct vendor_txdds_ent*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct txdds_ent* FUNC_5 (struct txdds_ent*,scalar_t__) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*,int ,int ,int) ;
 int VAR_5 ;
 struct txdds_ent* VAR_6 ;
 struct txdds_ent* VAR_7 ;
 struct txdds_ent* VAR_8 ;
 struct txdds_ent* VAR_9 ;
 struct txdds_ent* VAR_10 ;
 struct txdds_ent* VAR_11 ;
 struct txdds_ent* VAR_12 ;
 struct vendor_txdds_ent* VAR_13 ;

__attribute__((used)) static void FUNC_8(struct qib_pportdata *VAR_14,
     const struct txdds_ent **VAR_15,
     const struct txdds_ent **VAR_16,
     const struct txdds_ent **VAR_17, int VAR_18)
{
 struct qib_qsfp_cache *VAR_19 = &VAR_14->cpspec->qsfp_data.cache;
 int VAR_20;


 for (VAR_20 = 0; !VAR_18 && VAR_20 < FUNC_0(VAR_13); ++VAR_20) {
  const struct vendor_txdds_ent *VAR_21 = VAR_13 + VAR_20;

  if (!FUNC_6(VAR_21->oui, VAR_19->oui, VAR_1) &&
      (!VAR_21->partnum ||
       !FUNC_6(VAR_21->partnum, VAR_19->partnum, VAR_0))) {
   *VAR_15 = &VAR_21->sdr;
   *VAR_16 = &VAR_21->ddr;
   *VAR_17 = &VAR_21->qdr;
   return;
  }
 }



 if (!VAR_18 && FUNC_4(VAR_19->tech)) {
  *VAR_15 = VAR_12 + VAR_14->dd->board_atten;
  *VAR_16 = VAR_6 + VAR_14->dd->board_atten;
  *VAR_17 = VAR_11 + VAR_14->dd->board_atten;
  return;
 }

 if (!VAR_18 && FUNC_3(VAR_19->tech) && (VAR_19->atten[0] ||
            VAR_19->atten[1])) {
  *VAR_15 = FUNC_5(VAR_12, VAR_19->atten[0]);
  *VAR_16 = FUNC_5(VAR_6, VAR_19->atten[0]);
  *VAR_17 = FUNC_5(VAR_11, VAR_19->atten[1]);
  return;
 } else if (VAR_14->cpspec->no_eep < VAR_4) {






  VAR_20 = VAR_14->cpspec->no_eep;
  *VAR_15 = &VAR_12[VAR_20];
  *VAR_16 = &VAR_6[VAR_20];
  *VAR_17 = &VAR_11[VAR_20];
 } else if (VAR_14->cpspec->no_eep < (VAR_4 + VAR_2)) {

  VAR_20 = VAR_14->cpspec->no_eep - VAR_4;
  *VAR_15 = &VAR_10[VAR_20];
  *VAR_16 = &VAR_7[VAR_20];
  *VAR_17 = &VAR_9[VAR_20];
 } else if ((FUNC_1(VAR_14->dd) || FUNC_2(VAR_14->dd)) &&
     VAR_14->cpspec->no_eep < (VAR_4 + VAR_2 +
       VAR_3)) {
  VAR_20 = VAR_14->cpspec->no_eep - (VAR_4 + VAR_2);
  FUNC_7("IB%u:%u use idx %u into txdds_mfg\n",
   VAR_14->dd->unit, VAR_14->port, VAR_20);
  *VAR_15 = &VAR_8[VAR_20];
  *VAR_16 = &VAR_8[VAR_20];
  *VAR_17 = &VAR_8[VAR_20];
 } else {

  *VAR_15 = VAR_12 + VAR_5;
  *VAR_16 = VAR_6 + VAR_5;
  *VAR_17 = VAR_11 + VAR_5;
 }
}
