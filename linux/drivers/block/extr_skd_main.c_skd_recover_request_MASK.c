
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skd_request_context {scalar_t__ state; scalar_t__ n_sg; int status; } ;
struct skd_device {int dummy; } ;
struct request {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct request*) ;
 struct skd_request_context* FUNC_1 (struct request*) ;
 int FUNC_2 (struct skd_device* const,struct skd_request_context*,char*) ;
 int FUNC_3 (struct skd_device* const,struct skd_request_context*) ;

__attribute__((used)) static bool FUNC_4(struct request *VAR_3, void *VAR_4, bool VAR_5)
{
 struct skd_device *const VAR_6 = VAR_4;
 struct skd_request_context *VAR_7 = FUNC_1(VAR_3);

 if (VAR_7->state != VAR_1)
  return 1;

 FUNC_2(VAR_6, VAR_7, "recover");


 if (VAR_7->n_sg > 0)
  FUNC_3(VAR_6, VAR_7);

 VAR_7->state = VAR_2;
 VAR_7->status = VAR_0;
 FUNC_0(VAR_3);
 return 1;
}
