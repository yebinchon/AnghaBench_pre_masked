
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* do_fgetc ) (TYPE_1__*) ;int eof; int linenr; int (* do_ungetc ) (int,TYPE_1__*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_2 = VAR_1->do_fgetc(VAR_1);

 if (VAR_2 == '\r') {

  VAR_2 = VAR_1->do_fgetc(VAR_1);
  if (VAR_2 != '\n') {
   if (VAR_2 != VAR_0)
    VAR_1->do_ungetc(VAR_2, VAR_1);
   VAR_2 = '\r';
  }
 }
 if (VAR_2 == '\n')
  VAR_1->linenr++;
 if (VAR_2 == VAR_0) {
  VAR_1->eof = 1;
  VAR_1->linenr++;
  VAR_2 = '\n';
 }
 return VAR_2;
}
