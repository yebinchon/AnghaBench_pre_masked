
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_encoder {struct dc_bios* bp; int id; struct dc_context* ctx; int * funcs; } ;
struct dc_context {int dummy; } ;
struct dc_bios {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

bool FUNC_0(
 struct stream_encoder *VAR_2,
 struct dc_context *VAR_3,
 struct dc_bios *VAR_4)
{
 if (!VAR_2)
  return 0;
 if (!VAR_4)
  return 0;

 VAR_2->funcs = &VAR_1;
 VAR_2->ctx = VAR_3;
 VAR_2->id = VAR_0;
 VAR_2->bp = VAR_4;

 return 1;
}
