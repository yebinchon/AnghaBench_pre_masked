
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int password; scalar_t__ username; } ;
struct TYPE_5__ {int curlauth_param; int name; } ;
typedef int CURL ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__*,int ) ;
 int FUNC_7 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(CURL *VAR_5)
{
 if (VAR_3.username) {
  if (!VAR_3.password)
   FUNC_1(&VAR_3);
  FUNC_4(VAR_5);
 }

 FUNC_6(&VAR_2, FUNC_3("GIT_HTTP_PROXY_AUTHMETHOD"));
}
