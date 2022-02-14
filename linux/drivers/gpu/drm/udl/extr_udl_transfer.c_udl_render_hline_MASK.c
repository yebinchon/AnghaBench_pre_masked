
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u32 ;
struct urb {char* transfer_buffer; int transfer_buffer_length; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const**,char const*,int*,char**,char*,int) ;
 struct urb* FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*,struct urb*,int) ;

int FUNC_4(struct drm_device *VAR_0, int VAR_1, struct urb **VAR_2,
       const char *VAR_3, char **VAR_4,
       u32 VAR_5, u32 VAR_6,
       u32 VAR_7,
       int *VAR_8, int *VAR_9)
{
 const u8 *VAR_10, *VAR_11, *VAR_12;
 u32 VAR_13 = 0 + (VAR_6 >> VAR_1) * 2;
 struct urb *VAR_14 = *VAR_2;
 u8 *VAR_15 = *VAR_4;
 u8 *VAR_16 = (u8 *) VAR_14->transfer_buffer + VAR_14->transfer_buffer_length;

 FUNC_0(!(VAR_1 == 1 || VAR_1 == 2));

 VAR_10 = (u8 *) (VAR_3 + VAR_5);
 VAR_12 = VAR_10;
 VAR_11 = VAR_12 + VAR_7;

 while (VAR_12 < VAR_11) {

  FUNC_1(&VAR_12,
        VAR_11, &VAR_13,
        (u8 **) &VAR_15, (u8 *) VAR_16, VAR_1);

  if (VAR_15 >= VAR_16) {
   int VAR_17 = VAR_15 - (u8 *) VAR_14->transfer_buffer;
   if (FUNC_3(VAR_0, VAR_14, VAR_17))
    return 1;
   *VAR_9 += VAR_17;
   VAR_14 = FUNC_2(VAR_0);
   if (!VAR_14)
    return 1;
   *VAR_2 = VAR_14;
   VAR_15 = VAR_14->transfer_buffer;
   VAR_16 = &VAR_15[VAR_14->transfer_buffer_length];
  }
 }

 *VAR_4 = VAR_15;

 return 0;
}
