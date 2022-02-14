
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char const*,int) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (char const*) ;

int FUNC_9(const char *VAR_2, char *VAR_3, int VAR_4, int *VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_8(VAR_2);
 FUNC_1(VAR_6 > 240);
 FUNC_6(VAR_1, VAR_2, VAR_6);
 FUNC_0(VAR_1, VAR_6);

 FUNC_5(VAR_0);
 if (VAR_3) {
  FUNC_7(VAR_3, 0, VAR_4);
  VAR_8 = VAR_4;
  VAR_7 = FUNC_4(VAR_6, VAR_3, &VAR_4);
  FUNC_2(VAR_3, VAR_8);
        } else {
  VAR_7 = FUNC_3(VAR_6);
        }
 if (VAR_5)
  *VAR_5 = VAR_7;
 return VAR_4;
}
