
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int,void*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ,int ,char*,void*) ;

__attribute__((used)) static int FUNC_5(void *VAR_6, int VAR_7)
{
 int VAR_8 = 0, VAR_9;

 if (FUNC_0(FUNC_1(VAR_2)) == VAR_3)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_0;

 if (VAR_7) {
  FUNC_3(VAR_9, VAR_4);
  VAR_8 = FUNC_4(VAR_9, VAR_5, 0,
      "sd0_cd", VAR_6);
 } else
  FUNC_2(VAR_9, VAR_6);
 return VAR_8;
}
