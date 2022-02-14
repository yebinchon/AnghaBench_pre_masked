
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct link_bits TYPE_1__ ;


typedef int u16 ;
struct link_bits {int from; int to; } ;


 int FUNC_0 (TYPE_1__ const*) ;





__attribute__((used)) static u16 FUNC_1(u16 VAR_0)
{
 int VAR_1;
 u16 VAR_2 = 0;

 static const struct link_bits {
  u16 from;
  u16 to;
 } VAR_3[] = {
  { 131, 1 << (1 - 1) },
  { 130, 1 << (2 - 1) },
  { 129, 1 << (3 - 1) },
  { 128, 1 << (4 - 1) },
 };

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_3); VAR_1++) {
  if (VAR_0 & VAR_3[VAR_1].from)
   VAR_2 |= VAR_3[VAR_1].to;
 }
 return VAR_2;
}
