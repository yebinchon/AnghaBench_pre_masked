
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* buf; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*,int *) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 char* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;

const char *FUNC_7(void)
{
 if (!(VAR_5 & VAR_0) && !VAR_4.len) {
  const char *VAR_6 = FUNC_2("EMAIL");

  if (VAR_6 && VAR_6[0]) {
   FUNC_4(&VAR_4, VAR_6);
   VAR_2 |= VAR_0;
   VAR_1 |= VAR_0;
  } else if ((VAR_6 = FUNC_3()) && VAR_6[0]) {
   FUNC_4(&VAR_4, VAR_6);
   FUNC_1((char *)VAR_6);
  } else
   FUNC_0(FUNC_6(&VAR_3),
       &VAR_4, &VAR_3);
  FUNC_5(&VAR_4);
 }
 return VAR_4.buf;
}
