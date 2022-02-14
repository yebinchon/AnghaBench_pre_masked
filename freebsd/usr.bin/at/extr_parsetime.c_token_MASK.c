
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*,int ,int ) ;
 int VAR_7 ;
 int FUNC_4 (char*) ;
 int VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 char** VAR_13 ;
 char* VAR_14 ;

__attribute__((used)) static int
FUNC_5(void)
{
    int VAR_15;

    while (1) {
 FUNC_3(VAR_9, 0, VAR_8);
 VAR_10 = VAR_1;
 VAR_11 = 0;
 VAR_15 = 0;




 if (VAR_7) {
     if (VAR_12 < 1)
  return VAR_10;
     VAR_14 = *VAR_13;
     VAR_13++;
     VAR_12--;
     VAR_7 = 0;
 }




 while (FUNC_2(*VAR_14))
     ++VAR_14;
 if (!*VAR_14) {
     VAR_7 = 1;
     continue;
 }



 VAR_9[0] = *VAR_14++;



 if (FUNC_1(VAR_9[0])) {
     while (FUNC_1(*VAR_14))
  VAR_9[++VAR_15] = *VAR_14++;
     VAR_9[++VAR_15] = 0;
     return VAR_10 = VAR_4;
 }
 else if (FUNC_0(VAR_9[0])) {
     while (FUNC_0(*VAR_14))
  VAR_9[++VAR_15] = *VAR_14++;
     VAR_9[++VAR_15] = 0;
     return FUNC_4(VAR_9);
 }
 else if (VAR_9[0] == ':' || VAR_9[0] == '.')
     return VAR_10 = VAR_0;
 else if (VAR_9[0] == '+')
     return VAR_10 = VAR_5;
 else if (VAR_9[0] == '-')
     return VAR_10 = VAR_3;
 else if (VAR_9[0] == '/')
     return VAR_10 = VAR_6;
 else
     return VAR_10 = VAR_2;
    }
}
