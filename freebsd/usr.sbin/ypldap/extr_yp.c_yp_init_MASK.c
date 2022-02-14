
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yp_data {int * yp_trans_tcp; int * yp_trans_udp; int yd_events; } ;
struct env {struct yp_data* sc_yp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 struct yp_data* FUNC_1 (int,int) ;
 struct env* VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int * FUNC_5 (int ,int ,int ) ;
 int * FUNC_6 (int ) ;
 int VAR_6 ;

void
FUNC_7(struct env *VAR_7)
{
 struct yp_data *VAR_8;

 if ((VAR_8 = FUNC_1(1, sizeof(*VAR_8))) == ((void*)0))
  FUNC_2(((void*)0));
 FUNC_0(&VAR_8->yd_events);

 VAR_5 = VAR_7;
 VAR_5->sc_yp = VAR_8;

 (void)FUNC_3(VAR_3, VAR_4);

 if ((VAR_8->yp_trans_udp = FUNC_6(VAR_2)) == ((void*)0))
  FUNC_2("cannot create udp service");
 if ((VAR_8->yp_trans_tcp = FUNC_5(VAR_2, 0, 0)) == ((void*)0))
  FUNC_2("cannot create tcp service");

 if (!FUNC_4(VAR_8->yp_trans_udp, VAR_3, VAR_4,
     VAR_6, VAR_1)) {
  FUNC_2("unable to register (YPPROG, YPVERS, udp)");
 }
 if (!FUNC_4(VAR_8->yp_trans_tcp, VAR_3, VAR_4,
     VAR_6, VAR_0)) {
  FUNC_2("unable to register (YPPROG, YPVERS, tcp)");
 }
}
