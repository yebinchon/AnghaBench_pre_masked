
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct benchmarks {int member_1; char* member_2; int title; int offset; scalar_t__ fn; int * member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_6;
 struct benchmarks VAR_7[] = {
  {VAR_0, 0, "nop"},





  {VAR_1, 0, "stmdb	sp!, {r3-r11,lr}"},
  {VAR_1, 4, "ldmia	sp!, {r3-r11,pc}"},
  {VAR_2, 0, "stmdb	sp!, {r0-r8,lr}"},
  {VAR_2, 4, "ldmia	sp!, {r0-r8,pc}"},
  {VAR_3, 0, "stmdb	sp!, {r4,lr}"},
  {VAR_3, 4, "ldmia	sp!, {r4,pc}"},
  {VAR_4, 0, "stmdb	sp!, {r0,lr}"},
  {VAR_4, 4, "ldmia	sp!, {r0,pc}"},




  {0}
 };

 struct benchmarks *VAR_8;
 for (VAR_8 = VAR_7; VAR_8->fn; ++VAR_8) {
  VAR_6 = FUNC_0(VAR_8->fn, VAR_8->offset);
  if (VAR_6 < 0)
   return VAR_6;
  FUNC_1("    %dns for kprobe %s\n", VAR_6, VAR_8->title);
 }

 FUNC_1("\n");
 return 0;
}
