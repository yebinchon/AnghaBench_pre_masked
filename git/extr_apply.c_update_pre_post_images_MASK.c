
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct image {int nr; char* buf; int len; TYPE_1__* line; int line_allocated; } ;
struct TYPE_2__ {int flag; size_t len; } ;


 int FUNC_0 (char*,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (struct image*,char*,size_t,int) ;
 char* FUNC_6 (size_t) ;

__attribute__((used)) static void FUNC_7(struct image *VAR_1,
       struct image *VAR_2,
       char *VAR_3,
       size_t VAR_4, size_t VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 char *VAR_9, *VAR_10, *VAR_11;
 struct image VAR_12;






 FUNC_5(&VAR_12, VAR_3, VAR_4, 1);
 FUNC_1(VAR_5
        ? VAR_12.nr == VAR_1->nr
        : VAR_12.nr <= VAR_1->nr);
 for (VAR_6 = 0; VAR_6 < VAR_12.nr; VAR_6++)
  VAR_12.line[VAR_6].flag = VAR_1->line[VAR_6].flag;
 FUNC_2(VAR_1->line_allocated);
 *VAR_1 = VAR_12;
 VAR_10 = VAR_2->buf;
 if (VAR_5)
  VAR_9 = VAR_2->buf = FUNC_6(VAR_5);
 else
  VAR_9 = VAR_10;
 VAR_11 = VAR_1->buf;

 for (VAR_6 = VAR_8 = VAR_7 = 0; VAR_6 < VAR_2->nr; VAR_6++) {
  size_t VAR_13 = VAR_2->line[VAR_6].len;
  if (!(VAR_2->line[VAR_6].flag & VAR_0)) {

   FUNC_4(VAR_9, VAR_10, VAR_13);
   VAR_10 += VAR_13;
   VAR_9 += VAR_13;
   continue;
  }


  VAR_10 += VAR_13;


  while (VAR_7 < VAR_1->nr &&
         !(VAR_1->line[VAR_7].flag & VAR_0)) {
   VAR_11 += VAR_1->line[VAR_7].len;
   VAR_7++;
  }





  if (VAR_1->nr <= VAR_7) {
   VAR_8++;
   continue;
  }


  VAR_13 = VAR_1->line[VAR_7].len;
  FUNC_3(VAR_9, VAR_11, VAR_13);
  VAR_9 += VAR_13;
  VAR_11 += VAR_13;
  VAR_2->line[VAR_6].len = VAR_13;
  VAR_7++;
 }

 if (VAR_5
     ? VAR_5 < VAR_9 - VAR_2->buf
     : VAR_2->len < VAR_9 - VAR_2->buf)
  FUNC_0("caller miscounted postlen: asked %d, orig = %d, used = %d",
      (int)VAR_5, (int) VAR_2->len, (int)(VAR_9 - VAR_2->buf));


 VAR_2->len = VAR_9 - VAR_2->buf;
 VAR_2->nr -= VAR_8;
}
