
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct repaper_epd {unsigned int height; int width; } ;
typedef enum repaper_stage { ____Placeholder_repaper_stage } repaper_stage ;


 int FUNC_0 (struct repaper_epd*,unsigned int,int const*,int ,int const*,int) ;

__attribute__((used)) static void FUNC_1(struct repaper_epd *VAR_0, const u8 *VAR_1,
          const u8 *VAR_2, enum repaper_stage VAR_3)
{
 unsigned int VAR_4;

 if (!VAR_2) {
  for (VAR_4 = 0; VAR_4 < VAR_0->height; VAR_4++) {
   FUNC_0(VAR_0, VAR_4,
      &VAR_1[VAR_4 * (VAR_0->width / 8)],
      0, ((void*)0), VAR_3);
  }
 } else {
  for (VAR_4 = 0; VAR_4 < VAR_0->height; VAR_4++) {
   size_t VAR_5 = VAR_4 * VAR_0->width / 8;

   FUNC_0(VAR_0, VAR_4, &VAR_1[VAR_5], 0, &VAR_2[VAR_5],
      VAR_3);
  }
 }
}
