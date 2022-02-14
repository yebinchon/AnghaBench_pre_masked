
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int header_type; int id; } ;
struct TYPE_6__ {int type; int id; } ;
struct TYPE_7__ {int type; int id; } ;
struct TYPE_8__ {TYPE_1__ nfs; TYPE_2__ cas; } ;


 int FUNC_0 (int,char*,char,char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;


 TYPE_4__* VAR_1 ;
 TYPE_4__* FUNC_2 (char*) ;
 TYPE_3__ VAR_2 ;
 scalar_t__ FUNC_3 (char,char*) ;

int
FUNC_4(char VAR_3, char *VAR_4)
{

 FUNC_0(1,"parsing board option: -%c %s", VAR_3, VAR_4);

 if (VAR_1 != ((void*)0)) {
  FUNC_1("only one board option allowed");
  return VAR_0;
 }

 if (FUNC_3(VAR_3, VAR_4))
  return VAR_0;

 VAR_1 = FUNC_2(VAR_4);
 if (VAR_1 == ((void*)0)){
  FUNC_1("invalid/unknown board specified: %s", VAR_4);
  return VAR_0;
 }

 switch (VAR_1->header_type) {
 case 129:
  VAR_2.cas.type = 129;
  VAR_2.cas.id = VAR_1->id;
  break;
 case 128:
  VAR_2.nfs.type = 128;
  VAR_2.nfs.id = VAR_1->id;
  break;
 default:
  FUNC_1("internal error, unknown header type\n");
  return VAR_0;
 }

 return 0;
}
