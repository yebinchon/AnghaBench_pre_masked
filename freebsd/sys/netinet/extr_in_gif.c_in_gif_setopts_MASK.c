
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct gif_softc {scalar_t__ gif_family; int gif_options; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gif_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct gif_softc*) ;
 int VAR_3 ;

int
FUNC_3(struct gif_softc *VAR_4, u_int VAR_5)
{


 FUNC_1(VAR_4->gif_family == VAR_0);
 FUNC_1(VAR_4->gif_options != VAR_5);

 if ((VAR_5 & VAR_1) !=
     (VAR_4->gif_options & VAR_1)) {
  FUNC_0(VAR_4, VAR_3);
  FUNC_0(VAR_4, VAR_2);
  VAR_4->gif_options = VAR_5;
  FUNC_2(VAR_4);
 }
 return (0);
}
