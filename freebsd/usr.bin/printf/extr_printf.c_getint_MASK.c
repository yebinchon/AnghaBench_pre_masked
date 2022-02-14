
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ intmax_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(int *VAR_4)
{
 intmax_t VAR_5;
 uintmax_t VAR_6;
 int VAR_7;

 if (FUNC_0(&VAR_5, &VAR_6, 1))
  return (1);
 VAR_7 = 0;
 if (VAR_5 < VAR_2 || VAR_5 > VAR_1) {
  FUNC_2("%s: %s", *VAR_3, FUNC_1(VAR_0));
  VAR_7 = 1;
 }
 *VAR_4 = (int)VAR_5;
 return (VAR_7);
}
