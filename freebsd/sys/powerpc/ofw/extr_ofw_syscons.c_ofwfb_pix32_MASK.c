
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct ofwfb_softc {int * sc_tag; } ;
struct TYPE_2__ {int red; int green; int blue; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static u_int
FUNC_0(struct ofwfb_softc *VAR_2, int VAR_3)
{
 u_int VAR_4;

 if (VAR_2->sc_tag == &VAR_0)
  VAR_4 = (VAR_1[VAR_3].red << 16) |
   (VAR_1[VAR_3].green << 8) |
   VAR_1[VAR_3].blue;
 else
  VAR_4 = (VAR_1[VAR_3].blue << 16) |
   (VAR_1[VAR_3].green << 8) |
   VAR_1[VAR_3].red;

 return (VAR_4);
}
