
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct screen_info {unsigned int lfb_linelength; unsigned int lfb_width; unsigned int lfb_height; } ;
struct console {int dummy; } ;
struct TYPE_2__ {unsigned int width; unsigned int height; } ;


 int FUNC_0 (unsigned int) ;
 void* FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (void*,unsigned int) ;
 int FUNC_4 (void*,char const,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct screen_info VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct console *VAR_4, const char *VAR_5, unsigned int VAR_6)
{
 struct screen_info *VAR_7;
 unsigned int VAR_8;
 const char *VAR_9;
 void *VAR_10;

 VAR_7 = &VAR_3;
 VAR_8 = VAR_7->lfb_linelength;

 while (VAR_6) {
  unsigned int VAR_11;
  unsigned int VAR_12, VAR_13 = 0;

  for (VAR_9 = VAR_5; *VAR_9 && *VAR_9 != '\n'; VAR_9++) {
   if (VAR_13 == VAR_6)
    break;
   VAR_13++;
  }

  VAR_11 = (VAR_7->lfb_width - VAR_0) / VAR_2->width;
  if (VAR_13 > VAR_11)
   VAR_13 = VAR_11;

  for (VAR_12 = 0; VAR_12 < VAR_2->height; VAR_12++) {
   unsigned int VAR_14, VAR_15;

   VAR_10 = FUNC_1((VAR_1 + VAR_12) * VAR_8, VAR_8);
   if (!VAR_10)
    return;

   VAR_9 = VAR_5;
   VAR_14 = VAR_13;
   VAR_15 = VAR_0;

   while (VAR_14-- > 0) {
    FUNC_4(VAR_10 + VAR_15*4, *VAR_9, VAR_12);
    VAR_15 += VAR_2->width;
    VAR_9++;
   }

   FUNC_3(VAR_10, VAR_8);
  }

  VAR_6 -= VAR_13;
  VAR_0 += VAR_13 * VAR_2->width;
  VAR_5 += VAR_13;

  if (VAR_6 > 0 && *VAR_9 == '\n') {
   VAR_0 = 0;
   VAR_1 += VAR_2->height;
   VAR_5++;
   VAR_6--;
  }

  if (VAR_0 + VAR_2->width > VAR_7->lfb_width) {
   VAR_0 = 0;
   VAR_1 += VAR_2->height;
  }

  if (VAR_1 + VAR_2->height > VAR_7->lfb_height) {
   u32 VAR_16;

   VAR_1 -= VAR_2->height;
   FUNC_2();

   for (VAR_16 = 0; VAR_16 < VAR_2->height; VAR_16++)
    FUNC_0(VAR_1 + VAR_16);
  }
 }
}
