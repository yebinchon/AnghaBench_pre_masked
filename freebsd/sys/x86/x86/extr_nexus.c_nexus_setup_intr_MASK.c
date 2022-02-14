
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int driver_filter_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,void (*) (void*),void*,int,void**,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*) ;
 int FUNC_7 (struct resource*,void*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2, device_t VAR_3, struct resource *VAR_4,
   int VAR_5, driver_filter_t VAR_6, void (*VAR_7)(void *),
   void *VAR_8, void **VAR_9)
{
 int VAR_10, VAR_11;


 if (VAR_4 == ((void*)0))
  FUNC_3("nexus_setup_intr: NULL irq resource!");

 *VAR_9 = ((void*)0);
 if ((FUNC_5(VAR_4) & VAR_1) == 0)
  VAR_5 |= VAR_0;




 VAR_10 = FUNC_4(VAR_4);
 if (VAR_10)
  return (VAR_10);
 if (FUNC_0(VAR_3, &VAR_11) != 0)
  VAR_11 = 0;

 VAR_10 = FUNC_2(FUNC_1(VAR_3),
     FUNC_6(VAR_4), VAR_6, VAR_7, VAR_8, VAR_5, VAR_9, VAR_11);
 if (VAR_10 == 0)
  FUNC_7(VAR_4, *VAR_9);

 return (VAR_10);
}
