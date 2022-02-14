
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int (* writeField ) (TYPE_3__*,TYPE_2__*,scalar_t__) ;} ;
struct TYPE_13__ {int tag; scalar_t__ st_uid; TYPE_1__* settings; } ;
struct TYPE_12__ {scalar_t__ chlen; } ;
struct TYPE_11__ {scalar_t__ shadowOtherUsers; scalar_t__* fields; } ;
typedef TYPE_2__ RichString ;
typedef scalar_t__ ProcessField ;
typedef TYPE_3__ Process ;
typedef int Object ;


 TYPE_9__* FUNC_0 (TYPE_3__*) ;
 int * VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,scalar_t__) ;

void FUNC_5(Object* VAR_4, RichString* VAR_5) {
   Process* VAR_6 = (Process*) VAR_4;
   ProcessField* VAR_7 = VAR_6->settings->fields;
   FUNC_1(VAR_5);
   for (int VAR_8 = 0; VAR_7[VAR_8]; VAR_8++)
      FUNC_0(VAR_6)->writeField(VAR_6, VAR_5, VAR_7[VAR_8]);
   if (VAR_6->settings->shadowOtherUsers && (int)VAR_6->st_uid != VAR_3)
      FUNC_2(VAR_5, VAR_0[VAR_1]);
   if (VAR_6->tag == 1)
      FUNC_2(VAR_5, VAR_0[VAR_2]);
   FUNC_3(VAR_5->chlen > 0);
}
