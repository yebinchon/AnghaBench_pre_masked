
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf2 ;
typedef int buf1 ;
struct TYPE_4__ {scalar_t__ st_size; int st_mode; } ;
struct TYPE_3__ {scalar_t__ st_size; int st_mode; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 size_t FUNC_1 (char*,int,int,int *) ;
 scalar_t__ FUNC_2 (char*,char*,size_t) ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static int
FUNC_3(FILE *VAR_6, FILE *VAR_7, int VAR_8)
{
 char VAR_9[VAR_0], VAR_10[VAR_0];
 size_t VAR_11, VAR_12;

 if ((VAR_8 & (VAR_1|VAR_2)) || VAR_4 != VAR_5 ||
     (VAR_4 & VAR_3) != (VAR_5 & VAR_3))
  return (1);
 for (;;) {
  VAR_11 = FUNC_1(VAR_9, 1, sizeof(VAR_9), VAR_6);
  VAR_12 = FUNC_1(VAR_10, 1, sizeof(VAR_10), VAR_7);
  if ((!VAR_11 && FUNC_0(VAR_6)) || (!VAR_12 && FUNC_0(VAR_7)))
   return (-1);
  if (VAR_11 != VAR_12)
   return (1);
  if (VAR_11 == 0)
   return (0);
  if (FUNC_2(VAR_9, VAR_10, VAR_11) != 0)
   return (1);
 }
}
