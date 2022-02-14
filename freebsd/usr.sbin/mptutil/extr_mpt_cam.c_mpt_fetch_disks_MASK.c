
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {size_t num_matches; size_t match_buf_len; int num_patterns; size_t pattern_buf_len; scalar_t__ status; TYPE_5__* matches; TYPE_5__* patterns; } ;
struct TYPE_10__ {int status; int func_code; } ;
union ccb {TYPE_4__ cdm; TYPE_2__ ccb_h; } ;
typedef size_t uint32_t ;
struct periph_match_result {char* periph_name; int unit_number; int target_id; } ;
struct periph_match_pattern {int flags; int periph_name; int path_id; } ;
struct mpt_standalone_disk {int devname; int target; scalar_t__ bus; } ;
struct dev_match_result {int dummy; } ;
struct dev_match_pattern {int dummy; } ;
struct cam_device {int dummy; } ;
typedef int path_id_t ;
typedef int ccb ;
struct TYPE_11__ {struct periph_match_result periph_result; } ;
struct TYPE_9__ {struct periph_match_pattern periph_pattern; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_3__ result; TYPE_1__ pattern; } ;
typedef TYPE_5__ CONFIG_PAGE_IOC_2 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (union ccb*,int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (struct cam_device*) ;
 struct cam_device* FUNC_3 (int ,int ) ;
 int VAR_12 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cam_device*,struct mpt_standalone_disk*) ;
 int FUNC_6 (struct cam_device*,struct mpt_standalone_disk*) ;
 int FUNC_7 (TYPE_5__*) ;
 scalar_t__ FUNC_8 (int ,int ,union ccb*) ;
 TYPE_5__* FUNC_9 (int,int,int *) ;
 scalar_t__ FUNC_10 (TYPE_5__*,struct periph_match_result*) ;
 int FUNC_11 (int ,int,char*,...) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 () ;
 int VAR_13 ;

int
FUNC_14(int VAR_14, int *VAR_15, struct mpt_standalone_disk **VAR_16)
{
 CONFIG_PAGE_IOC_2 *VAR_17;
 struct mpt_standalone_disk *VAR_18;
 struct periph_match_pattern *VAR_19;
 struct periph_match_result *VAR_20;
 struct cam_device *VAR_21;
 union ccb VAR_22;
 path_id_t VAR_23;
 size_t VAR_24;
 int VAR_25, VAR_26;
 uint32_t VAR_27;

 if (FUNC_13() < 0)
  return (VAR_7);

 VAR_26 = FUNC_4(&VAR_23);
 if (VAR_26)
  return (VAR_26);

 for (VAR_25 = 100;; VAR_25+= 100) {

  FUNC_0(&VAR_22, sizeof(VAR_22));

  VAR_22.ccb_h.func_code = VAR_11;

  VAR_24 = sizeof(struct dev_match_result) * (VAR_25 + 1);
  VAR_22.cdm.num_matches = 0;
  VAR_22.cdm.match_buf_len = VAR_24;
  VAR_22.cdm.matches = FUNC_1(1, VAR_24);

  VAR_24 = sizeof(struct dev_match_pattern) * 1;
  VAR_22.cdm.num_patterns = 1;
  VAR_22.cdm.pattern_buf_len = VAR_24;
  VAR_22.cdm.patterns = FUNC_1(1, VAR_24);


  VAR_22.cdm.patterns[0].type = VAR_5;
  VAR_19 = &VAR_22.cdm.patterns[0].pattern.periph_pattern;
  VAR_19->path_id = VAR_23;
  FUNC_11(VAR_19->periph_name, sizeof(VAR_19->periph_name), "da");
  VAR_19->flags = VAR_10 | VAR_9;

  if (FUNC_8(VAR_13, VAR_0, &VAR_22) < 0) {
   VAR_26 = VAR_12;
   FUNC_7(VAR_22.cdm.matches);
   FUNC_7(VAR_22.cdm.patterns);
   return (VAR_26);
  }
  FUNC_7(VAR_22.cdm.patterns);


  if ((VAR_22.ccb_h.status & VAR_4) != VAR_3) {
   FUNC_7(VAR_22.cdm.matches);
   return (VAR_6);
  }


  if (VAR_22.cdm.status == VAR_2) {
   FUNC_7(VAR_22.cdm.matches);
   continue;
  }


  if (VAR_22.cdm.status != VAR_1) {
   FUNC_7(VAR_22.cdm.matches);
   return (VAR_6);
  }
  break;
 }


 if (VAR_22.cdm.num_matches == 0) {
  FUNC_7(VAR_22.cdm.matches);
  *VAR_15 = 0;
  *VAR_16 = ((void*)0);
  return (0);
 }


 for (VAR_27 = 0; VAR_27 < VAR_22.cdm.num_matches; VAR_27++) {
  if (VAR_22.cdm.matches[VAR_27].type != VAR_5) {
   FUNC_12("mpt_fetch_disks got wrong CAM matches");
   FUNC_7(VAR_22.cdm.matches);
   return (VAR_6);
  }
 }






 VAR_17 = FUNC_9(VAR_14, 2, ((void*)0));
 if (VAR_17 == ((void*)0))
  return (VAR_12);
 VAR_18 = FUNC_1(VAR_22.cdm.num_matches, sizeof(*VAR_18));
 VAR_25 = 0;
 for (VAR_27 = 0; VAR_27 < VAR_22.cdm.num_matches; VAR_27++) {
  VAR_20 = &VAR_22.cdm.matches[VAR_27].result.periph_result;
  if (FUNC_10(VAR_17, VAR_20))
   continue;
  VAR_18[VAR_25].bus = 0;
  VAR_18[VAR_25].target = VAR_20->target_id;
  FUNC_11(VAR_18[VAR_25].devname, sizeof(VAR_18[VAR_25].devname),
      "%s%d", VAR_20->periph_name, VAR_20->unit_number);

  VAR_21 = FUNC_3(VAR_18[VAR_25].devname, VAR_8);
  if (VAR_21 != ((void*)0)) {
   FUNC_5(VAR_21, &VAR_18[VAR_25]);
   FUNC_6(VAR_21, &VAR_18[VAR_25]);
   FUNC_2(VAR_21);
  }
  VAR_25++;
 }
 FUNC_7(VAR_22.cdm.matches);
 FUNC_7(VAR_17);

 *VAR_15 = VAR_25;
 *VAR_16 = VAR_18;
 return (0);
}
