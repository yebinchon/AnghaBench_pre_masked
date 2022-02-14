
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct est_softc {int flist_len; TYPE_1__* freq_list; } ;
struct cf_setting {scalar_t__ freq; } ;
struct TYPE_2__ {scalar_t__ freq; int id16; } ;
typedef TYPE_1__ freq_info ;
typedef int device_t ;


 int VAR_0 ;
 struct est_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, const struct cf_setting *VAR_2)
{
 struct est_softc *VAR_3;
 freq_info *VAR_4;


 VAR_3 = FUNC_0(VAR_1);
 for (VAR_4 = VAR_3->freq_list; VAR_4 < VAR_3->freq_list + VAR_3->flist_len; VAR_4++) {
  if (VAR_4->freq == VAR_2->freq)
   break;
 }
 if (VAR_4->freq == 0)
  return (VAR_0);


 FUNC_1(VAR_1, VAR_4->id16, 0);

 return (0);
}
