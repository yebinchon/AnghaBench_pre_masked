
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int entries; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (TYPE_1__**,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;

void FUNC_10(void)
{
 VAR_2 = FUNC_5("mailmap");
 FUNC_4(FUNC_8(&VAR_0, VAR_2));

 FUNC_4(FUNC_6(
  VAR_0, "mailmap.file", FUNC_3("mailmap/file_override")));

 FUNC_4(FUNC_7(&VAR_1, VAR_2));


 FUNC_2(FUNC_9(&VAR_1->entries), 9);


 FUNC_1(
  VAR_1, VAR_3,
  FUNC_0(VAR_3));
}
