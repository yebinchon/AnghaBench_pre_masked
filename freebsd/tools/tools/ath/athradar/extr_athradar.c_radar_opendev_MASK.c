
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* ad_name; int ad_out_size; scalar_t__ ad_out_data; int ad_id; } ;
struct radarhandler {scalar_t__ s; int ah_devid; TYPE_2__ atd; } ;
typedef int revs ;
typedef scalar_t__ caddr_t ;
struct TYPE_3__ {int ah_devid; } ;
typedef TYPE_1__ HAL_REVS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*) ;

int
FUNC_4(struct radarhandler *VAR_4, const char *VAR_5)
{
 HAL_REVS VAR_6;

 VAR_4->s = FUNC_1(VAR_0, VAR_3, 0);
 if (VAR_4->s < 0) {
  FUNC_3("socket");
  return 0;
 }

 FUNC_2(VAR_4->atd.ad_name, VAR_5, sizeof (VAR_4->atd.ad_name));


 VAR_4->atd.ad_id = VAR_1;
 VAR_4->atd.ad_out_data = (caddr_t) &VAR_6;
 VAR_4->atd.ad_out_size = sizeof(VAR_6);
 if (FUNC_0(VAR_4->s, VAR_2, &VAR_4->atd) < 0) {
  FUNC_3(VAR_4->atd.ad_name);
  return 0;
 }
 VAR_4->ah_devid = VAR_6.ah_devid;
 return 1;
}
