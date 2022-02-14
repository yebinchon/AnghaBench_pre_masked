
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptr; } ;
struct TYPE_4__ {TYPE_1__ mem; } ;
struct chunk {scalar_t__ ch_type; TYPE_2__ ch_u; } ;
typedef scalar_t__ ssize_t ;
typedef int lba_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 struct chunk* FUNC_1 (int ) ;
 struct chunk* FUNC_2 (struct chunk*,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,void*,int) ;
 int VAR_6 ;

int
FUNC_5(lba_t VAR_7, void *VAR_8, ssize_t VAR_9)
{
 struct chunk *VAR_10;

 while (VAR_9 > 0) {
  if (!FUNC_3(VAR_8)) {
   VAR_10 = FUNC_1(VAR_7);
   if (VAR_10 == ((void*)0))
    return (VAR_5);

   if (VAR_10->ch_type == VAR_0)
    return (VAR_3);
   if (VAR_10->ch_type == VAR_2) {
    VAR_10 = FUNC_2(VAR_10, VAR_7);
    if (VAR_10 == ((void*)0))
     return (VAR_4);
   }
   FUNC_0(VAR_10->ch_type == VAR_1);
   FUNC_4(VAR_10->ch_u.mem.ptr, VAR_8, VAR_6);
  }
  VAR_7++;
  VAR_8 = (char *)VAR_8 + VAR_6;
  VAR_9--;
 }
 return (0);
}
