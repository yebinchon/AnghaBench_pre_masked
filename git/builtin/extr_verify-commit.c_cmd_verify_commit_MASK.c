
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*) ;
 struct option const FUNC_1 (int ,char*,unsigned int*,int ,int ) ;
 struct option const FUNC_2 () ;
 struct option const FUNC_3 (int*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int *) ;
 int VAR_5 ;
 int FUNC_5 (int,char const**,char const*,struct option const*,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,struct option const*) ;
 scalar_t__ FUNC_8 (char const*,unsigned int) ;
 int VAR_6 ;

int FUNC_9(int VAR_7, const char **VAR_8, const char *VAR_9)
{
 int VAR_10 = 1, VAR_11 = 0, VAR_12 = 0;
 unsigned VAR_13 = 0;
 const struct option VAR_14[] = {
  FUNC_3(&VAR_11, FUNC_0("print commit contents")),
  FUNC_1(0, "raw", &VAR_13, FUNC_0("print raw gpg status output"), VAR_0),
  FUNC_2()
 };

 FUNC_4(VAR_5, ((void*)0));

 VAR_7 = FUNC_5(VAR_7, VAR_8, VAR_9, VAR_14,
        VAR_6, VAR_2);
 if (VAR_7 <= VAR_10)
  FUNC_7(VAR_6, VAR_14);

 if (VAR_11)
  VAR_13 |= VAR_1;



 FUNC_6(VAR_3, VAR_4);
 while (VAR_10 < VAR_7)
  if (FUNC_8(VAR_8[VAR_10++], VAR_13))
   VAR_12 = 1;
 return VAR_12;
}
