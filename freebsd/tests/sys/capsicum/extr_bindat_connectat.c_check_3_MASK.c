
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ (* socket_fun ) (int,struct sockaddr const*,int) ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,int *) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(socket_fun VAR_4, int VAR_5, const struct sockaddr_in *VAR_6,
    cap_rights_t *VAR_7, cap_rights_t *VAR_8)
{

 FUNC_0((VAR_5 = FUNC_4(VAR_0, VAR_3, 0)) >= 0);
 FUNC_0(FUNC_2(VAR_5, VAR_7) >= 0);
 FUNC_1(VAR_1,
     VAR_4(VAR_5, (const struct sockaddr *)VAR_6,
         sizeof(struct sockaddr_in)) < 0);
 FUNC_0(FUNC_2(VAR_5,
                 FUNC_3(VAR_7, VAR_8)) >= 0);
 FUNC_1(VAR_2,
     VAR_4(VAR_5, (const struct sockaddr *)VAR_6,
         sizeof(struct sockaddr_in)) < 0);
}
