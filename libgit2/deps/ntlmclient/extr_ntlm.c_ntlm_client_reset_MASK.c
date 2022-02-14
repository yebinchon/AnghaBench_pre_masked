
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ntlm_client {int dummy; } ;
typedef int ntlm_unicode_ctx ;
typedef int ntlm_hmac_ctx ;
typedef int ntlm_client_flags ;
struct TYPE_11__ {int buf; } ;
struct TYPE_10__ {int target_server_dns; int target_server; int target_domain_dns; int target_domain; int target; int target_info; } ;
struct TYPE_9__ {int buf; } ;
struct TYPE_12__ {int * unicode_ctx; int * hmac_ctx; int flags; int ntlm2_response; int target_utf16; int target; int hostdomain; int hostname_utf16; int hostname; TYPE_3__ response; TYPE_2__ challenge; TYPE_1__ negotiate; } ;
typedef TYPE_4__ ntlm_client ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;

void FUNC_4(ntlm_client *VAR_0)
{
 ntlm_client_flags VAR_1;
 ntlm_hmac_ctx *VAR_2;
 ntlm_unicode_ctx *VAR_3;

 FUNC_0(VAR_0);

 FUNC_1(VAR_0->negotiate.buf);
 FUNC_1(VAR_0->challenge.target_info);
 FUNC_1(VAR_0->challenge.target);
 FUNC_1(VAR_0->challenge.target_domain);
 FUNC_1(VAR_0->challenge.target_domain_dns);
 FUNC_1(VAR_0->challenge.target_server);
 FUNC_1(VAR_0->challenge.target_server_dns);
 FUNC_1(VAR_0->response.buf);

 FUNC_1(VAR_0->hostname);
 FUNC_1(VAR_0->hostname_utf16);
 FUNC_1(VAR_0->hostdomain);

 FUNC_1(VAR_0->target);
 FUNC_1(VAR_0->target_utf16);

 FUNC_1(VAR_0->ntlm2_response);

 FUNC_2(VAR_0);

 VAR_1 = VAR_0->flags;
 VAR_2 = VAR_0->hmac_ctx;
 VAR_3 = VAR_0->unicode_ctx;

 FUNC_3(VAR_0, 0, sizeof(struct ntlm_client));

 VAR_0->flags = VAR_1;
 VAR_0->hmac_ctx = VAR_2;
 VAR_0->unicode_ctx = VAR_3;
}
