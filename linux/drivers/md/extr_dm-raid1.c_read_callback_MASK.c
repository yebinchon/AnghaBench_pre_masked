
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror {TYPE_1__* dev; int ms; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*) ;
 struct mirror* FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*,int *) ;
 int FUNC_7 (struct mirror*) ;
 int FUNC_8 (struct mirror*,int ) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ,struct bio*) ;
 int FUNC_11 (int ,struct bio*,int ) ;

__attribute__((used)) static void FUNC_12(unsigned long VAR_1, void *VAR_2)
{
 struct bio *VAR_3 = VAR_2;
 struct mirror *VAR_4;

 VAR_4 = FUNC_4(VAR_3);
 FUNC_6(VAR_3, ((void*)0));

 if (FUNC_9(!VAR_1)) {
  FUNC_3(VAR_3);
  return;
 }

 FUNC_8(VAR_4, VAR_0);

 if (FUNC_9(FUNC_7(VAR_4)) || FUNC_10(VAR_4->ms, VAR_3)) {
  FUNC_1("Read failure on mirror device %s.  "
        "Trying alternative device.",
        VAR_4->dev->name);
  FUNC_11(VAR_4->ms, VAR_3, FUNC_2(VAR_3));
  return;
 }

 FUNC_0("Read failure on mirror device %s.  Failing I/O.",
      VAR_4->dev->name);
 FUNC_5(VAR_3);
}
