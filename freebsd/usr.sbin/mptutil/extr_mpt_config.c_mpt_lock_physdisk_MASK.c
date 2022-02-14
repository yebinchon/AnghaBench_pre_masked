
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_standalone_disk {int devname; } ;
typedef int path ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,char*,char*,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3(struct mpt_standalone_disk *VAR_4)
{
 char VAR_5[VAR_0];
 int VAR_6, VAR_7;

 FUNC_1(VAR_5, sizeof(VAR_5), "%s%s", VAR_2, VAR_4->devname);
 VAR_6 = FUNC_0(VAR_5, VAR_1);
 if (VAR_6 < 0) {
  VAR_7 = VAR_3;
  FUNC_2("Unable to lock disk %s", VAR_4->devname);
  return (VAR_7);
 }
 return (0);
}
