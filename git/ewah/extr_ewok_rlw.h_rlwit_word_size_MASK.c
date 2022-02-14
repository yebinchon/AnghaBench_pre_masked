
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t running_len; size_t literal_words; } ;
struct rlw_iterator {TYPE_1__ rlw; } ;



__attribute__((used)) static inline size_t FUNC_0(struct rlw_iterator *VAR_0)
{
 return VAR_0->rlw.running_len + VAR_0->rlw.literal_words;
}
