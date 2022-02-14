
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_query_disk {int devname; } ;
typedef int path ;
typedef int U8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,struct mpt_query_disk*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,char*,char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,char*) ;

int
FUNC_5(U8 VAR_5, U8 VAR_6)
{
 char VAR_7[VAR_1];
 struct mpt_query_disk VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_5, VAR_6, &VAR_8);
 if (VAR_9 == VAR_0)





  return (0);
 if (VAR_9) {
  FUNC_4(VAR_9, "Unable to lookup volume device name");
  return (VAR_9);
 }
 FUNC_2(VAR_7, sizeof(VAR_7), "%s%s", VAR_3, VAR_8.devname);
 VAR_10 = FUNC_1(VAR_7, VAR_2);
 if (VAR_10 < 0) {
  VAR_9 = VAR_4;
  FUNC_3("Unable to lock volume %s", VAR_8.devname);
  return (VAR_9);
 }
 return (0);
}
