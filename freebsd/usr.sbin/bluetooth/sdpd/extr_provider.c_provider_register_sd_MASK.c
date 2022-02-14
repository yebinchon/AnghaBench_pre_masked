
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* provider_p ;
typedef int profile_t ;
typedef int int32_t ;
struct TYPE_7__ {int handle; int fd; int * profile; } ;


 int FUNC_0 (int *,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

int32_t
FUNC_4(int32_t VAR_3)
{
 extern profile_t VAR_4;
 extern profile_t VAR_5;

 provider_p VAR_6 = FUNC_2(1, sizeof(*VAR_6));
 provider_p VAR_7 = FUNC_2(1, sizeof(*VAR_7));

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
  if (VAR_6 != ((void*)0))
   FUNC_3(VAR_6);

  if (VAR_7 != ((void*)0))
   FUNC_3(VAR_7);

  return (-1);
 }

 VAR_6->profile = &VAR_4;
 VAR_7->handle = 0;
 VAR_6->fd = VAR_3;
 FUNC_1(&VAR_2, VAR_6, VAR_1);

 VAR_7->profile = &VAR_5;
 VAR_7->handle = 1;
 VAR_6->fd = VAR_3;
 FUNC_0(&VAR_2, VAR_6, VAR_7, VAR_1);

 VAR_0 ++;

 return (0);
}
