
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vnet {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct vnet*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,int ,void (*) (void*),void*,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_11(void *VAR_11)
{
 uint32_t VAR_12;

 FUNC_1((struct vnet *)VAR_11);



 FUNC_6(&VAR_8);






 FUNC_2(&VAR_8);
 FUNC_5(&VAR_8, ((void*)0));
 FUNC_3(&VAR_8);



 if (VAR_4 != 0 &&
     VAR_5 + VAR_6 <= VAR_10) {
  VAR_5 = VAR_10;
  FUNC_8(&VAR_8);



 }







 if (VAR_0 < VAR_2 &&
     (VAR_0 < VAR_3 / 2 || (
     VAR_0 < VAR_3 && VAR_1 > 8))) {
  VAR_12 = 1 << FUNC_10(VAR_3);
  if (VAR_12 > VAR_2)
   VAR_12 = VAR_2;
  FUNC_7(&VAR_8, VAR_12);
 }

 FUNC_4(&VAR_7, VAR_9, FUNC_11, VAR_11, 0);
 FUNC_0();
}
