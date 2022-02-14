
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref {TYPE_1__* peer_ref; int name; int old_oid; } ;
struct TYPE_2__ {int name; int old_oid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(const struct ref *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;


 if (!VAR_2 && FUNC_0(&VAR_3->peer_ref->old_oid, &VAR_3->old_oid))
  return;

 VAR_4 = FUNC_2();
 VAR_5 = FUNC_3(FUNC_1(VAR_3->name));

 VAR_6 = FUNC_3(FUNC_1(VAR_3->peer_ref->name));







 if (VAR_0) {
  VAR_6 = 0;
  VAR_4 = VAR_4 * 2 / 3;
 }
 VAR_7 = 21 + VAR_5 + 4 + VAR_6;
 if (VAR_7 >= VAR_4)
  return;






 if (VAR_1 < VAR_5)
  VAR_1 = VAR_5;
}
