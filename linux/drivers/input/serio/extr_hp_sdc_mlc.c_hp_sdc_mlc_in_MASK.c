
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int suseconds_t ;
struct hp_sdc_mlc_priv_s {scalar_t__ emtestmode; } ;
struct TYPE_3__ {int* ipacket; int opacket; int icount; int isem; scalar_t__ intimeout; scalar_t__ instart; struct hp_sdc_mlc_priv_s* priv; } ;
typedef TYPE_1__ hil_mlc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(hil_mlc *VAR_5, suseconds_t VAR_6)
{
 struct hp_sdc_mlc_priv_s *VAR_7;
 int VAR_8 = 2;

 VAR_7 = VAR_5->priv;


 if (FUNC_0(&VAR_5->isem)) {
  if (VAR_7->emtestmode) {
   VAR_5->ipacket[0] =
    VAR_0 | (VAR_5->opacket &
            (VAR_2 |
      VAR_1 |
      VAR_3));
   VAR_5->icount = 14;

   goto wasup;
  }
  if (FUNC_1(VAR_4, VAR_5->instart + VAR_5->intimeout)) {




   VAR_8 = 1;
   FUNC_2(&VAR_5->isem);
  }
  goto done;
 }
 wasup:
 FUNC_2(&VAR_5->isem);
 VAR_8 = 0;
 done:
 return VAR_8;
}
