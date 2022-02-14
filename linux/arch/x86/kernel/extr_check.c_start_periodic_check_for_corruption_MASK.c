
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 if (!VAR_3 || !VAR_2 || VAR_1 == 0)
  return 0;

 FUNC_0("Scanning for low memory corruption every %d seconds\n", VAR_1);


 FUNC_1(&VAR_0, 0);

 return 0;
}
