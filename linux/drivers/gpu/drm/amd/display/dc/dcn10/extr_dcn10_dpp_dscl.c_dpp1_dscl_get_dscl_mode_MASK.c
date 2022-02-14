
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {long long const value; } ;
struct TYPE_11__ {long long const value; } ;
struct TYPE_10__ {long long const value; } ;
struct TYPE_9__ {long long const value; } ;
struct TYPE_13__ {TYPE_5__ vert_c; TYPE_4__ horz_c; TYPE_3__ vert; TYPE_2__ horz; } ;
struct scaler_data {scalar_t__ format; TYPE_6__ ratios; } ;
struct dpp {TYPE_1__* caps; } ;
typedef enum dscl_mode_sel { ____Placeholder_dscl_mode_sel } dscl_mode_sel ;
struct TYPE_14__ {long long value; } ;
struct TYPE_8__ {scalar_t__ dscl_data_proc_format; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_7__ VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static enum dscl_mode_sel FUNC_2(
  struct dpp *VAR_10,
  const struct scaler_data *VAR_11,
  bool VAR_12)
{
 const long long VAR_13 = VAR_9.value;

 if (VAR_10->caps->dscl_data_proc_format == VAR_0) {

  if (VAR_11->format == VAR_8)
   return VAR_1;
 }

 if (VAR_11->ratios.horz.value == VAR_13
   && VAR_11->ratios.vert.value == VAR_13
   && VAR_11->ratios.horz_c.value == VAR_13
   && VAR_11->ratios.vert_c.value == VAR_13
   && !VAR_12)
  return VAR_5;

 if (!FUNC_0(VAR_11->format)) {
  if (FUNC_1(VAR_11->format))
   return VAR_7;
  else
   return VAR_6;
 }
 if (VAR_11->ratios.horz.value == VAR_13 && VAR_11->ratios.vert.value == VAR_13)
  return VAR_3;
 if (VAR_11->ratios.horz_c.value == VAR_13 && VAR_11->ratios.vert_c.value == VAR_13)
  return VAR_2;

 return VAR_4;
}
