
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dc_link {TYPE_4__* ctx; TYPE_2__* link_enc; } ;
struct TYPE_8__ {int logger; } ;
struct TYPE_7__ {TYPE_1__* funcs; } ;
struct TYPE_6__ {int (* is_in_alt_mode ) (TYPE_2__*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (unsigned long long,int) ;
 unsigned long long FUNC_3 (TYPE_4__*,unsigned long long,unsigned long long) ;
 unsigned long long FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (unsigned int) ;

bool FUNC_8(struct dc_link *VAR_0)
{





 unsigned int VAR_1 = 500;
 unsigned int VAR_2 = 400;
 bool VAR_3;
 unsigned long long VAR_4;
 unsigned long long VAR_5;
 unsigned long long VAR_6;
 int VAR_7;

 FUNC_0(VAR_0->ctx->logger);

 if (VAR_0->link_enc->funcs->is_in_alt_mode == ((void*)0))
  return 1;

 VAR_3 = VAR_0->link_enc->funcs->is_in_alt_mode(VAR_0->link_enc);
 FUNC_1("DP Alt mode state on HPD: %d\n", VAR_3);

 if (VAR_3)
  return 1;

 VAR_4 = FUNC_4(VAR_0->ctx);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  FUNC_7(VAR_1);

  if (VAR_0->link_enc->funcs->is_in_alt_mode(VAR_0->link_enc)) {

   VAR_5 = FUNC_4(VAR_0->ctx);
   VAR_6 = FUNC_3(
    VAR_0->ctx, VAR_5, VAR_4);
   FUNC_1("Alt mode entered finished after %llu ms\n",
           FUNC_2(VAR_6, 1000000));
   return 1;
  }

 }
 VAR_5 = FUNC_4(VAR_0->ctx);
 VAR_6 = FUNC_3(VAR_0->ctx, VAR_5,
          VAR_4);
 FUNC_1("Alt mode has timed out after %llu ms\n",
   FUNC_2(VAR_6, 1000000));
 return 0;
}
