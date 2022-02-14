
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
struct TYPE_2__ {scalar_t__ bootcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,struct stat*) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int,int *,scalar_t__) ;
 TYPE_1__* VAR_5 ;

int
FUNC_5(int VAR_6)
{
 struct stat VAR_7;

 if (VAR_5 == ((void*)0) || VAR_5->bootcode == 0)
  return (VAR_2);

 if (FUNC_1(VAR_6, &VAR_7) == -1)
  return (VAR_4);
 if (VAR_7.st_size > VAR_5->bootcode)
  return (VAR_0);

 VAR_3 = FUNC_2(VAR_5->bootcode);
 if (VAR_3 == ((void*)0))
  return (VAR_1);
 FUNC_3(VAR_3, 0, VAR_5->bootcode);
 if (FUNC_4(VAR_6, VAR_3, VAR_7.st_size) != VAR_7.st_size) {
  FUNC_0(VAR_3);
  VAR_3 = ((void*)0);
  return (VAR_4);
 }
 return (0);
}
