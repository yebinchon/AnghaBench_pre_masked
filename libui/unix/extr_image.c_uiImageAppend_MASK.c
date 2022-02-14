
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int images; } ;
typedef TYPE_1__ uiImage ;
typedef int cairo_surface_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(uiImage *VAR_2, void *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 cairo_surface_t *VAR_7;
 uint8_t *VAR_8, *VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;


 VAR_7 = FUNC_0(VAR_0,
  VAR_4, VAR_5);
 if (FUNC_5(VAR_7) != VAR_1)
            ;
 FUNC_3(VAR_7);

 VAR_9 = (uint8_t *) VAR_3;
 VAR_8 = (uint8_t *) FUNC_1(VAR_7);
 VAR_10 = FUNC_2(VAR_7);
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  for (VAR_11 = 0; VAR_11 < VAR_4 * 4; VAR_11 += 4) {
   union {
    uint32_t v32;
    uint8_t v8[4];
   } VAR_13;

   VAR_13.v32 = ((uint32_t) (VAR_9[VAR_11 + 3])) << 24;
   VAR_13.v32 |= ((uint32_t) (VAR_9[VAR_11])) << 16;
   VAR_13.v32 |= ((uint32_t) (VAR_9[VAR_11 + 1])) << 8;
   VAR_13.v32 |= ((uint32_t) (VAR_9[VAR_11 + 2]));
   VAR_8[VAR_11] = VAR_13.v8[0];
   VAR_8[VAR_11 + 1] = VAR_13.v8[1];
   VAR_8[VAR_11 + 2] = VAR_13.v8[2];
   VAR_8[VAR_11 + 3] = VAR_13.v8[3];
  }
  VAR_9 += VAR_6;
  VAR_8 += VAR_10;
 }

 FUNC_4(VAR_7);
 FUNC_6(VAR_2->images, VAR_7);
}
