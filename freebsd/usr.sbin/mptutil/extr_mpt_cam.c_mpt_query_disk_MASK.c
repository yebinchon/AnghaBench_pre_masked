
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int num_matches; size_t match_buf_len; int num_patterns; size_t pattern_buf_len; scalar_t__ status; TYPE_5__* matches; TYPE_5__* patterns; } ;
struct TYPE_7__ {int status; int target_lun; int target_id; int path_id; int func_code; } ;
union ccb {TYPE_4__ cdm; TYPE_2__ ccb_h; } ;
struct periph_match_result {char* periph_name; int unit_number; } ;
struct periph_match_pattern {int flags; scalar_t__ target_id; int periph_name; int path_id; } ;
struct mpt_query_disk {int devname; } ;
struct dev_match_result {int dummy; } ;
struct dev_match_pattern {int dummy; } ;
typedef int path_id_t ;
typedef int ccb ;
typedef scalar_t__ U8 ;
struct TYPE_8__ {struct periph_match_result periph_result; } ;
struct TYPE_6__ {struct periph_match_pattern periph_pattern; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_3__ result; TYPE_1__ pattern; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (union ccb*,int) ;
 void* FUNC_1 (int,size_t) ;
 int VAR_15 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (int ,int ,union ccb*) ;
 int FUNC_5 (int ,int,char*,...) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 () ;
 int VAR_16 ;

int
FUNC_8(U8 VAR_17, U8 VAR_18, struct mpt_query_disk *VAR_19)
{
 struct periph_match_pattern *VAR_20;
 struct periph_match_result *VAR_21;
 union ccb VAR_22;
 path_id_t VAR_23;
 size_t VAR_24;
 int VAR_25;


 if (VAR_17 != 0)
  return (VAR_10);

 if (FUNC_7() < 0)
  return (VAR_10);


 VAR_25 = FUNC_2(&VAR_23);
 if (VAR_25)
  return (VAR_25);

 FUNC_0(&VAR_22, sizeof(VAR_22));

 VAR_22.ccb_h.func_code = VAR_14;
 VAR_22.ccb_h.path_id = VAR_6;
 VAR_22.ccb_h.target_id = VAR_5;
 VAR_22.ccb_h.target_lun = VAR_2;

 VAR_24 = sizeof(struct dev_match_result) * 5;
 VAR_22.cdm.num_matches = 0;
 VAR_22.cdm.match_buf_len = VAR_24;
 VAR_22.cdm.matches = FUNC_1(1, VAR_24);

 VAR_24 = sizeof(struct dev_match_pattern) * 1;
 VAR_22.cdm.num_patterns = 1;
 VAR_22.cdm.pattern_buf_len = VAR_24;
 VAR_22.cdm.patterns = FUNC_1(1, VAR_24);


 VAR_22.cdm.patterns[0].type = VAR_7;
 VAR_20 = &VAR_22.cdm.patterns[0].pattern.periph_pattern;
 VAR_20->path_id = VAR_23;
 FUNC_5(VAR_20->periph_name, sizeof(VAR_20->periph_name), "da");
 VAR_20->target_id = VAR_18;
 VAR_20->flags = VAR_12 | VAR_11 | VAR_13;

 if (FUNC_4(VAR_16, VAR_0, &VAR_22) < 0) {
  VAR_25 = VAR_15;
  FUNC_3(VAR_22.cdm.matches);
  FUNC_3(VAR_22.cdm.patterns);
  return (VAR_25);
 }
 FUNC_3(VAR_22.cdm.patterns);

 if (((VAR_22.ccb_h.status & VAR_4) != VAR_3) ||
     (VAR_22.cdm.status != VAR_1)) {
  FUNC_6("mpt_query_disk got CAM error %#x, CDM error %d\n",
      VAR_22.ccb_h.status, VAR_22.cdm.status);
  FUNC_3(VAR_22.cdm.matches);
  return (VAR_8);
 }






 if (VAR_22.cdm.num_matches == 0) {
  FUNC_3(VAR_22.cdm.matches);
  return (VAR_9);
 }
 if (VAR_22.cdm.num_matches != 1) {
  FUNC_6("mpt_query_disk got %d matches, expected 1",
      VAR_22.cdm.num_matches);
  FUNC_3(VAR_22.cdm.matches);
  return (VAR_8);
 }
 if (VAR_22.cdm.matches[0].type != VAR_7) {
  FUNC_6("mpt_query_disk got wrong CAM match");
  FUNC_3(VAR_22.cdm.matches);
  return (VAR_8);
 }


 VAR_21 = &VAR_22.cdm.matches[1].result.periph_result;
 FUNC_5(VAR_19->devname, sizeof(VAR_19->devname), "%s%d", VAR_21->periph_name,
     VAR_21->unit_number);
 FUNC_3(VAR_22.cdm.matches);

 return (0);
}
