
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dn_fsk {int dummy; } ;
struct TYPE_2__ {int fshash; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int,struct dn_fsk*) ;
 TYPE_1__ VAR_4 ;
 struct dn_fsk* FUNC_3 (int ,int,int ,int *) ;
 int FUNC_4 (struct dn_fsk*,int) ;

__attribute__((used)) static int
FUNC_5(int VAR_5, int VAR_6)
{
 struct dn_fsk *VAR_7;
 int VAR_8 = 0;

 if (!VAR_6)
  FUNC_0();
 VAR_7 = FUNC_3(VAR_4.fshash, VAR_5, VAR_0, ((void*)0));
 FUNC_2("fs %d found %p", VAR_5, VAR_7);
 if (VAR_7) {
  FUNC_4(VAR_7, VAR_2 | VAR_1);
  VAR_8 = 0;
 } else
  VAR_8 = VAR_3;
 if (!VAR_6)
  FUNC_1();
 return VAR_8;
}
