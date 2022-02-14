
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {scalar_t__ magic; scalar_t__ total_bytes; scalar_t__ last_offset; scalar_t__ first_offset; scalar_t__ last; scalar_t__ first; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

void FUNC_1 (struct raw_message *VAR_2) {
  FUNC_0 (VAR_2->magic == VAR_0 || VAR_2->magic == VAR_1);
  VAR_2->first = VAR_2->last = 0;
  VAR_2->first_offset = VAR_2->last_offset = 0;
  VAR_2->total_bytes = 0;
}
