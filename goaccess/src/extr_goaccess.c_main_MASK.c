
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ output_stdout; scalar_t__ process_and_exit; scalar_t__ stop_processing; } ;
struct TYPE_4__ {int processed; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 TYPE_3__ VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_1__* VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int,char**) ;
 int FUNC_9 (int*,char***) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_1__**,int *,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int VAR_5 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int,char**) ;

int
FUNC_19 (int VAR_6, char **VAR_7)
{
  int VAR_8 = 0, VAR_9 = 0;

  FUNC_1 ();
  FUNC_15 ();


  FUNC_18 (VAR_6, VAR_7);
  FUNC_9 (&VAR_6, &VAR_7);
  FUNC_8 (VAR_6, VAR_7);

  FUNC_7 ();


  if (VAR_2.process_and_exit) {
  }

  else if (VAR_2.output_stdout) {
    FUNC_14 ();
  }

  else {
    FUNC_13 (&VAR_8);
  }


  if (VAR_8)
    goto clean;

  FUNC_6 ();

  FUNC_17 (&VAR_5);
  if ((VAR_9 = FUNC_11 (&VAR_4, ((void*)0), 0))) {
    FUNC_4 ();
    goto clean;
  }
  if (VAR_2.stop_processing)
    goto clean;
  VAR_4->offset = VAR_4->processed;


  FUNC_5 ();
  FUNC_10 ();
  FUNC_0 ();

  FUNC_4 ();
  FUNC_17 (&VAR_3);


  if (VAR_2.process_and_exit) {



  }

  else if (VAR_2.output_stdout) {
    FUNC_16 ();
  }

  else {
    FUNC_3 ();
  }


clean:
  FUNC_2(VAR_9);

  return VAR_9 ? VAR_0 : VAR_1;
}
