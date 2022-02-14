
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ib_mad_qp_info {TYPE_1__* qp; } ;
struct ib_mad_hdr {scalar_t__ base_version; scalar_t__ mgmt_class; scalar_t__ attr_id; scalar_t__ method; } ;
struct TYPE_2__ {scalar_t__ qp_num; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,scalar_t__,char*) ;

__attribute__((used)) static int FUNC_1(const struct ib_mad_hdr *VAR_7,
   const struct ib_mad_qp_info *VAR_8,
   bool VAR_9)
{
 int VAR_10 = 0;
 u32 VAR_11 = VAR_8->qp->qp_num;


 if (VAR_7->base_version != VAR_0 &&
     (!VAR_9 || VAR_7->base_version != VAR_6)) {
  FUNC_0("MAD received with unsupported base version %d %s\n",
         VAR_7->base_version, VAR_9 ? "(opa)" : "");
  goto out;
 }


 if ((VAR_7->mgmt_class == VAR_4) ||
     (VAR_7->mgmt_class == VAR_3)) {
  if (VAR_11 == 0)
   VAR_10 = 1;
 } else {

  if ((VAR_7->mgmt_class == VAR_2) &&
      (VAR_7->attr_id != VAR_1) &&
      (VAR_7->method != VAR_5))
   goto out;

  if (VAR_11 != 0)
   VAR_10 = 1;
 }

out:
 return VAR_10;
}
