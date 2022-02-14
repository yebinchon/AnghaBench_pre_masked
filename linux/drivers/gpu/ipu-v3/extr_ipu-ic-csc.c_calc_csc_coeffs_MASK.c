
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipu_ic_csc_params {int dummy; } ;
struct TYPE_4__ {scalar_t__ cs; int quant; } ;
struct TYPE_3__ {scalar_t__ cs; int enc; int quant; } ;
struct ipu_ic_csc {struct ipu_ic_csc_params params; TYPE_2__ in_cs; TYPE_1__ out_cs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;


 struct ipu_ic_csc_params** VAR_2 ;
 struct ipu_ic_csc_params** VAR_3 ;
 struct ipu_ic_csc_params** VAR_4 ;
 struct ipu_ic_csc_params** VAR_5 ;
 struct ipu_ic_csc_params** VAR_6 ;
 struct ipu_ic_csc_params** VAR_7 ;

__attribute__((used)) static int FUNC_1(struct ipu_ic_csc *VAR_8)
{
 const struct ipu_ic_csc_params **VAR_9;
 int VAR_10;

 VAR_10 = (FUNC_0(VAR_8->in_cs.quant) << 1) |
  FUNC_0(VAR_8->out_cs.quant);

 if (VAR_8->in_cs.cs == VAR_8->out_cs.cs) {
  VAR_8->params = (VAR_8->in_cs.cs == VAR_1) ?
   *VAR_7[VAR_10] : *VAR_2[VAR_10];

  return 0;
 }



 switch (VAR_8->out_cs.enc) {
 case 129:
  VAR_9 = (VAR_8->in_cs.cs == VAR_1) ?
   VAR_5 : VAR_3;
  break;
 case 128:
  VAR_9 = (VAR_8->in_cs.cs == VAR_1) ?
   VAR_6 : VAR_4;
  break;
 default:
  return -VAR_0;
 }

 VAR_8->params = *VAR_9[VAR_10];

 return 0;
}
