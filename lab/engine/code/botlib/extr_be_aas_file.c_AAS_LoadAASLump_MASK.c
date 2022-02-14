
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fileHandle_t ;
struct TYPE_2__ {int (* FS_Read ) (char*,int,int ) ;int (* FS_FCloseFile ) (int ) ;scalar_t__ (* FS_Seek ) (int ,int,int ) ;int (* Print ) (int ,char*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int ) ;

char *FUNC_7(fileHandle_t VAR_3, int VAR_4, int VAR_5, int *VAR_6, int VAR_7)
{
 char *VAR_8;

 if (!VAR_5)
 {

  return (char *) FUNC_2(VAR_7+1);
 }

 if (VAR_4 != *VAR_6)
 {
  VAR_2.Print(VAR_1, "AAS file not sequentially read\n");
  if (VAR_2.FS_Seek(VAR_3, VAR_4, VAR_0))
  {
   FUNC_1("can't seek to aas lump\n");
   FUNC_0();
   VAR_2.FS_FCloseFile(VAR_3);
   return ((void*)0);
  }
 }

 VAR_8 = (char *) FUNC_2(VAR_5+1);

 if (VAR_5)
 {
  VAR_2.FS_Read(VAR_8, VAR_5, VAR_3 );
  *VAR_6 += VAR_5;
 }
 return VAR_8;
}
