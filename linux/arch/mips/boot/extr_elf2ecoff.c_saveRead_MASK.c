
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (int,int,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,int) ;
 int VAR_2 ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static char *FUNC_6(int VAR_3, off_t VAR_4, off_t VAR_5, char *VAR_6)
{
 char *VAR_7;
 int VAR_8;
 off_t VAR_9;
 if ((VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_0)) < 0) {
  FUNC_1(VAR_2, "%s: fseek: %s\n", VAR_6, FUNC_5(VAR_1));
  FUNC_0(1);
 }
 if (!(VAR_7 = (char *) FUNC_3(VAR_5))) {
  FUNC_1(VAR_2, "%s: Can't allocate %d bytes.\n", VAR_6,
   VAR_5);
  FUNC_0(1);
 }
 VAR_8 = FUNC_4(VAR_3, VAR_7, VAR_5);
 if (VAR_8 != VAR_5) {
  FUNC_1(VAR_2, "%s: read: %s.\n",
   VAR_6,
   VAR_8 ? FUNC_5(VAR_1) : "End of file reached");
  FUNC_0(1);
 }
 return VAR_7;
}
