
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_ifn {int registered_af; int ifn_index; int ifn_p; } ;


 int FUNC_0 (struct sctp_ifn*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct sctp_ifn* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sctp_ifn*) ;

__attribute__((used)) static void
FUNC_6(struct sctp_ifn *VAR_2, int VAR_3)
{
 struct sctp_ifn *VAR_4;

 VAR_4 = FUNC_4(VAR_2->ifn_p, VAR_2->ifn_index);
 if (VAR_4 == ((void*)0)) {

  return;
 }
 if (VAR_3 == 0)
  FUNC_2();
 FUNC_0(VAR_2, VAR_0);
 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_2->ifn_index,
     VAR_2->registered_af);
 if (VAR_3 == 0)
  FUNC_3();

 FUNC_5(VAR_2);
}
