
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_query_disk {char const* devname; } ;
typedef int buf ;
typedef int U8 ;


 scalar_t__ FUNC_0 (int,int,struct mpt_query_disk*) ;
 int FUNC_1 (char*,int,char*,int,...) ;

const char *
FUNC_2(U8 VAR_0, U8 VAR_1)
{
 static struct mpt_query_disk VAR_2;
 static char VAR_3[16];

 if (FUNC_0(VAR_0, VAR_1, &VAR_2) != 0) {





  if (VAR_0 == 0)
   FUNC_1(VAR_3, sizeof(VAR_3), "%d", VAR_1);
  else
   FUNC_1(VAR_3, sizeof(VAR_3), "%d:%d", VAR_0,
       VAR_1);
  return (VAR_3);
 }
 return (VAR_2.devname);
}
