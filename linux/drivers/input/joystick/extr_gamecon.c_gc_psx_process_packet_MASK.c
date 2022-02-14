
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_pad {scalar_t__ type; } ;
struct gc {struct gc_pad* pads; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gc*,unsigned char**,unsigned char*) ;
 int FUNC_1 (struct gc_pad*,unsigned char,unsigned char*) ;

__attribute__((used)) static void FUNC_2(struct gc *VAR_4)
{
 unsigned char VAR_5[VAR_1][VAR_3];
 unsigned char VAR_6[VAR_1];
 struct gc_pad *VAR_7;
 int VAR_8;

 FUNC_0(VAR_4, VAR_5, VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7 = &VAR_4->pads[VAR_8];
  if (VAR_7->type == VAR_2 || VAR_7->type == VAR_0)
   FUNC_1(VAR_7, VAR_6[VAR_8], VAR_5[VAR_8]);
 }
}
