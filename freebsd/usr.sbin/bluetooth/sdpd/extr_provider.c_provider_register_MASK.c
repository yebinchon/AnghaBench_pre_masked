
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef TYPE_1__* provider_p ;
typedef int profile_p ;
typedef int int32_t ;
typedef int const* bdaddr_p ;
struct TYPE_6__ {int handle; int fd; int bdaddr; int * data; int profile; } ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int const* const,int) ;
 int VAR_2 ;
 int VAR_3 ;

provider_p
FUNC_5(profile_p const VAR_4, bdaddr_p const VAR_5, int32_t VAR_6,
 uint8_t const *VAR_7, uint32_t VAR_8)
{
 provider_p VAR_9 = FUNC_1(1, sizeof(*VAR_9));

 if (VAR_9 != ((void*)0)) {
  VAR_9->data = FUNC_3(VAR_8);
  if (VAR_9->data != ((void*)0)) {
   VAR_9->profile = VAR_4;
   FUNC_4(VAR_9->data, VAR_7, VAR_8);






   if (++ VAR_1 <= 1)
    VAR_1 = 2;

   VAR_9->handle = VAR_1;

   FUNC_4(&VAR_9->bdaddr, VAR_5,
    sizeof(VAR_9->bdaddr));
   VAR_9->fd = VAR_6;

   FUNC_0(&VAR_3, VAR_9, VAR_2);
   VAR_0 ++;
  } else {
   FUNC_2(VAR_9);
   VAR_9 = ((void*)0);
  }
 }

 return (VAR_9);
}
