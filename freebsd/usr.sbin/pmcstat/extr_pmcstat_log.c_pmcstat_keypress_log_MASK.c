
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_4__ {size_t pa_plugin; int pa_topmode; } ;
struct TYPE_3__ {int (* pl_topkeypress ) (int,void*) ;int * pl_name; int (* pl_init ) () ;int * pl_topdisplay; int (* pl_shutdown ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ,int,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int,void*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,...) ;
 int FUNC_12 (int *) ;

int
FUNC_13(void)
{
 int VAR_8, VAR_9 = 0;
 WINDOW *VAR_10;

 VAR_10 = FUNC_1(1, 0, 1, 0);
 VAR_8 = FUNC_10(VAR_10);
 FUNC_11(VAR_10, "Key: %c => ", VAR_8);
 switch (VAR_8) {
 case 'c':
  FUNC_11(VAR_10, "enter mode 'd' or 'a' => ");
  VAR_8 = FUNC_10(VAR_10);
  if (VAR_8 == 'd') {
   VAR_2.pa_topmode = VAR_1;
   FUNC_11(VAR_10, "switching to delta mode");
  } else {
   VAR_2.pa_topmode = VAR_0;
   FUNC_11(VAR_10, "switching to accumulation mode");
  }
  break;
 case 'm':
  VAR_4 = !VAR_4;



  if (VAR_3[VAR_2.pa_plugin].pl_shutdown != ((void*)0))
   VAR_3[VAR_2.pa_plugin].pl_shutdown(((void*)0));
  FUNC_4(0);
  if (VAR_3[VAR_2.pa_plugin].pl_init != ((void*)0))
   VAR_3[VAR_2.pa_plugin].pl_init();


  FUNC_2();
  FUNC_11(VAR_10, "merge PMC %s", VAR_4 ? "on" : "off");
  break;
 case 'n':

  if (VAR_3[VAR_2.pa_plugin].pl_shutdown != ((void*)0))
   VAR_3[VAR_2.pa_plugin].pl_shutdown(((void*)0));


  do {
   VAR_2.pa_plugin++;
   if (VAR_3[VAR_2.pa_plugin].pl_name == ((void*)0))
    VAR_2.pa_plugin = 0;
  } while (VAR_3[VAR_2.pa_plugin].pl_topdisplay == ((void*)0));


  FUNC_4(0);
  if (VAR_3[VAR_2.pa_plugin].pl_init != ((void*)0))
   VAR_3[VAR_2.pa_plugin].pl_init();
  FUNC_11(VAR_10, "switching to plugin %s",
      VAR_3[VAR_2.pa_plugin].pl_name);
  break;
 case 'p':
  VAR_7++;
  if (VAR_7 >= VAR_5)
   VAR_7 = 0;
  FUNC_2();
  FUNC_11(VAR_10, "switching to PMC %s.%d",
      FUNC_3(VAR_7),
      VAR_7);
  break;
 case ' ':
  VAR_6 = !VAR_6;
  if (VAR_6)
   FUNC_11(VAR_10, "pause => press space again to continue");
  break;
 case 'q':
  FUNC_11(VAR_10, "exiting...");
  VAR_9 = 1;
  break;
 default:
  if (VAR_3[VAR_2.pa_plugin].pl_topkeypress != ((void*)0))
   if (VAR_3[VAR_2.pa_plugin].pl_topkeypress(VAR_8, (void *)VAR_10))
    VAR_9 = 1;
 }

 FUNC_12(VAR_10);
 FUNC_0(VAR_10);
 return VAR_9;
}
