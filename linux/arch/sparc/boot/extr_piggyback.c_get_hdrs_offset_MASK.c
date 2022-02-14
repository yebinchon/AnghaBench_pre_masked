
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,int,int ) ;
 int FUNC_5 (int,char*,int) ;
 int VAR_4 ;

__attribute__((used)) static off_t FUNC_6(int VAR_5, const char *VAR_6)
{
 char VAR_7[VAR_1];
 off_t VAR_8;
 int VAR_9;

 if (FUNC_4(VAR_5, 0, VAR_3) < 0)
  FUNC_0("lseek");
 if (FUNC_5(VAR_5, VAR_7, VAR_1) != VAR_1)
  FUNC_0(VAR_6);

 if (VAR_7[40] == 'H' && VAR_7[41] == 'd' &&
     VAR_7[42] == 'r' && VAR_7[43] == 'S') {
  return 40;
 } else {


  VAR_8 = FUNC_3(VAR_7 + VAR_0 + 2) << 2;

  VAR_8 -= VAR_2;

  VAR_8 += VAR_0;
  if (FUNC_4(VAR_5, VAR_8, VAR_3) < 0)
   FUNC_0("lseek");
  if (FUNC_5(VAR_5, VAR_7, VAR_1) != VAR_1)
   FUNC_0(VAR_6);

  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9 += 4) {
   if (VAR_7[VAR_9 + 0] == 'H' && VAR_7[VAR_9 + 1] == 'd' &&
       VAR_7[VAR_9 + 2] == 'r' && VAR_7[VAR_9 + 3] == 'S') {
    return VAR_8 + VAR_9;
   }
  }
 }
 FUNC_2 (VAR_4, "Couldn't find headers signature in %s\n", VAR_6);
 FUNC_1(1);
}
