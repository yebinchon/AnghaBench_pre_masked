
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hws_trailer_entry {unsigned long long flags; unsigned long long overflow; } ;
struct aux_buffer {int dummy; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 struct hws_trailer_entry* FUNC_0 (struct aux_buffer*,unsigned long) ;
 int FUNC_1 (unsigned long long*,unsigned long long*,unsigned long long,unsigned long long,unsigned long long,unsigned long long) ;

__attribute__((used)) static bool FUNC_2(struct aux_buffer *VAR_2, unsigned long VAR_3,
     unsigned long long *VAR_4)
{
 unsigned long long VAR_5, VAR_6, VAR_7;
 struct hws_trailer_entry *VAR_8;

 VAR_8 = FUNC_0(VAR_2, VAR_3);
 do {
  VAR_6 = VAR_8->flags;
  VAR_5 = VAR_8->overflow;
  *VAR_4 = VAR_5;
  if (VAR_6 & VAR_1) {





   return 0;
  }
  VAR_7 = VAR_6 | VAR_0;
 } while (!FUNC_1(&VAR_8->flags, &VAR_8->overflow,
     VAR_6, VAR_5,
     VAR_7, 0ULL));
 return 1;
}
