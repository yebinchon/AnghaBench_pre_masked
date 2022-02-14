
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int rcvegrbufsize; scalar_t__ tidinvalid; int tidtemplate; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct qib_devdata *VAR_2)
{
 if (VAR_2->rcvegrbufsize == 2048)
  VAR_2->tidtemplate = VAR_0;
 else if (VAR_2->rcvegrbufsize == 4096)
  VAR_2->tidtemplate = VAR_1;
 VAR_2->tidinvalid = 0;
}
