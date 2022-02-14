
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int num_matches; size_t match_buf_len; int num_patterns; size_t pattern_buf_len; scalar_t__ status; TYPE_6__* matches; TYPE_6__* patterns; } ;
struct TYPE_8__ {int status; int func_code; } ;
union ccb {TYPE_5__ cdm; TYPE_2__ ccb_h; } ;
struct dev_match_result {int dummy; } ;
struct dev_match_pattern {int dummy; } ;
struct bus_match_pattern {int flags; scalar_t__ bus_id; int unit_number; int dev_name; } ;
typedef int path_id_t ;
typedef int ccb ;
struct TYPE_9__ {int path_id; } ;
struct TYPE_10__ {TYPE_3__ bus_result; } ;
struct TYPE_7__ {struct bus_match_pattern bus_pattern; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_4__ result; TYPE_1__ pattern; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (union ccb*,int) ;
 void* FUNC_1 (int,size_t) ;
 int VAR_12 ;
 int FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (int ,int ,union ccb*) ;
 int VAR_13 ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (char*,int,scalar_t__) ;
 scalar_t__ FUNC_6 () ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_7(path_id_t *VAR_15)
{
 struct bus_match_pattern *VAR_16;
 union ccb VAR_17;
 size_t VAR_18;
 int VAR_19;

 if (FUNC_6() < 0)
  return (VAR_10);


 FUNC_0(&VAR_17, sizeof(VAR_17));

 VAR_17.ccb_h.func_code = VAR_11;

 VAR_18 = sizeof(struct dev_match_result) * 1;
 VAR_17.cdm.num_matches = 0;
 VAR_17.cdm.match_buf_len = VAR_18;
 VAR_17.cdm.matches = FUNC_1(1, VAR_18);

 VAR_18 = sizeof(struct dev_match_pattern) * 1;
 VAR_17.cdm.num_patterns = 1;
 VAR_17.cdm.pattern_buf_len = VAR_18;
 VAR_17.cdm.patterns = FUNC_1(1, VAR_18);


 VAR_17.cdm.patterns[0].type = VAR_7;
 VAR_16 = &VAR_17.cdm.patterns[0].pattern.bus_pattern;
 FUNC_4(VAR_16->dev_name, sizeof(VAR_16->dev_name), "mpt");
 VAR_16->unit_number = VAR_13;
 VAR_16->bus_id = 0;
 VAR_16->flags = VAR_1 | VAR_2 | VAR_0;

 if (FUNC_3(VAR_14, VAR_3, &VAR_17) < 0) {
  VAR_19 = VAR_12;
  FUNC_2(VAR_17.cdm.matches);
  FUNC_2(VAR_17.cdm.patterns);
  return (VAR_19);
 }
 FUNC_2(VAR_17.cdm.patterns);

 if (((VAR_17.ccb_h.status & VAR_6) != VAR_5) ||
     (VAR_17.cdm.status != VAR_4)) {
  FUNC_5("fetch_path_id got CAM error %#x, CDM error %d\n",
      VAR_17.ccb_h.status, VAR_17.cdm.status);
  FUNC_2(VAR_17.cdm.matches);
  return (VAR_8);
 }


 if (VAR_17.cdm.num_matches != 1 ||
     VAR_17.cdm.matches[0].type != VAR_7) {
  FUNC_2(VAR_17.cdm.matches);
  return (VAR_9);
 }
 *VAR_15 = VAR_17.cdm.matches[0].result.bus_result.path_id;
 FUNC_2(VAR_17.cdm.matches);
 return (0);
}
