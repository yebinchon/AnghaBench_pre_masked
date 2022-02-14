
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expansion_card {scalar_t__ loader; scalar_t__ claimed; } ;
struct ecard_request {struct expansion_card* ec; int fn; } ;
struct ecard_driver {int (* shutdown ) (struct expansion_card*) ;} ;
struct device {scalar_t__ driver; } ;


 struct expansion_card* FUNC_0 (struct device*) ;
 struct ecard_driver* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ecard_request*) ;
 int VAR_0 ;
 int FUNC_3 (struct expansion_card*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1)
{
 struct expansion_card *VAR_2 = FUNC_0(VAR_1);
 struct ecard_driver *VAR_3 = FUNC_1(VAR_1->driver);
 struct ecard_request VAR_4;

 if (VAR_1->driver) {
  if (VAR_3->shutdown)
   VAR_3->shutdown(VAR_2);
  VAR_2->claimed = 0;
 }




 if (VAR_2->loader) {
  VAR_4.fn = VAR_0;
  VAR_4.ec = VAR_2;
  FUNC_2(&VAR_4);
 }
}
