
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hws_trailer_entry {unsigned long long flags; unsigned long long overflow; } ;
struct aux_buffer {unsigned long alert_mark; unsigned long empty_mark; int head; } ;


 unsigned long FUNC_0 (struct aux_buffer*) ;
 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 struct hws_trailer_entry* FUNC_1 (struct aux_buffer*,unsigned long) ;
 int FUNC_2 (struct aux_buffer*,unsigned long,unsigned long long*) ;
 int FUNC_3 (unsigned long long*,unsigned long long*,unsigned long long,unsigned long long,unsigned long long,unsigned long long) ;

__attribute__((used)) static bool FUNC_4(struct aux_buffer *VAR_2, unsigned long VAR_3,
        unsigned long long *VAR_4)
{
 unsigned long long VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8, VAR_9, VAR_10;
 struct hws_trailer_entry *VAR_11;

 if (VAR_3 <= FUNC_0(VAR_2))





  return FUNC_2(VAR_2, VAR_2->alert_mark, VAR_4);

 if (VAR_2->alert_mark <= VAR_2->empty_mark)




  if (!FUNC_2(VAR_2, VAR_2->alert_mark, VAR_4))
   return 0;






 VAR_9 = VAR_3 - FUNC_0(VAR_2);
 VAR_10 = VAR_2->empty_mark + 1;
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++, VAR_10++) {
  VAR_11 = FUNC_1(VAR_2, VAR_10);
  do {
   VAR_6 = VAR_11->flags;
   VAR_5 = VAR_11->overflow;
   VAR_7 = VAR_6 & ~VAR_1;
   if (VAR_10 == VAR_2->alert_mark)
    VAR_7 |= VAR_0;
   else
    VAR_7 &= ~VAR_0;
  } while (!FUNC_3(&VAR_11->flags, &VAR_11->overflow,
      VAR_6, VAR_5,
      VAR_7, 0ULL));
  *VAR_4 += VAR_5;
 }


 VAR_2->empty_mark = VAR_2->head + VAR_3 - 1;

 return 1;
}
