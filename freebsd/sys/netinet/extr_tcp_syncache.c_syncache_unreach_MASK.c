
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcp_seq ;
struct syncache_head {int dummy; } ;
struct syncache {scalar_t__ sc_iss; int sc_flags; int sc_rxmits; } ;
struct in_conninfo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct syncache_head*) ;
 int FUNC_1 (struct syncache_head*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct syncache*,struct syncache_head*) ;
 struct syncache* FUNC_6 (struct in_conninfo*,struct syncache_head**) ;
 int VAR_1 ;

void
FUNC_7(struct in_conninfo *VAR_2, tcp_seq VAR_3)
{
 struct syncache *VAR_4;
 struct syncache_head *VAR_5;

 if (FUNC_4())
  return;
 VAR_4 = FUNC_6(VAR_2, &VAR_5);
 FUNC_0(VAR_5);
 if (VAR_4 == ((void*)0))
  goto done;


 if (FUNC_3(VAR_3) != VAR_4->sc_iss)
  goto done;
 if ((VAR_4->sc_flags & VAR_0) == 0 || VAR_4->sc_rxmits < 3 + 1) {
  VAR_4->sc_flags |= VAR_0;
  goto done;
 }
 FUNC_5(VAR_4, VAR_5);
 FUNC_2(VAR_1);
done:
 FUNC_1(VAR_5);
}
