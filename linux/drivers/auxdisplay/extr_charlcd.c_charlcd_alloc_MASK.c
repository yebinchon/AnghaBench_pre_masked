
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct charlcd {int ifwidth; int drvdata; int hwidth; int bwidth; } ;
struct TYPE_2__ {int len; } ;
struct charlcd_priv {int drvdata; struct charlcd lcd; TYPE_1__ esc_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct charlcd_priv* FUNC_0 (int,int ) ;

struct charlcd *FUNC_1(unsigned int VAR_3)
{
 struct charlcd_priv *VAR_4;
 struct charlcd *VAR_5;

 VAR_4 = FUNC_0(sizeof(*VAR_4) + VAR_3, VAR_2);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->esc_seq.len = -1;

 VAR_5 = &VAR_4->lcd;
 VAR_5->ifwidth = 8;
 VAR_5->bwidth = VAR_0;
 VAR_5->hwidth = VAR_1;
 VAR_5->drvdata = VAR_4->drvdata;

 return VAR_5;
}
