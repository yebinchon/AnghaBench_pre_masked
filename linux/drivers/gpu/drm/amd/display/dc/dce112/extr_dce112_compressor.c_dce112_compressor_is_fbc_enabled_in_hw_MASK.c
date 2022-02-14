
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct compressor {int attached_inst; int ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

bool FUNC_2(
 struct compressor *VAR_9,
 uint32_t *VAR_10)
{

 uint32_t VAR_11;

 VAR_11 = FUNC_0(VAR_9->ctx, VAR_8);
 if (FUNC_1(VAR_11, VAR_4, VAR_1)) {
  if (VAR_10 != ((void*)0))
   *VAR_10 = VAR_9->attached_inst;
  return 1;
 }

 VAR_11 = FUNC_0(VAR_9->ctx, VAR_7);
 if (FUNC_1(VAR_11, VAR_3, VAR_5)) {
  VAR_11 = FUNC_0(VAR_9->ctx, VAR_6);

  if (FUNC_1(VAR_11, VAR_0, VAR_2)) {
   if (VAR_10 != ((void*)0))
    *VAR_10 =
     VAR_9->attached_inst;
   return 1;
  }
 }
 return 0;
}
