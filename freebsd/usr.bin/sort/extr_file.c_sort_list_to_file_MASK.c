
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sort_mods {int nflag; int hflag; int gflag; int Vflag; int Rflag; int Mflag; } ;
struct sort_list {int count; int list; } ;
struct TYPE_4__ {struct sort_mods sm; } ;
struct TYPE_3__ {int sort_method; scalar_t__ sflag; } ;


 int VAR_0 ;
 int VAR_1 ;





 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int,char*,int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct sort_list*,int ,char const*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct sort_list*,char const*) ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;

void
FUNC_8(struct sort_list *VAR_9, const char *VAR_10)
{
 struct sort_mods *VAR_11 = &(VAR_5[0].sm);

 if (!(VAR_11->Mflag) && !(VAR_11->Rflag) && !(VAR_11->Vflag) && !(VAR_11->Vflag) &&
     !(VAR_11->gflag) && !(VAR_11->hflag) && !(VAR_11->nflag)) {
  if ((VAR_7.sort_method == 132) && VAR_2)
   VAR_7.sort_method = 128;

 } else if (VAR_7.sort_method == 128)
  FUNC_0(2, "%s", FUNC_3(9));





 if (VAR_7.sflag) {
  switch (VAR_7.sort_method){
  case 130:
   break;
  case 128:
   break;
  case 132:
   VAR_7.sort_method = 130;
   break;
  default:
   FUNC_1(2, "%s", FUNC_3(10));
  }
 }

 if (VAR_7.sort_method == 132)
  VAR_7.sort_method = VAR_0;

 if (VAR_3)
  FUNC_5("sort_method=%s\n",
      FUNC_2(VAR_7.sort_method));

 switch (VAR_7.sort_method){
 case 128:
  FUNC_6(VAR_9->list, VAR_9->count);
  FUNC_7(VAR_9, VAR_10);
  break;
 case 130:
  FUNC_4(VAR_9, VAR_6, VAR_10);
  break;
 case 131:
  FUNC_4(VAR_9, VAR_4, VAR_10);
  break;
 case 129:
  FUNC_4(VAR_9, VAR_8, VAR_10);
  break;
 default:
  FUNC_4(VAR_9, VAR_1, VAR_10);
  break;
 }
}
