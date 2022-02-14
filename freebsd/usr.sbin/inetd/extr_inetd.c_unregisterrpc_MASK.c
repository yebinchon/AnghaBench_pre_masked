
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct servtab {scalar_t__ se_socktype; scalar_t__ se_family; scalar_t__ se_checked; scalar_t__ se_rpc_prog; scalar_t__ se_rpc_lowvers; scalar_t__ se_rpc_highvers; int se_fd; scalar_t__ se_nomapped; int se_proto; int se_rpc; struct servtab* se_next; } ;
struct netconfig {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,struct servtab*) ;
 int FUNC_2 (scalar_t__,scalar_t__,struct netconfig*) ;
 struct servtab* VAR_5 ;
 long FUNC_3 (int ) ;
 int FUNC_4 (long) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 struct netconfig* VAR_6 ;
 struct netconfig* VAR_7 ;
 struct netconfig* VAR_8 ;
 struct netconfig* VAR_9 ;

__attribute__((used)) static void
FUNC_6(struct servtab *VAR_10)
{
        u_int VAR_11;
        struct servtab *VAR_12;
 long VAR_13;
 struct netconfig *VAR_14, *VAR_15;

 VAR_13 = FUNC_3(VAR_2);
 VAR_14 = VAR_10->se_socktype == VAR_3 ? VAR_9 : VAR_7;
 VAR_15 = VAR_10->se_socktype == VAR_3 ? VAR_8 : VAR_6;
 if (VAR_10->se_family == VAR_0)
  VAR_15 = ((void*)0);
 else if (VAR_10->se_nomapped)
  VAR_14 = ((void*)0);
        for (VAR_12 = VAR_5; VAR_12; VAR_12 = VAR_12->se_next) {
                if (VAR_12 == VAR_10)
                        continue;
  if (VAR_12->se_checked == 0 ||
                    !VAR_12->se_rpc ||
      FUNC_5(VAR_10->se_proto, VAR_12->se_proto) != 0 ||
                    VAR_10->se_rpc_prog != VAR_12->se_rpc_prog)
   continue;
  if (VAR_12->se_family == VAR_0)
   VAR_14 = ((void*)0);
  if (VAR_12->se_family == VAR_1) {
   VAR_15 = ((void*)0);
   if (!VAR_10->se_nomapped)
    VAR_14 = ((void*)0);
  }
  if (VAR_14 == ((void*)0) && VAR_15 == ((void*)0))
   return;
        }
        if (VAR_4)
                FUNC_1("UNREG", VAR_10);
        for (VAR_11 = VAR_10->se_rpc_lowvers; VAR_11 <= VAR_10->se_rpc_highvers; VAR_11++) {
  if (VAR_14)
   FUNC_2(VAR_10->se_rpc_prog, VAR_11, VAR_14);
  if (VAR_15)
   FUNC_2(VAR_10->se_rpc_prog, VAR_11, VAR_15);
 }
        if (VAR_10->se_fd != -1)
                (void) FUNC_0(VAR_10->se_fd);
        VAR_10->se_fd = -1;
 (void) FUNC_4(VAR_13);
}
