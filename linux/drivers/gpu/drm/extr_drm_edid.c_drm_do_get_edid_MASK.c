
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct edid {int dummy; } ;
struct drm_connector {int null_edid_counter; int edid_corrupt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_connector*,int*,int) ;
 scalar_t__ FUNC_1 (int*,int,int,int *) ;
 scalar_t__ FUNC_2 (int*,int) ;
 struct edid* FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int,int ) ;
 int* FUNC_6 (int,int,int ) ;
 int* FUNC_7 (int*,int,int ) ;
 int FUNC_8 (int*,int*,int) ;

struct edid *FUNC_9(struct drm_connector *VAR_2,
 int (*VAR_3)(void *VAR_4, u8 *VAR_5, unsigned int VAR_6,
         size_t VAR_7),
 void *VAR_8)
{
 int VAR_9, VAR_10 = 0, VAR_11 = 0;
 u8 *VAR_12, *VAR_13;
 struct edid *VAR_14;

 VAR_14 = FUNC_3(VAR_2);
 if (VAR_14)
  return VAR_14;

 if ((VAR_12 = FUNC_5(VAR_0, VAR_1)) == ((void*)0))
  return ((void*)0);


 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  if (VAR_3(VAR_8, VAR_12, 0, VAR_0))
   goto out;
  if (FUNC_1(VAR_12, 0, 0,
      &VAR_2->edid_corrupt))
   break;
  if (VAR_9 == 0 && FUNC_2(VAR_12, VAR_0)) {
   VAR_2->null_edid_counter++;
   goto carp;
  }
 }
 if (VAR_9 == 4)
  goto carp;


 VAR_11 = VAR_12[0x7e];
 if (VAR_11 == 0)
  return (struct edid *)VAR_12;

 VAR_13 = FUNC_7(VAR_12, (VAR_11 + 1) * VAR_0, VAR_1);
 if (!VAR_13)
  goto out;
 VAR_12 = VAR_13;

 for (VAR_10 = 1; VAR_10 <= VAR_12[0x7e]; VAR_10++) {
  u8 *VAR_15 = VAR_12 + VAR_10 * VAR_0;

  for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
   if (VAR_3(VAR_8, VAR_15, VAR_10, VAR_0))
    goto out;
   if (FUNC_1(VAR_15, VAR_10, 0, ((void*)0)))
    break;
  }

  if (VAR_9 == 4)
   VAR_11--;
 }

 if (VAR_11 != VAR_12[0x7e]) {
  u8 *VAR_16;

  FUNC_0(VAR_2, VAR_12, VAR_12[0x7e] + 1);

  VAR_12[VAR_0-1] += VAR_12[0x7e] - VAR_11;
  VAR_12[0x7e] = VAR_11;

  VAR_13 = FUNC_6(VAR_11 + 1, VAR_0,
        VAR_1);
  if (!VAR_13)
   goto out;

  VAR_16 = VAR_13;
  for (VAR_9 = 0; VAR_9 <= VAR_12[0x7e]; VAR_9++) {
   u8 *VAR_17 = VAR_12 + VAR_9 * VAR_0;

   if (!FUNC_1(VAR_17, VAR_9, 0, ((void*)0)))
    continue;

   FUNC_8(VAR_16, VAR_17, VAR_0);
   VAR_16 += VAR_0;
  }

  FUNC_4(VAR_12);
  VAR_12 = VAR_13;
 }

 return (struct edid *)VAR_12;

carp:
 FUNC_0(VAR_2, VAR_12, 1);
out:
 FUNC_4(VAR_12);
 return ((void*)0);
}
