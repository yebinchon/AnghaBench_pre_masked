
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WSClient ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int *,char const*,int,int) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static int
FUNC_3 (WSClient * VAR_6, const char *VAR_7, int VAR_8)
{
  int VAR_9 = 0;

  VAR_9 = FUNC_0 (VAR_6, VAR_7, VAR_8);
  if (VAR_9 == -1 && VAR_5 == VAR_1)
    return FUNC_2 (VAR_6, VAR_4 | VAR_3, VAR_9);


  if (VAR_9 < VAR_8 || (VAR_9 == -1 && (VAR_5 == VAR_0 || VAR_5 == VAR_2)))
    FUNC_1 (VAR_6, VAR_7, VAR_8, VAR_9);

  return VAR_9;
}
