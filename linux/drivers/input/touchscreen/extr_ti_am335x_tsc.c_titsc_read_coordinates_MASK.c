
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct titsc {unsigned int coordinate_readouts; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int*,unsigned int,int,int ,int *) ;
 int VAR_1 ;
 void* FUNC_1 (struct titsc*,int ) ;

__attribute__((used)) static void FUNC_2(struct titsc *VAR_2,
  u32 *VAR_3, u32 *VAR_4, u32 *VAR_5, u32 *VAR_6)
{
 unsigned int VAR_7[7], VAR_8[7];
 unsigned int VAR_9, VAR_10 = 0, VAR_11 = 0;
 unsigned int VAR_12 = VAR_2->coordinate_readouts;

 for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
  VAR_7[VAR_9] = FUNC_1(VAR_2, VAR_0);
  VAR_7[VAR_9] &= 0xfff;
 }

 *VAR_5 = FUNC_1(VAR_2, VAR_0);
 *VAR_5 &= 0xfff;
 *VAR_6 = FUNC_1(VAR_2, VAR_0);
 *VAR_6 &= 0xfff;

 for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
  VAR_8[VAR_9] = FUNC_1(VAR_2, VAR_0);
  VAR_8[VAR_9] &= 0xfff;
 }
 if (VAR_12 <= 3) {
  for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
   VAR_11 += VAR_7[VAR_9];
   VAR_10 += VAR_8[VAR_9];
  }
  VAR_11 /= VAR_12;
  VAR_10 /= VAR_12;
 } else {
  FUNC_0(VAR_7, VAR_12, sizeof(unsigned int),
       VAR_1, ((void*)0));
  FUNC_0(VAR_8, VAR_12, sizeof(unsigned int),
       VAR_1, ((void*)0));
  for (VAR_9 = 1; VAR_9 < VAR_12 - 1; VAR_9++) {
   VAR_11 += VAR_7[VAR_9];
   VAR_10 += VAR_8[VAR_9];
  }
  VAR_11 /= VAR_12 - 2;
  VAR_10 /= VAR_12 - 2;
 }
 *VAR_4 = VAR_11;
 *VAR_3 = VAR_10;
}
