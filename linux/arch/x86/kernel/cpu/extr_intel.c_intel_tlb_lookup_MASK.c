
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char const descriptor; int tlb_type; int entries; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static void FUNC_0(const unsigned char VAR_9)
{
 unsigned char VAR_10;
 if (VAR_9 == 0)
  return;


 for (VAR_10 = 0; VAR_1[VAR_10].descriptor != VAR_9 && VAR_1[VAR_10].descriptor != 0; VAR_10++)

  ;

 if (VAR_1[VAR_10].tlb_type == 0)
  return;

 switch (VAR_1[VAR_10].tlb_type) {
 case 141:
  if (VAR_7[VAR_0] < VAR_1[VAR_10].entries)
   VAR_7[VAR_0] = VAR_1[VAR_10].entries;
  if (VAR_4[VAR_0] < VAR_1[VAR_10].entries)
   VAR_4[VAR_0] = VAR_1[VAR_10].entries;
  break;
 case 140:
  if (VAR_7[VAR_0] < VAR_1[VAR_10].entries)
   VAR_7[VAR_0] = VAR_1[VAR_10].entries;
  if (VAR_4[VAR_0] < VAR_1[VAR_10].entries)
   VAR_4[VAR_0] = VAR_1[VAR_10].entries;
  if (VAR_6[VAR_0] < VAR_1[VAR_10].entries)
   VAR_6[VAR_0] = VAR_1[VAR_10].entries;
  if (VAR_3[VAR_0] < VAR_1[VAR_10].entries)
   VAR_3[VAR_0] = VAR_1[VAR_10].entries;
  if (VAR_8[VAR_0] < VAR_1[VAR_10].entries)
   VAR_8[VAR_0] = VAR_1[VAR_10].entries;
  if (VAR_5[VAR_0] < VAR_1[VAR_10].entries)
   VAR_5[VAR_0] = VAR_1[VAR_10].entries;
  break;
 case 128:
  if (VAR_7[VAR_0] < VAR_1[VAR_10].entries)
   VAR_7[VAR_0] = VAR_1[VAR_10].entries;
  if (VAR_6[VAR_0] < VAR_1[VAR_10].entries)
   VAR_6[VAR_0] = VAR_1[VAR_10].entries;
  if (VAR_8[VAR_0] < VAR_1[VAR_10].entries)
   VAR_8[VAR_0] = VAR_1[VAR_10].entries;
  break;
 case 130:
  if (VAR_7[VAR_0] < VAR_1[VAR_10].entries)
   VAR_7[VAR_0] = VAR_1[VAR_10].entries;
  break;
 case 129:
  if (VAR_8[VAR_0] < VAR_1[VAR_10].entries)
   VAR_8[VAR_0] = VAR_1[VAR_10].entries;
  break;
 case 131:
  if (VAR_6[VAR_0] < VAR_1[VAR_10].entries)
   VAR_6[VAR_0] = VAR_1[VAR_10].entries;
  if (VAR_8[VAR_0] < VAR_1[VAR_10].entries)
   VAR_8[VAR_0] = VAR_1[VAR_10].entries;
  break;
 case 134:
 case 138:
  if (VAR_4[VAR_0] < VAR_1[VAR_10].entries)
   VAR_4[VAR_0] = VAR_1[VAR_10].entries;
  break;
 case 132:
 case 137:
  if (VAR_5[VAR_0] < VAR_1[VAR_10].entries)
   VAR_5[VAR_0] = VAR_1[VAR_10].entries;
  break;
 case 135:
 case 139:
  if (VAR_3[VAR_0] < VAR_1[VAR_10].entries)
   VAR_3[VAR_0] = VAR_1[VAR_10].entries;
  if (VAR_5[VAR_0] < VAR_1[VAR_10].entries)
   VAR_5[VAR_0] = VAR_1[VAR_10].entries;
  break;
 case 133:
  if (VAR_4[VAR_0] < VAR_1[VAR_10].entries)
   VAR_4[VAR_0] = VAR_1[VAR_10].entries;
  if (VAR_5[VAR_0] < VAR_1[VAR_10].entries)
   VAR_5[VAR_0] = VAR_1[VAR_10].entries;
  break;
 case 136:
  if (VAR_2[VAR_0] < VAR_1[VAR_10].entries)
   VAR_2[VAR_0] = VAR_1[VAR_10].entries;
  break;
 }
}
