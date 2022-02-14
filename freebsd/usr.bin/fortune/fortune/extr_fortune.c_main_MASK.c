
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int path; int was_pos_file; int pos; int posfile; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int,char**) ;
 int * FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (unsigned int) ;
 int FUNC_16 (int,char*,int) ;

int
FUNC_17(int VAR_13, char *VAR_14[])
{
 int VAR_15;

 if (FUNC_9("FORTUNE_SAVESTATE") != ((void*)0))
  VAR_12 = 1;

 (void) FUNC_14(VAR_3, "");

 FUNC_10();
 FUNC_8(VAR_13, VAR_14);

 if (VAR_8)
  FUNC_3(FUNC_4() != 0);

 FUNC_11();
 do {
  FUNC_7();
 } while ((VAR_10 && FUNC_6() > VAR_9) ||
   (VAR_6 && FUNC_6() <= VAR_9));

 FUNC_2(VAR_2);

 if (VAR_12) {
  if ((VAR_15 = FUNC_1(VAR_2->posfile, 0666)) < 0) {
   FUNC_13(VAR_2->posfile);
   FUNC_3(1);
  }





  FUNC_5(VAR_15, VAR_4);
  FUNC_16(VAR_15, (char *) &VAR_2->pos, sizeof VAR_2->pos);
  if (!VAR_2->was_pos_file)
  FUNC_0(VAR_2->path, 0666);
  FUNC_5(VAR_15, VAR_5);
 }
 if (VAR_11) {
  if (VAR_1 == 0)
   (void) FUNC_6();
  FUNC_15((unsigned int) FUNC_12(VAR_1 / VAR_0, VAR_7));
 }

 FUNC_3(0);
}
