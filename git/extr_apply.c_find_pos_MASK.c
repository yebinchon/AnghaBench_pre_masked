
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct image {int nr; TYPE_1__* line; } ;
struct apply_state {int dummy; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 scalar_t__ FUNC_0 (struct apply_state*,struct image*,struct image*,struct image*,unsigned long,int,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_1(struct apply_state *VAR_0,
      struct image *VAR_1,
      struct image *VAR_2,
      struct image *VAR_3,
      int VAR_4,
      unsigned VAR_5,
      int VAR_6, int VAR_7)
{
 int VAR_8;
 unsigned long VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;






 if (VAR_6)
  VAR_4 = 0;
 else if (VAR_7)
  VAR_4 = VAR_1->nr - VAR_2->nr;






 if ((size_t) VAR_4 > VAR_1->nr)
  VAR_4 = VAR_1->nr;

 VAR_11 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_11 += VAR_1->line[VAR_8].len;





 VAR_9 = VAR_11;
 VAR_12 = VAR_4;
 VAR_10 = VAR_11;
 VAR_13 = VAR_4;
 VAR_14 = VAR_4;

 for (VAR_8 = 0; ; VAR_8++) {
  if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
       VAR_11, VAR_14, VAR_5,
       VAR_6, VAR_7))
   return VAR_14;

 again:
  if (VAR_12 == 0 && VAR_13 == VAR_1->nr)
   break;

  if (VAR_8 & 1) {
   if (VAR_12 == 0) {
    VAR_8++;
    goto again;
   }
   VAR_12--;
   VAR_9 -= VAR_1->line[VAR_12].len;
   VAR_11 = VAR_9;
   VAR_14 = VAR_12;
  } else {
   if (VAR_13 == VAR_1->nr) {
    VAR_8++;
    goto again;
   }
   VAR_10 += VAR_1->line[VAR_13].len;
   VAR_13++;
   VAR_11 = VAR_10;
   VAR_14 = VAR_13;
  }

 }
 return -1;
}
