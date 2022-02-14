
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,char*,int) ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(int VAR_2, int VAR_3, bool VAR_4)
{
 int VAR_5 = 0;
 char VAR_6[VAR_0];
 ssize_t VAR_7 = 0;

 while (!VAR_5 && (VAR_7 = FUNC_2(VAR_2, VAR_6, sizeof(VAR_6))) > 0)



  VAR_5 = FUNC_3(VAR_3, VAR_6, VAR_7);

 if (VAR_7 < 0) {
  FUNC_0(VAR_1, "read error while copying file");
  VAR_5 = (int)VAR_7;
 }

 if (VAR_5 < 0)
  FUNC_0(VAR_1, "write error while copying file");

 if (VAR_4) {
  FUNC_1(VAR_2);
  FUNC_1(VAR_3);
 }

 return VAR_5;
}
