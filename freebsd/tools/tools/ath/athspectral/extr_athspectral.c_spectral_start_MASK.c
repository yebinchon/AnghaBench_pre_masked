
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ad_id; int ad_out_size; int ad_name; scalar_t__ ad_out_data; scalar_t__ ad_in_size; int * ad_in_data; } ;
struct spectralhandler {TYPE_1__ atd; int s; } ;
typedef int pe ;
typedef scalar_t__ caddr_t ;
typedef int HAL_SPECTRAL_PARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct spectralhandler *VAR_3)
{
 HAL_SPECTRAL_PARAM VAR_4;

 VAR_3->atd.ad_id = VAR_2 | VAR_0;
 FUNC_2(&VAR_4, 0, sizeof(VAR_4));





 VAR_3->atd.ad_in_data = ((void*)0);
 VAR_3->atd.ad_in_size = 0;
 VAR_3->atd.ad_out_data = (caddr_t) &VAR_4;
 VAR_3->atd.ad_out_size = sizeof(VAR_4);

 if (FUNC_1(VAR_3->s, VAR_1, &VAR_3->atd) < 0)
  FUNC_0(1, "%s", VAR_3->atd.ad_name);
}
