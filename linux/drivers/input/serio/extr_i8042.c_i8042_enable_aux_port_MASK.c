
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(void)
{
 VAR_4 &= ~VAR_2;
 VAR_4 |= VAR_3;

 if (FUNC_0(&VAR_4, VAR_1)) {
  VAR_4 &= ~VAR_3;
  VAR_4 |= VAR_2;
  FUNC_1("Failed to enable AUX port\n");
  return -VAR_0;
 }

 return 0;
}
