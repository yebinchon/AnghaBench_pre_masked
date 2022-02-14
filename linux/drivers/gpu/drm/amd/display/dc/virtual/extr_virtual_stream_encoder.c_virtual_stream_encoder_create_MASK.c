
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_encoder {int dummy; } ;
struct dc_context {int dummy; } ;
struct dc_bios {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct stream_encoder*) ;
 struct stream_encoder* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct stream_encoder*,struct dc_context*,struct dc_bios*) ;

struct stream_encoder *FUNC_4(
 struct dc_context *VAR_1, struct dc_bios *VAR_2)
{
 struct stream_encoder *VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);

 if (!VAR_3)
  return ((void*)0);

 if (FUNC_3(VAR_3, VAR_1, VAR_2))
  return VAR_3;

 FUNC_0();
 FUNC_1(VAR_3);
 return ((void*)0);
}
