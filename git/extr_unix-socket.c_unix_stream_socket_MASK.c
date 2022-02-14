
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1, 0);
 if (VAR_2 < 0)
  FUNC_0("unable to create socket");
 return VAR_2;
}
