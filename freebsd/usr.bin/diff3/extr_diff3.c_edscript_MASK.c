
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int to; long from; } ;
struct TYPE_4__ {int from; int to; } ;
struct TYPE_6__ {TYPE_2__ old; TYPE_1__ new; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int * VAR_8 ;
 size_t FUNC_2 (char*,int,size_t,int ) ;
 int FUNC_3 (int ,long,int ) ;
 int FUNC_4 (char*,int,size_t,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*,...) ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_7(int VAR_14)
{
 int VAR_15;
 size_t VAR_16;
 char VAR_17[VAR_1];

 for (; VAR_14 > 0; VAR_14--) {
  if (!VAR_10 || !VAR_11[VAR_14]) {
   FUNC_5(&VAR_3[VAR_14].old);
  } else {
   FUNC_6("%da\n", VAR_3[VAR_14].old.to -1);
   if (VAR_0) {
    FUNC_6("%s\n", VAR_6);
    FUNC_3(VAR_8[1], VAR_3[VAR_14].old.from, VAR_2);
    for (VAR_15 = VAR_3[VAR_14].old.to - VAR_3[VAR_14].old.from; VAR_15 > 0; VAR_15 -= VAR_16) {
     VAR_16 = VAR_15 > VAR_1 ? VAR_1 : VAR_15;
     if (FUNC_2(VAR_17, 1, VAR_16, VAR_8[1]) != VAR_16)
      FUNC_0(2, "logic error");
     FUNC_4(VAR_17, 1, VAR_16, VAR_13);
    }
    FUNC_6("\n");
   }
   FUNC_6("=======\n");
  }
  FUNC_3(VAR_8[2], (long)VAR_3[VAR_14].new.from, VAR_2);
  for (VAR_15 = VAR_3[VAR_14].new.to - VAR_3[VAR_14].new.from; VAR_15 > 0; VAR_15-= VAR_16) {
   VAR_16 = VAR_15 > VAR_1 ? VAR_1 : VAR_15;
   if (FUNC_2(VAR_17, 1, VAR_16, VAR_8[2]) != VAR_16)
    FUNC_0(2, "logic error");
   FUNC_4(VAR_17, 1, VAR_16, VAR_13);
  }
  if (!VAR_10 || !VAR_11[VAR_14])
   FUNC_6(".\n");
  else {
   FUNC_6("%s\n.\n", VAR_7);
   FUNC_6("%da\n%s\n.\n", VAR_3[VAR_14].old.from - 1, VAR_5);
  }
 }
 if (VAR_9)
  FUNC_6("w\nq\n");

 FUNC_1(VAR_4 == 0 ? VAR_12 : 0);
}
