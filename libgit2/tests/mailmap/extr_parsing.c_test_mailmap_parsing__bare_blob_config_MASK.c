
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int entries; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (TYPE_1__**,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

void FUNC_12(void)
{
 VAR_3 = FUNC_5("mailmap/.gitted");
 FUNC_4(FUNC_10(VAR_3));
 FUNC_3(FUNC_9(VAR_3));

 FUNC_4(FUNC_8(&VAR_1, VAR_3));

 FUNC_4(FUNC_6(
  VAR_1, "mailmap.blob", "HEAD:blob_override"));

 FUNC_4(FUNC_7(&VAR_2, VAR_3));


 FUNC_2(FUNC_11(&VAR_2->entries), 2);


 FUNC_1(
  VAR_2, VAR_0,
  FUNC_0(VAR_0));
}
