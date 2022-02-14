
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t answer; int id_num; } ;
typedef TYPE_1__ CTL_RESPONSE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ,int ,int ,TYPE_1__*) ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int VAR_10 ;

void
FUNC_3(void)
{
 CTL_RESPONSE VAR_11;

 VAR_5 = "Trying to connect to your party's talk daemon";
 FUNC_0(VAR_6, VAR_8, VAR_0, &VAR_11);
 VAR_10 = VAR_11.id_num;
 if (VAR_11.answer != VAR_3) {
  if (VAR_11.answer < VAR_2)
   FUNC_1(VAR_4[VAR_11.answer]);
  FUNC_2();
 }

 VAR_5 = "Trying to connect to local talk daemon";
 FUNC_0(VAR_9, VAR_8, VAR_1, &VAR_11);
 VAR_7 = VAR_11.id_num;
}
