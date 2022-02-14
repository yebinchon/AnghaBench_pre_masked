
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etr_perf_buffer {unsigned long head; long nr_pages; scalar_t__ pages; struct etr_buf* etr_buf; } ;
struct etr_buf {unsigned long size; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,long) ;
 long FUNC_2 (long,long) ;
 long FUNC_3 (struct etr_buf*,unsigned long,unsigned long,char**) ;

__attribute__((used)) static void FUNC_4(struct etr_perf_buffer *VAR_2,
         unsigned long VAR_3,
         unsigned long VAR_4)
{
 long VAR_5;
 long VAR_6, VAR_7;
 unsigned long VAR_8 = VAR_2->head;
 char **VAR_9, *VAR_10;
 struct etr_buf *VAR_11 = VAR_2->etr_buf;

 VAR_8 = VAR_2->head;
 VAR_6 = VAR_8 >> VAR_0;
 VAR_7 = VAR_8 & (VAR_1 - 1);
 VAR_9 = (char **)VAR_2->pages;

 while (VAR_4 > 0) {
  if (VAR_3 >= VAR_11->size)
   VAR_3 -= VAR_11->size;
  VAR_5 = FUNC_3(VAR_11, VAR_3, VAR_4,
          &VAR_10);
  if (FUNC_0(VAR_5 <= 0))
   break;
  VAR_5 = FUNC_2(VAR_5, (long)(VAR_1 - VAR_7));

  FUNC_1(VAR_9[VAR_6] + VAR_7, VAR_10, VAR_5);

  VAR_4 -= VAR_5;


  VAR_7 += VAR_5;
  if (VAR_7 == VAR_1) {
   VAR_7 = 0;
   if (++VAR_6 == VAR_2->nr_pages)
    VAR_6 = 0;
  }


  VAR_3 += VAR_5;
 }
}
